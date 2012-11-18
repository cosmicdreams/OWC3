<?php
/**
 * @file
 * jj_feeds_importer_business.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function jj_feeds_importer_business_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'business_importer';
  $feeds_importer->config = array(
    'name' => 'Business Importer',
    'description' => 'Import Business from a CSV.',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'business',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'field_mighty_site_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'display_name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'contact_name',
            'target' => 'field_business_contact_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'email',
            'target' => 'field_business_email',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'country',
            'target' => 'field_business_address:country',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'address',
            'target' => 'field_business_address:thoroughfare',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'address2',
            'target' => 'field_business_address:premise',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'city',
            'target' => 'field_business_address:locality',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'state',
            'target' => 'field_business_address:administrative_area',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'zip',
            'target' => 'field_business_address:postal_code',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'website_url',
            'target' => 'field_business_weblink:url',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'display_name',
            'target' => 'field_business_weblink:title',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'phone',
            'target' => 'field_business_phone',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'hours',
            'target' => 'field_business_hours',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'non_profit',
            'target' => 'field_business_non_profit',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'nearest_stop',
            'target' => 'field_business_nearest_stop',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'other',
            'target' => 'field_business_other',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'logo_image',
            'target' => 'field_business_logo:fig',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'hidden',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
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
  $export['business_importer'] = $feeds_importer;

  return $export;
}
