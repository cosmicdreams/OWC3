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
function jj_custom_blocks_block_omnibox_block_view() {
  $form = drupal_get_form('_jj_custom_blocks_omnibox_form');
  return array(
    'subject' => t('Omnibox'),
    'content' => drupal_render($form),
  );
}

/**
 * Block form.
 */
function _jj_custom_blocks_omnibox_form($form = array(), &$form_state = array()) {
  $form['q'] = array(
    '#type' => 'textfield',
    '#size' => 60,
    '#maxlength' => 100,
    '#title' => t('Find a business'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Continue'),
  );

  $form['#validate'][] = '_jj_custom_blocks_omnibox_form_validate';
  $form['#submit'][] = '_jj_custom_blocks_omnibox_form_submit';

  return $form;
}

/**
 * Validates the form submission.
 */
function _jj_custom_blocks_omnibox_form_validate($form = array(), &$form_state = array()) {
}

/**
 * Submis the form.
 */
function _jj_custom_blocks_omnibox_form_submit($form = array(), &$form_state = array()) {
  // We've passed validation. Move ahead.

  // Repopulate data so we can hand it off.
  $form_state['rebuild'] = TRUE;

  // Send the user to the contact us page.
  $form_state['redirect'] = array(
    'businesses',
    'query' => array(
      'business_name' => ! empty($form_state['values']['q']) ? $form_state['values']['q'] : '',
    ),
  );
}
