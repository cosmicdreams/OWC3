<?php
/**
 * @file
 * jj_business_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jj_business_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Business Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Business Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
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
  /* Contextual filter: business type term */
  $handler->display->display_options['arguments']['field_business_types_tid']['id'] = 'field_business_types_tid';
  $handler->display->display_options['arguments']['field_business_types_tid']['table'] = 'field_data_field_business_types';
  $handler->display->display_options['arguments']['field_business_types_tid']['field'] = 'field_business_types_tid';
  $handler->display->display_options['arguments']['field_business_types_tid']['ui_name'] = 'business type term';
  $handler->display->display_options['arguments']['field_business_types_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_business_types_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_business_types_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_business_types_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_business_types_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_business_types_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_business_types_tid']['validate_options']['vocabularies'] = array(
    'business_types' => 'business_types',
  );
  $handler->display->display_options['arguments']['field_business_types_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_business_types_tid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['arguments']['field_business_types_tid']['break_phrase'] = TRUE;
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
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'company';
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
  $handler->display->display_options['filters']['field_business_types_tid']['expose']['identifier'] = 'type';
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
  $handler->display->display_options['filters']['field_business_features_tid']['expose']['identifier'] = 'features';
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
  /* Filter criterion: Vote results: Value */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['filters']['value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['operator_id'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['label'] = 'Value';
  $handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['identifier'] = 'value';
  $handler->display->display_options['filters']['value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['value']['group_info']['label'] = 'Rating';
  $handler->display->display_options['filters']['value']['group_info']['identifier'] = 'rating';
  $handler->display->display_options['filters']['value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1 Star & Up',
      'operator' => '>=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '2 Stars & Up',
      'operator' => '>=',
      'value' => array(
        'value' => '19',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '3 Stars & Up',
      'operator' => '>=',
      'value' => array(
        'value' => '39',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => '4 Stars & Up',
      'operator' => '>=',
      'value' => array(
        'value' => '59',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => '5 Stars',
      'operator' => '>=',
      'value' => array(
        'value' => '79',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['admin_title'] = 'Business Directory';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'field_business_types_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
    ),
  );
  $export['business_directory'] = $view;

  return $export;
}
