<?php

/**
 * @file
 * Functions for work with forms.
 */

/**
 * Form builder for comment abuse options.
 */
function comment_abuse_options_form() {

  $form = array();

  $form['notifications'] = array(
    '#type' => 'fieldset',
    '#title' => t('Notifications'),
    '#weight' => 2,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['notifications']['comment_abuse_email_notification'] = array(
    '#type' => 'checkbox',
    '#title' => t('Send a notification when you receive a complaint..'),
    '#default_value' => variable_get('comment_abuse_email_notification', 0),
  );

  $form['notifications']['comment_abuse_email_list'] = array(
    '#title' => t('E-mail list'),
    '#type' => 'textarea',
    '#description' => t('Enter a comma-separated email addresses, to which you
       want receive notification of complaints to the comments.'),
    '#default_value' => variable_get('comment_abuse_email_list', ''),
  );

  $form['filter_by_ct'] = array(
    '#type' => 'fieldset',
    '#title' => t('Filter by content types'),
    '#weight' => 3,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $content_types = node_type_get_types();

  $form['filter_by_ct']['description'] = array(
    '#markup' => t('Check these content types if you do not want to show a link
      of complaint to the comments for them.'),
  );

  foreach ($content_types as $ct) {
    $form['filter_by_ct']['comment_abuse_comment_node_' . $ct->type] = array(
      '#type' => 'checkbox',
      '#title' => $ct->type,
      '#default_value' => variable_get('comment_abuse_comment_node_' . $ct->type, 0),
    );
  }

  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced'),
    '#weight' => 4,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['advanced']['comment_abuse_use_popup'] = array(
    '#type' => 'radios',
    '#title' => t('Use the form to send complaints..'),
    '#options' => array(
      0 => t('Use simple link for complaints.'),
      1 => t('Use the popup with a form to send complaints to the comments.'),
    ),
    '#default_value' => variable_get('comment_abuse_use_popup', 1),
  );

  return system_settings_form($form);
}

/**
 * Complaint on comment form.
 */
function comment_abuse_complaint_form() {
  $form = array();

  $form['form_wrapper']  = array(
    '#tree' => FALSE,
    '#prefix' => '<div id="complaint-form-wrapper">',
    '#suffix' => '</div>',
    '#theme' => 'complaint-form-wrapper',
  );

  $form['form_wrapper']['comment_abuse_complaint_reason'] = array(
    '#type' => 'select',
    '#title' => t('Reason'),
    '#options' => comment_abuse_get_complaint_reasons(),
  );

  $form['form_wrapper']['comment_abuse_complaint_message'] = array(
    '#title' => t('Message'),
    '#type' => 'textarea',
    '#default_value' => '',
  );

  $form['form_wrapper']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Send complaint.'),
  );

  return $form;
}

/**
 * Validate complaint form.
 */
function comment_abuse_complaint_form_validate($form, &$form_state) {
  if (empty($form_state['values']['comment_abuse_complaint_message'])) {
    form_set_error('comment_abuse_complaint_message', t('You should specify the text of the complaint.'));
  }
  elseif (strlen(trim($form_state['values']['comment_abuse_complaint_message'])) > 255) {
    form_set_error('comment_abuse_complaint_message', t('The maximum message length is 255 characters.'));
  }  
}

/**
 * Submit complaint form.
 */
function comment_abuse_complaint_form_submit($form, &$form_state) {
  module_load_include('inc', 'comment_abuse', 'comment_abuse.pages');
  $cid = $form_state['build_info']['args'][0]['cid'];
  comment_abuse_content($cid, $form_state);
}
