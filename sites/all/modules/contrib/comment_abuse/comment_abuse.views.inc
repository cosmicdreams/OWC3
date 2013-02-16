<?php

/**
 * @file
 * Functions for views handlers definition.
 */

/**
 * Implements hook_views_handlers().
 */
function comment_abuse_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'comment_abuse') . '/handlers',
    ),
    'handlers' => array(
      'CommentAbuseHandlerFieldUserIp' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

/**
 * Implements hook_views_data_alter().
 */
function comment_abuse_views_data() {

  // Join.
  $data['comment_abuse']['table']['join'] = array(
    'comment' => array(
      'left_field' => 'cid',
      'field' => 'cid',
    ),
  );

  $data['comment_abuse']['ip'] = array(
    'title' => t('User IP'),
    'help' => t('User IP who complain comment'),
    'group' => t('Comment abuse'),
    'field' => array(
      'handler' => 'CommentAbuseHandlerFieldUserIp',
      'base' => 'comment_abuse',
      'base field' => 'ip',
    ),
  );

  $data['comment_abuse']['comment_abuse_user_id'] = array(
    'title' => t('User ID'),
    'help' => t('User ID who complained'),
    'group' => t('Comment abuse'),
    'field' => array(
      'handler' => 'views_handler_field',
      'field' => 'uid',
    ),
  );

  $data['comment_abuse']['comment_abuse_timestamp'] = array(
    'title' => t('Comment complaint timestamp'),
    'help' => t('Comment complaint timestamp'),
    'group' => t('Comment abuse'),
    'field' => array(
      'handler' => 'views_handler_field',
      'field' => 'timestamp',
    ),
  );

  return $data;
}
