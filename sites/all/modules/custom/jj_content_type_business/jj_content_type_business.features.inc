<?php
/**
 * @file
 * jj_content_type_business.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jj_content_type_business_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
