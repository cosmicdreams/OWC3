<?php
/**
 * @file
 * jj_content_type_resource.features.inc
 */

/**
 * Implements hook_node_info().
 */
function jj_content_type_resource_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
