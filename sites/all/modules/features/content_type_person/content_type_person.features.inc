<?php
/**
 * @file
 * content_type_person.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_person_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function content_type_person_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function content_type_person_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Researchers, staff memebrs, and board of directors personnel.'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  return $items;
}
