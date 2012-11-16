<?php
/**
 * @file
 * content_type_partner.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_partner_taxonomy_default_vocabularies() {
  return array(
    'partner_level' => array(
      'name' => 'Partner Level',
      'machine_name' => 'partner_level',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
