<?php
/**
 * @file
 * content_type_exhibit.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function content_type_exhibit_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'exhibit_detail';
  $context->description = '';
  $context->tag = 'exhibit';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'exhibit' => 'exhibit',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'exhibits',
    'menu' => 'exhibits',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('exhibit');
  $export['exhibit_detail'] = $context;

  return $export;
}
