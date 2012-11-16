<?php
/**
 * @file
 * payments_donations.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function payments_donations_commerce_line_item_default_types() {
  $items = array(
    'donation' => array(
      'type' => 'donation',
      'name' => 'Donation',
      'description' => '',
      'product' => '1',
      'add_form_submit_value' => 'Make a contribution',
      'base' => 'commerce_product_line_item',
      'module' => 'commerce_custom_line_items',
      'callbacks' => array(
        'configuration' => 'commerce_product_line_item_configuration',
        'title' => 'commerce_product_line_item_title',
        'add_form' => 'commerce_product_line_item_add_form',
        'add_form_submit' => 'commerce_product_line_item_add_form_submit',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function payments_donations_commerce_product_default_types() {
  $items = array(
    'donation' => array(
      'type' => 'donation',
      'name' => 'Donation',
      'description' => '',
      'help' => '',
      'revision' => '0',
      'module' => 'commerce_product_ui',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function payments_donations_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function payments_donations_node_info() {
  $items = array(
    'donation_product' => array(
      'name' => t('Donation Product'),
      'base' => 'node_content',
      'description' => t('Donation product page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
