<?php
/**
 * @file
 * jj_content_type_review.features.inc
 */

/**
 * Implements hook_views_api().
 */
function jj_content_type_review_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function jj_content_type_review_node_info() {
  $items = array(
    'review' => array(
      'name' => t('Review'),
      'base' => 'node_content',
      'description' => t('A review submitted by a user for an individual business.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
