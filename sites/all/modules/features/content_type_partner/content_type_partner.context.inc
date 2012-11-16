<?php
/**
 * @file
 * content_type_partner.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function content_type_partner_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'partner_detail';
  $context->description = '';
  $context->tag = 'partner';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'partner' => 'partner',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'help-us/partnership',
    'menu' => 'help-us/partnership',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('partner');
  $export['partner_detail'] = $context;

  return $export;
}
