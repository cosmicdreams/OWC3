<?php
/**
 * @file
 * content_type_schoolprogram.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function content_type_schoolprogram_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'schoolprogram_detail';
  $context->description = '';
  $context->tag = 'schoolprogram';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'schoolprogram' => 'schoolprogram',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'schools',
    'menu' => 'schools',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('schoolprogram');
  $export['schoolprogram_detail'] = $context;

  return $export;
}
