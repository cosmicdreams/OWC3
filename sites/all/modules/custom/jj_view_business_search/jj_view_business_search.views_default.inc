<?php
/**
 * @file
 * jj_view_business_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jj_view_business_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Business Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Business Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Business Types */
  $handler->display->display_options['fields']['field_business_types']['id'] = 'field_business_types';
  $handler->display->display_options['fields']['field_business_types']['table'] = 'field_data_field_business_types';
  $handler->display->display_options['fields']['field_business_types']['field'] = 'field_business_types';
  $handler->display->display_options['fields']['field_business_types']['delta_offset'] = '0';
  /* Field: Content: Business Features */
  $handler->display->display_options['fields']['field_business_features']['id'] = 'field_business_features';
  $handler->display->display_options['fields']['field_business_features']['table'] = 'field_data_field_business_features';
  $handler->display->display_options['fields']['field_business_features']['field'] = 'field_business_features';
  $handler->display->display_options['fields']['field_business_features']['delta_offset'] = '0';
  /* Sort criterion: Content: Promoted to front page */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
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
    'business' => 'business',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Business Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Business Types (field_business_types) */
  $handler->display->display_options['filters']['field_business_types_tid']['id'] = 'field_business_types_tid';
  $handler->display->display_options['filters']['field_business_types_tid']['table'] = 'field_data_field_business_types';
  $handler->display->display_options['filters']['field_business_types_tid']['field'] = 'field_business_types_tid';
  $handler->display->display_options['filters']['field_business_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_business_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_business_types_tid']['expose']['operator_id'] = 'field_business_types_tid_op';
  $handler->display->display_options['filters']['field_business_types_tid']['expose']['label'] = 'Business Type';
  $handler->display->display_options['filters']['field_business_types_tid']['expose']['operator'] = 'field_business_types_tid_op';
  $handler->display->display_options['filters']['field_business_types_tid']['expose']['identifier'] = 'field_business_types_tid';
  $handler->display->display_options['filters']['field_business_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_business_types_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_business_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_business_types_tid']['vocabulary'] = 'business_types';
  $handler->display->display_options['filters']['field_business_types_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Business Features (field_business_features) */
  $handler->display->display_options['filters']['field_business_features_tid']['id'] = 'field_business_features_tid';
  $handler->display->display_options['filters']['field_business_features_tid']['table'] = 'field_data_field_business_features';
  $handler->display->display_options['filters']['field_business_features_tid']['field'] = 'field_business_features_tid';
  $handler->display->display_options['filters']['field_business_features_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_business_features_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_business_features_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_business_features_tid']['expose']['operator_id'] = 'field_business_features_tid_op';
  $handler->display->display_options['filters']['field_business_features_tid']['expose']['label'] = 'Features';
  $handler->display->display_options['filters']['field_business_features_tid']['expose']['operator'] = 'field_business_features_tid_op';
  $handler->display->display_options['filters']['field_business_features_tid']['expose']['identifier'] = 'field_business_features_tid';
  $handler->display->display_options['filters']['field_business_features_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_business_features_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_business_features_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_business_features_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_business_features_tid']['vocabulary'] = 'business_features';
  $handler->display->display_options['filters']['field_business_features_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'business-search';
  $export['business_search'] = $view;

  return $export;
}
