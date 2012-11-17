<?php
/**
 * @file
 * jj_content_type_business.features.inc
 */

/**
 * Implements hook_node_info().
 */
function jj_content_type_business_node_info() {
  $items = array(
    'business' => array(
      'name' => t('Business'),
      'base' => 'node_content',
      'description' => t('Create a Business Profile page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
