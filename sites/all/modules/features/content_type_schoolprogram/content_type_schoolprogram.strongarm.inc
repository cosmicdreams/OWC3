<?php
/**
 * @file
 * content_type_schoolprogram.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_schoolprogram_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_schoolprogram';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_schoolprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_schoolprogram';
  $strongarm->value = '1';
  $export['node_preview_schoolprogram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_schoolprogram';
  $strongarm->value = 0;
  $export['node_submitted_schoolprogram'] = $strongarm;

  return $export;
}
