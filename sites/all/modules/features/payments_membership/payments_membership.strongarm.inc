<?php
/**
 * @file
 * payments_membership.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function payments_membership_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_membership';
  $strongarm->value = array();
  $export['menu_options_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_membership';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_membership';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_membership';
  $strongarm->value = '1';
  $export['node_preview_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_membership';
  $strongarm->value = 0;
  $export['node_submitted_membership'] = $strongarm;

  return $export;
}
