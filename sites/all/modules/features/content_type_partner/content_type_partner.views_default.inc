<?php
/**
 * @file
 * content_type_partner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_type_partner_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'partner_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partner List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partner List';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_partner_link']['id'] = 'field_partner_link';
  $handler->display->display_options['fields']['field_partner_link']['table'] = 'field_data_field_partner_link';
  $handler->display->display_options['fields']['field_partner_link']['field'] = 'field_partner_link';
  $handler->display->display_options['fields']['field_partner_link']['label'] = '';
  $handler->display->display_options['fields']['field_partner_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partner_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_partner_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_partner_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_partner_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_partner_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_partner_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_partner_link']['field_api_classes'] = 0;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_partner_logo']['id'] = 'field_partner_logo';
  $handler->display->display_options['fields']['field_partner_logo']['table'] = 'field_data_field_partner_logo';
  $handler->display->display_options['fields']['field_partner_logo']['field'] = 'field_partner_logo';
  $handler->display->display_options['fields']['field_partner_logo']['label'] = '';
  $handler->display->display_options['fields']['field_partner_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_partner_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_partner_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_partner_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_partner_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_partner_logo']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_partner_link]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partner' => 'partner',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['partner_list'] = $view;

  return $export;
}
