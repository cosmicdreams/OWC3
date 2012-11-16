<?php
/**
 * @file
 * payments_donations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function payments_donations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_donation_product';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_donation_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_donation_product';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_donation_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_donation_product';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_donation_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_donation_product';
  $strongarm->value = '1';
  $export['node_preview_donation_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_donation_product';
  $strongarm->value = 0;
  $export['node_submitted_donation_product'] = $strongarm;

  return $export;
}
