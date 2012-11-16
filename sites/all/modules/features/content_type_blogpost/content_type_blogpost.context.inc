<?php
/**
 * @file
 * content_type_blogpost.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function content_type_blogpost_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blogpost_detail';
  $context->description = '';
  $context->tag = 'blogpost';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blogpost' => 'blogpost',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'about-us/blog',
    'menu' => 'about-us/blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogpost');
  $export['blogpost_detail'] = $context;

  return $export;
}
