<?php
/**
 * @file
 * content_type_partner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_partner_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function content_type_partner_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function content_type_partner_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
