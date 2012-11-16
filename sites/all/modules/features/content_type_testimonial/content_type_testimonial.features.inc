<?php
/**
 * @file
 * content_type_testimonial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_testimonial_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function content_type_testimonial_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
