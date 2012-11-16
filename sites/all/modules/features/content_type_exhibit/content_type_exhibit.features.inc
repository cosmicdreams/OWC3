<?php
/**
 * @file
 * content_type_exhibit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_exhibit_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function content_type_exhibit_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function content_type_exhibit_image_default_styles() {
  $styles = array();

  // Exported image style: exhibit_teaser
  $styles['exhibit_teaser'] = array(
    'name' => 'exhibit_teaser',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '210',
          'height' => '144',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function content_type_exhibit_node_info() {
  $items = array(
    'exhibit' => array(
      'name' => t('Exhibit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
