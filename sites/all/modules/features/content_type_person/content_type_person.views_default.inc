<?php
/**
 * @file
 * content_type_person.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_type_person_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'board_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Board Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Board Members';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Job Title (field_person_title) */
  $handler->display->display_options['relationships']['field_person_title_tid']['id'] = 'field_person_title_tid';
  $handler->display->display_options['relationships']['field_person_title_tid']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['relationships']['field_person_title_tid']['field'] = 'field_person_title_tid';
  $handler->display->display_options['relationships']['field_person_title_tid']['label'] = 'Job Title';
  $handler->display->display_options['relationships']['field_person_title_tid']['required'] = 1;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_person_title']['alter']['text'] = ', [field_person_title]';
  $handler->display->display_options['fields']['field_person_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_person_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_person_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_person_title']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_person_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_person_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_person_title']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_person_title']['field_api_classes'] = 0;
  /* Field: Full Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Full Name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title][field_person_title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
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
  /* Sort criterion: Content: Lastname (field_person_lastname) */
  $handler->display->display_options['sorts']['field_person_lastname_value']['id'] = 'field_person_lastname_value';
  $handler->display->display_options['sorts']['field_person_lastname_value']['table'] = 'field_data_field_person_lastname';
  $handler->display->display_options['sorts']['field_person_lastname_value']['field'] = 'field_person_lastname_value';
  /* Sort criterion: Content: Firstname (field_person_firstname) */
  $handler->display->display_options['sorts']['field_person_firstname_value']['id'] = 'field_person_firstname_value';
  $handler->display->display_options['sorts']['field_person_firstname_value']['table'] = 'field_data_field_person_firstname';
  $handler->display->display_options['sorts']['field_person_firstname_value']['field'] = 'field_person_firstname_value';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_person_title_tid';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_person_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_person_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_type_tid']['vocabulary'] = 'person_type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = '[Staff] Officers';
  $export['board_members'] = $view;

  $view = new view;
  $view->name = 'manage_people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage People';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any person content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_person_lastname' => 'field_person_lastname',
    'field_person_firstname' => 'field_person_firstname',
    'field_person_title' => 'field_person_title',
    'field_person_type' => 'field_person_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_person_lastname';
  $handler->display->display_options['style_options']['info'] = array(
    'field_person_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Lastname */
  $handler->display->display_options['fields']['field_person_lastname']['id'] = 'field_person_lastname';
  $handler->display->display_options['fields']['field_person_lastname']['table'] = 'field_data_field_person_lastname';
  $handler->display->display_options['fields']['field_person_lastname']['field'] = 'field_person_lastname';
  $handler->display->display_options['fields']['field_person_lastname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_person_lastname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_person_lastname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_person_lastname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_person_lastname']['field_api_classes'] = 0;
  /* Field: Content: Firstname */
  $handler->display->display_options['fields']['field_person_firstname']['id'] = 'field_person_firstname';
  $handler->display->display_options['fields']['field_person_firstname']['table'] = 'field_data_field_person_firstname';
  $handler->display->display_options['fields']['field_person_firstname']['field'] = 'field_person_firstname';
  $handler->display->display_options['fields']['field_person_firstname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_person_firstname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_person_firstname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_person_firstname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_person_firstname']['field_api_classes'] = 0;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_person_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_person_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_person_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_person_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_person_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_person_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_person_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_person_title']['field_api_classes'] = 0;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['field_person_type']['id'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['fields']['field_person_type']['field'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_person_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_person_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_person_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_person_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_person_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_person_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_person_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_person_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_person_type']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator_id'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['label'] = 'Person Type';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['identifier'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_person_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_person_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_type_tid']['vocabulary'] = 'person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/persons';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Manage People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['manage_people'] = $view;

  $view = new view;
  $view->name = 'researchers';
  $view->description = 'Displays a list of researchers.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Researchers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Researchers';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Sort criterion: Content: Firstname (field_person_firstname) */
  $handler->display->display_options['sorts']['field_person_firstname_value']['id'] = 'field_person_firstname_value';
  $handler->display->display_options['sorts']['field_person_firstname_value']['table'] = 'field_data_field_person_firstname';
  $handler->display->display_options['sorts']['field_person_firstname_value']['field'] = 'field_person_firstname_value';
  /* Sort criterion: Content: Lastname (field_person_lastname) */
  $handler->display->display_options['sorts']['field_person_lastname_value']['id'] = 'field_person_lastname_value';
  $handler->display->display_options['sorts']['field_person_lastname_value']['table'] = 'field_data_field_person_lastname';
  $handler->display->display_options['sorts']['field_person_lastname_value']['field'] = 'field_person_lastname_value';
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
    'person' => 'person',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'List of Researchers';
  $export['researchers'] = $view;

  $view = new view;
  $view->name = 'staff_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Staff Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Officers';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Sort criterion: Content: Lastname (field_person_lastname) */
  $handler->display->display_options['sorts']['field_person_lastname_value']['id'] = 'field_person_lastname_value';
  $handler->display->display_options['sorts']['field_person_lastname_value']['table'] = 'field_data_field_person_lastname';
  $handler->display->display_options['sorts']['field_person_lastname_value']['field'] = 'field_person_lastname_value';
  /* Sort criterion: Content: Firstname (field_person_firstname) */
  $handler->display->display_options['sorts']['field_person_firstname_value']['id'] = 'field_person_firstname_value';
  $handler->display->display_options['sorts']['field_person_firstname_value']['table'] = 'field_data_field_person_firstname';
  $handler->display->display_options['sorts']['field_person_firstname_value']['field'] = 'field_person_firstname_value';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_person_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_person_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_type_tid']['vocabulary'] = 'person_type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = '[Staff] Officers';
  $export['staff_listing'] = $view;

  return $export;
}
