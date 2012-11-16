<?php
/**
 * @file
 * payments_membership.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function payments_membership_commerce_line_item_default_types() {
  $items = array(
    'membership' => array(
      'type' => 'membership',
      'name' => 'Membership',
      'description' => '',
      'product' => '1',
      'add_form_submit_value' => 'Acquire Membership',
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
function payments_membership_commerce_product_default_types() {
  $items = array(
    'membership' => array(
      'type' => 'membership',
      'name' => 'Membership',
      'description' => '',
      'help' => '',
      'revision' => '1',
      'module' => 'commerce_product_ui',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function payments_membership_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function payments_membership_node_info() {
  $items = array(
    'membership' => array(
      'name' => t('Membership'),
      'base' => 'node_content',
      'description' => t('Displayed content for memberships'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
