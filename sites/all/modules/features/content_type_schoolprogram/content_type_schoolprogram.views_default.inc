<?php
/**
 * @file
 * content_type_schoolprogram.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_type_schoolprogram_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'schoolprogram_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SchoolProgram List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
    'schoolprogram' => 'schoolprogram',
  );
  /* Filter criterion: Content: Type (field_schoolprogram_type) */
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['id'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['table'] = 'field_data_field_schoolprogram_type';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['field'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['value'] = array(
    'Guided Tours' => 'Guided Tours',
  );
  /* Filter criterion: Content: Where (field_schoolprogram_where) */
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['id'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['table'] = 'field_data_field_schoolprogram_where';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['field'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['value'] = array(
    'Field Trip' => 'Field Trip',
  );

  /* Display: Field Trips / Guided Tours */
  $handler = $view->new_display('block', 'Field Trips / Guided Tours', 'block');

  /* Display: Field Trips / Workshops */
  $handler = $view->new_display('block', 'Field Trips / Workshops', 'block_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'schoolprogram' => 'schoolprogram',
  );
  /* Filter criterion: Content: Type (field_schoolprogram_type) */
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['id'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['table'] = 'field_data_field_schoolprogram_type';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['field'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['value'] = array(
    'Workshops' => 'Workshops',
  );
  /* Filter criterion: Content: Where (field_schoolprogram_where) */
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['id'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['table'] = 'field_data_field_schoolprogram_where';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['field'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['value'] = array(
    'Field Trip' => 'Field Trip',
  );

  /* Display: Field Trips / Field Trip Science Theaters */
  $handler = $view->new_display('block', 'Field Trips / Field Trip Science Theaters', 'block_2');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'schoolprogram' => 'schoolprogram',
  );
  /* Filter criterion: Content: Type (field_schoolprogram_type) */
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['id'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['table'] = 'field_data_field_schoolprogram_type';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['field'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['value'] = array(
    'Field Trip Science Theaters' => 'Field Trip Science Theaters',
  );
  /* Filter criterion: Content: Where (field_schoolprogram_where) */
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['id'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['table'] = 'field_data_field_schoolprogram_where';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['field'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['value'] = array(
    'Field Trip' => 'Field Trip',
  );

  /* Display: At Your School/ Assemblies */
  $handler = $view->new_display('block', 'At Your School/ Assemblies', 'block_3');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'schoolprogram' => 'schoolprogram',
  );
  /* Filter criterion: Content: Type (field_schoolprogram_type) */
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['id'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['table'] = 'field_data_field_schoolprogram_type';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['field'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['value'] = array(
    'Assemblies' => 'Assemblies',
  );
  /* Filter criterion: Content: Where (field_schoolprogram_where) */
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['id'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['table'] = 'field_data_field_schoolprogram_where';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['field'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['value'] = array(
    'Field Trip' => 'Field Trip',
  );

  /* Display: At Your School/ Residencies */
  $handler = $view->new_display('block', 'At Your School/ Residencies', 'block_4');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'schoolprogram' => 'schoolprogram',
  );
  /* Filter criterion: Content: Type (field_schoolprogram_type) */
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['id'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['table'] = 'field_data_field_schoolprogram_type';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['field'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['value'] = array(
    'Residencies' => 'Residencies',
  );
  /* Filter criterion: Content: Where (field_schoolprogram_where) */
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['id'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['table'] = 'field_data_field_schoolprogram_where';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['field'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['value'] = array(
    'Field Trip' => 'Field Trip',
  );

  /* Display: At Your School/ Workshops */
  $handler = $view->new_display('block', 'At Your School/ Workshops', 'block_5');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'schoolprogram' => 'schoolprogram',
  );
  /* Filter criterion: Content: Type (field_schoolprogram_type) */
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['id'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['table'] = 'field_data_field_schoolprogram_type';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['field'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['value'] = array(
    'Workshops' => 'Workshops',
  );
  /* Filter criterion: Content: Where (field_schoolprogram_where) */
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['id'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['table'] = 'field_data_field_schoolprogram_where';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['field'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['value'] = array(
    'Field Trip' => 'Field Trip',
  );

  /* Display: At Your School/ Field Trip Science Theaters */
  $handler = $view->new_display('block', 'At Your School/ Field Trip Science Theaters', 'block_6');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'schoolprogram' => 'schoolprogram',
  );
  /* Filter criterion: Content: Type (field_schoolprogram_type) */
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['id'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['table'] = 'field_data_field_schoolprogram_type';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['field'] = 'field_schoolprogram_type_value';
  $handler->display->display_options['filters']['field_schoolprogram_type_value']['value'] = array(
    'Field Trip Science Theaters' => 'Field Trip Science Theaters',
  );
  /* Filter criterion: Content: Where (field_schoolprogram_where) */
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['id'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['table'] = 'field_data_field_schoolprogram_where';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['field'] = 'field_schoolprogram_where_value';
  $handler->display->display_options['filters']['field_schoolprogram_where_value']['value'] = array(
    'Field Trip' => 'Field Trip',
  );
  $export['schoolprogram_list'] = $view;

  return $export;
}
