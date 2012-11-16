<?php
/**
 * @file
 * content_type_room.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function content_type_room_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'room_detail';
  $context->description = '';
  $context->tag = 'room';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'room' => 'room',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'plan-event/rooms',
    'menu' => 'plan-event/rooms',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('room');
  $export['room_detail'] = $context;

  return $export;
}
