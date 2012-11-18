<?php
/**
 * @file
 * jj_feeds_importer_user.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function jj_feeds_importer_user_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user_importer';
  $feeds_importer->config = array(
    'name' => 'User Importer',
    'description' => 'Import Users',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(),
        'status' => 1,
        'defuse_mail' => FALSE,
        'mappings' => array(
          0 => array(
            'source' => 'display_name',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'email',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'first_name',
            'target' => 'field_user_firstname',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'last_name',
            'target' => 'field_user_lastname',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'password',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'profile_image',
            'target' => 'field_user_photo:fig',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'country',
            'target' => 'field_user_address:country',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'city',
            'target' => 'field_user_address:locality',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'state',
            'target' => 'field_user_address:administrative_area',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'zip',
            'target' => 'field_user_address:postal_code',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'hidden',
            'target' => 'status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'id',
            'target' => 'field_mighty_site_id',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'profile_type_id',
            'target' => 'field_mighty_site_profiletype_id',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'disability_ids',
            'target' => 'field_mighty_site_disability_ids',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'assistance_ids',
            'target' => 'field_mighty_site_assistance_ids',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'user_access_id',
            'target' => 'field_mighty_site_user_access_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => 0,
        'input_format' => NULL,
        'skip_hash_check' => FALSE,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['user_importer'] = $feeds_importer;

  return $export;
}
