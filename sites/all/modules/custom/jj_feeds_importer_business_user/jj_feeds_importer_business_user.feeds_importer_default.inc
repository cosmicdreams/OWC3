<?php
/**
 * @file
 * jj_feeds_importer_business_user.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function jj_feeds_importer_business_user_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'business_user_importer';
  $feeds_importer->config = array(
    'name' => 'Business User Importer',
    'description' => 'Import Business Users',
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
        'roles' => array(
          4 => '4',
          3 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'email',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'email',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'password',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'firstname',
            'target' => 'field_user_firstname',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'lastname',
            'target' => 'field_user_lastname',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'zip',
            'target' => 'field_user_zip_code',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'id',
            'target' => 'field_mighty_site_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['business_user_importer'] = $feeds_importer;

  return $export;
}
