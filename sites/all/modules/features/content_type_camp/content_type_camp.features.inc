<?php
/**
 * @file
 * content_type_camp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_camp_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function content_type_camp_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function content_type_camp_node_info() {
  $items = array(
    'camp' => array(
      'name' => t('Camp'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
