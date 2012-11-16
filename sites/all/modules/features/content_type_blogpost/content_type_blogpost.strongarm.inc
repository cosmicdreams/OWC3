<?php
/**
 * @file
 * content_type_blogpost.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_blogpost_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blogpost';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_blogpost';
  $strongarm->value = '1';
  $export['node_preview_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_blogpost';
  $strongarm->value = 0;
  $export['node_submitted_blogpost'] = $strongarm;

  return $export;
}
