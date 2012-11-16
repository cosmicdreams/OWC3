<?php
/**
 * @file
 * content_type_room.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_room_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function content_type_room_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function content_type_room_node_info() {
  $items = array(
    'room' => array(
      'name' => t('Room'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
