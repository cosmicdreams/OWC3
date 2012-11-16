<?php
/**
 * @file
 * content_type_camp.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function content_type_camp_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'camp_detail';
  $context->description = '';
  $context->tag = 'camp';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'camp' => 'camp',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'youth-camps',
    'menu' => 'youth-camps',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('camp');
  $export['camp_detail'] = $context;

  return $export;
}
