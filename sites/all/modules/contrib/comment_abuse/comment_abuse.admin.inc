<?php

/**
 * @file
 * Form builder, submit, validate and operation functions for managing
 * complaints about comments.
 */

/**
 * Menu callback; administration of listing complaints on comments.
 */
function comment_abuse_admin() {
  $edit = $_POST;
  if (isset($edit['operation']) && ($edit['operation'] == 'delete') && isset($edit['comments']) && $edit['comments']) {
    module_load_include('inc', 'comment', 'comment.admin');
    return drupal_get_form('comment_abuse_multiple_delete_confirm');
  }
  else {
    return drupal_get_form('comment_abuse_list_form');
  }
}

/**
 * Form builder. Builds the complaints on comments overview form for the admin.
 */
function comment_abuse_list_form() {
  $form['options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Update options'),
    '#attributes' => array('class' => array('container-inline')),
  );

  $options = array();
  $options['publish'] = t('Publish the selected comments');
  $options['unpublish'] = t('Unpublish the selected comments');
  $options['delete'] = t('Delete the selected comments');
  $options['remove_complaint'] = t('Remove the selected complaints');
  $options['remove_complaints'] = t('Remove all complaints for selected comments');

  $form['options']['operation'] = array(
    '#type' => 'select',
    '#title' => t('Operation'),
    '#title_display' => 'invisible',
    '#options' => $options,
    '#default_value' => 'publish',
  );

  $form['options']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update'),
  );

  // Limit complaints on comments on page.
  global $base_url;
  $url = $base_url . '/' . request_path() . '?';
  foreach ($_REQUEST as $key => $value) {
    $url .= ($key != 'q' && $key != 'page-limit') ? '&' : '';
    // Don't add old page-limit parameter.
    $url .= ($key != 'page-limit') ? "$key=$value" : '';
  }

  $output = t('<b>Limit complaints on page: </b>');
  $output .= ' ' . l(10, $url . '&page-limit=10');
  $output .= ' ' . l(25, $url . '&page-limit=25');
  $output .= ' ' . l(50, $url . '&page-limit=50');
  $output .= ' ' . l(100, $url . '&page-limit=100');
  $output .= ' ' . l(t('Show all'), $url . '&page-limit=ALL');

  $form['options']['markup'] = array(
    '#markup' => $output,
  );

  // Load the comments that need to be displayed.
  $header = array(
    'cid' => t('Comment ID'),
    'status' => array('data' => t('Status'), 'class' => 'ca-complaint-list-th-common'),
  );

  // Complaint form mode.
  if (variable_get('comment_abuse_use_popup', 1)) {
    $header += array(
      'reason' => array('data' => t('Reason'), 'class' => 'ca-complaint-list-th-common'),
      'message' => array('data' => t('Message'), 'class' => 'ca-complaint-list-th-message'),
    );
  }

  $header += array(
    'author' => array('data' => t('Author of comment'), 'class' => 'ca-complaint-list-th-common'),
    'complainant' => array('data' => t('Complaintant'), 'class' => 'ca-complaint-list-th-common'),
    'posted_in' => array('data' => t('Posted in'), 'class' => 'ca-complaint-list-th-common'),
    'time' => array('data' => t('Time of complaint'), 'field' => 'ca.timestamp', 'sort' => 'desc'),
    'operations' => array('data' => t('Operations')),
  );

  // Limiting results on page.
  if (isset ($_GET['page-limit']) && ((int) ($_GET['page-limit']) != 0 || $_GET['page-limit'] == 'ALL')) {
    $page_limit = $_GET['page-limit'];
  }
  else {
    $page_limit = COMMENT_ABUSE_DEFAULT_COMPLAINTS_ON_PAGE;
  }

  $query = db_select('comment', 'c')->extend('TableSort');
  $query->join('node', 'n', 'n.nid = c.nid');
  $query->join('comment_abuse', 'ca', 'c.cid = ca.cid');
  $query->addField('n', 'title', 'node_title');
  $query->addField('c', 'uid', 'comment_uid');
  $query->addField('ca', 'uid', 'complaint_uid');
  $query->addTag('node_access');
  if ($page_limit != 'ALL') {
    $query->range(0, $page_limit);
  }

  $result = $query
    ->fields('c', array('cid', 'name', 'status', 'nid'))
    ->fields('ca', array('aid', 'timestamp', 'reason', 'message'))
    ->orderByHeader($header)
    ->execute();

  // We collect a sorted list of node_titles during the query to attach to the
  // comments later.
  $complaint_comment = array();
  $cids = array();
  foreach ($result as $row) {
    $complaint_comment[$row->aid] = $row;
    $cids[$row->cid] = $row->cid;
    $node_titles[] = $row->node_title;
  }

  $complaint_reasons = comment_abuse_get_complaint_reasons();

  // Build a table listing the appropriate comments.
  $options = array();
  $destination = drupal_get_destination();

  $users = array();

  foreach ($complaint_comment as $complaint) {

    // Comment author.
    // User is not loaded.
    if (!isset($users[$complaint->comment_uid])) {
      $author = user_load($complaint->comment_uid);
      // Registered user.
      if ($author && $author->uid) {
        $users[$complaint->comment_uid] = $author->name;
        $author_link = l($users[$complaint->comment_uid], 'user/' . $complaint->comment_uid);
      }
      // Anonymous user.
      else {
        $users[$complaint->comment_uid] = t('Anonymous');
        $author_link = $users[$complaint->comment_uid];
      }
    }
    // User is loaded.
    else {
      // Registered user.
      if ($complaint->comment_uid != 0) {
        $author_link = l($users[$complaint->comment_uid], 'user/' . $complaint->comment_uid);
      }
      // Anonymous user.
      else {
        $author_link = $users[$complaint->comment_uid];
      }
    }

    // Complaintant.
    // User is not loaded.
    if (!isset($users[$complaint->complaint_uid])) {
      $complaintant = user_load($complaint->complaint_uid);
      // Registered user.
      if ($complaintant && $complaintant->uid) {
        $users[$complaint->complaint_uid] = $complaintant->name;
        $complaintant_link = l($users[$complaint->complaint_uid], 'user/' . $complaint->complaint_uid);
      }
      // Anonymous user.
      else {
        $users[$complaint->complaint_uid] = t('Anonymous');
        $complaintant_link = $users[$complaint->complaint_uid];
      }
    }
    // User is loaded.
    else {
      // Registered user.
      if ($complaint->complaint_uid != 0) {
        $complaintant_link = l($users[$complaint->complaint_uid], 'user/' . $complaint->complaint_uid);
      }
      // Anonymous user.
      else {
        $complaintant_link = $users[$complaint->complaint_uid];
      }
    }

    // Remove the first node title from the node_titles array and attach to
    // the comment.
    $complaint->node_title = array_shift($node_titles);
    $options[$complaint->aid] = array(
      'cid' => $complaint->cid,
      'status' => ($complaint->status) ? t('Published') : t('Not Published'),
      'author' => $author_link,
      'complainant' => $complaintant_link,
      'posted_in' => array(
        'data' => array(
          '#type' => 'link',
          '#title' => $complaint->node_title,
          '#href' => 'node/' . $complaint->nid,
        ),
      ),
      'reason' => (isset($complaint_reasons[$complaint->reason]))
        ? check_plain($complaint_reasons[$complaint->reason])
        : '',
      'message' => check_plain($complaint->message),
      'time' => format_date($complaint->timestamp, 'medium'),
      'operations' => array(
        'data' => array(
          '#type' => 'link',
          '#title' => t('edit'),
          '#href' => 'comment/' . $complaint->cid . '/edit',
          '#options' => array('query' => $destination),
        ),
      ),
    );
  }

  $form['complaints'] = array(
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $options,
    '#empty' => t('No complaints about the comments.'),
  );

  return $form;
}

/**
 * Validate comment_abuse_admin_overview form submissions.
 *
 * We can't execute any 'Update options' if no comments were selected.
 */
function comment_abuse_list_form_validate($form, &$form_state) {
  $form_state['values']['complaints'] = array_diff($form_state['values']['complaints'], array(0));
  if (count($form_state['values']['complaints']) == 0) {
    form_set_error('', t('Please select one or more comments to perform the update on.'));
  }
}

/**
 * Process admin form for complaints on comments list.
 */
function comment_abuse_list_form_submit(&$form, &$form_state) {
  $operation = $form_state['values']['operation'];
  $aids = $form_state['values']['complaints'];
  // Remove complaints on comments.
  if ($operation == 'remove_complaint') {
    $aids = array_filter($aids);
    db_delete('comment_abuse')
    ->condition('aid', array_keys($aids), 'IN')
    ->execute();
  }
  else {
    $cids = comment_abuse_get_cids_by_aids($aids);

    if ($operation == 'remove_complaints') {
      db_delete('comment_abuse')
      ->condition('cid', array_keys($cids), 'IN')
      ->execute();
    }
    elseif ($operation == 'delete') {
      comment_delete_multiple($cids);
    }
    else {
      foreach ($cids as $cid => $value) {
        $comment = comment_load($value);

        if ($operation == 'unpublish') {
          $comment->status = COMMENT_NOT_PUBLISHED;
        }
        elseif ($operation == 'publish') {
          $comment->status = COMMENT_PUBLISHED;
        }
        comment_save($comment);
      }
    }
  }

  drupal_set_message(t('The update has been performed.'));
  $form_state['redirect'] = COMMENT_ABUSE_LISTING_PATH;
  cache_clear_all();
}

/**
 * List the selected comments and verify that the admin really wants to delete them.
 * @see comment_abuse_multiple_delete_confirm_submit()
 */
function comment_abuse_multiple_delete_confirm($form, &$form_state) {

  $form['comments'] = array(
    '#prefix' => '<ul>',
    '#suffix' => '</ul>',
    '#tree' => TRUE,
  );
  // array_filter() returns only elements with actual values.
  $comment_counter = 0;
  $cids = comment_abuse_get_cids_by_aids($form_state['input']);
  var_dump($cids);die;
  foreach (array_filter($cids) as $cid => $value) {
    $comment = comment_load($cid);
    if (is_object($comment) && is_numeric($comment->cid)) {
      $subject = db_query('SELECT subject FROM {comment} WHERE cid = :cid', array(':cid' => $cid))->fetchField();
      $form['comments'][$cid] = array(
        '#type' => 'hidden',
        '#value' => $cid,
        '#prefix' => '<li>',
        '#suffix' => check_plain($subject) . '</li>'
      );
      $comment_counter++;
    }
  }
  $form['operation'] = array('#type' => 'hidden', '#value' => 'delete');

  if (!$comment_counter) {
    drupal_set_message(t('There do not appear to be any comments to delete, or your selected comment was deleted by another administrator.'));
    drupal_goto(COMMENT_ABUSE_LISTING_PATH);
  }
  else {
    return confirm_form($form,
                        t('Are you sure you want to delete these comments and all their children?'),
                        COMMENT_ABUSE_LISTING_PATH, t('This action cannot be undone.'),
                        t('Delete comments'), t('Cancel'));
  }
}

/**
 * Process comment_abuse_multiple_delete_confirm form submissions.
 *
 * Perform the actual comment deletion.
 */
function comment_abuse_multiple_delete_confirm_submit($form, &$form_state) {
  if ($form_state['values']['confirm']) {
    comment_delete_multiple(array_keys($form_state['values']['comments']));
    cache_clear_all();
    $count = count($form_state['values']['comments']);
    watchdog('content', 'Deleted @count comments.', array('@count' => $count));
    drupal_set_message(format_plural($count, 'Deleted 1 comment.', 'Deleted @count comments.'));
  }
  $form_state['redirect'] = COMMENT_ABUSE_LISTING_PATH;
}

/**
 * Get array of ccomment IDs by aids.
 */
function comment_abuse_get_cids_by_aids($aids) {
  $query = db_select('comment_abuse', 'ca');
  $result = $query->fields('ca', array('cid'))
    ->condition('aid', array_keys($aids), 'IN')
    ->execute();

  $cids = array();
  foreach ($result as $row) {
    $cids[$row->cid] = $row->cid;
  }

  return $cids;
}
