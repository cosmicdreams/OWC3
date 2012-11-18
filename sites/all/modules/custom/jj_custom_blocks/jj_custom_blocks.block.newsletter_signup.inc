<?php

/**
 * @file
 *  Newsletter signup footer block.
 */

/**
 * Displays the newsletter footer block.
 * @see hook_block_view()
 * @see jj_custom_blocks_block_view()
 */
function jj_custom_blocks_block_newsletter_signup_block_view() {
  $form = drupal_get_form('_jj_custom_blocks_newsletter_signup_form');
  return array(
    'subject' => t('Newsletter'),
    'content' => drupal_render($form),
  );
}

/**
 * Block form.
 */
function _jj_custom_blocks_newsletter_signup_form($form = array(), &$form_state = array()) {
  $form['text'] = array(
    '#type' => 'markup',
    '#markup' => t('Get announcements and news in your email.'),
    '#attributes' => array(
    ),
  );

  $form['email'] = array(
    '#type' => 'textfield',
    '#size' => 60,
    '#maxlength' => 150,
    '#title' => t('Email Address'),
    '#attributes' => array(
      'placeholder' => t('Your email address'),
    ),
  );

  $form['after'] = array(
    '#type' => 'markup',
    '#markup' => t('We will not share your email address with anyone, ever.'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Continue'),
  );

  $form['#validate'][] = '_jj_custom_blocks_block_newsletter_form_validate';
  $form['#submit'][] = ' _jj_custom_blocks_block_newsletter_form_submit';

  return $form;
}

/**
 * Validates the form submission.
 */
function _jj_custom_blocks_block_newsletter_form_validate($form = array(), &$form_state = array()) {
  if (empty($form_state['values']['email'])) {
    form_set_error('email', t('Please enter your email address.'));
  } elseif (! filter_var($form_state['values']['email'], FILTER_VALIDATE_EMAIL)) {
    form_set_error('email', t('Please enter a valid email address.'));
  }
}

/**
 * Submis the form.
 */
function _jj_custom_blocks_block_newsletter_form_submit($form = array(), &$form_state = array()) {
  // We've passed validation. Move ahead.

  // Repopulate data so we can hand it off.
  $form_state['rebuild'] = TRUE;

  // Send the user to the contact us page.
  $form_state['redirect'] = array(
    'contact-us',
    'query' => array(
      'email' => $form_state['values']['email'],
    ),
  );
}
