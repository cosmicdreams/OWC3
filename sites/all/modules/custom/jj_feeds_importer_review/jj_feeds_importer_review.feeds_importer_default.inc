<?php
/**
 * @file
 * jj_feeds_importer_review.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function jj_feeds_importer_review_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'review_importer';
  $feeds_importer->config = array(
    'name' => 'Review Importer',
    'description' => 'Imports Reviews',
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
        'content_type' => 'review',
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'details',
            'target' => 'field_review_businessdetails',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'review_text',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'home_text',
            'target' => 'comment',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'added_date',
            'target' => 'created',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'hidden',
            'target' => 'status',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'id',
            'target' => 'field_mighty_site_id',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'recommend',
            'target' => 'field_mighty_site_recommended',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'recommend_reason_ids',
            'target' => 'field_mighty_site_reason_ids',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'other',
            'target' => 'field_mighty_site_other',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'profile_id',
            'target' => 'field_mighty_site_profile_id',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'bridge_builder_id',
            'target' => 'field_mighty_site_business_id',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'reply_text',
            'target' => 'field_mighty_site_reply_text',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'rating',
            'target' => 'field_mighty_site_rating',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'user_access_id',
            'target' => 'field_mighty_site_user_access_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'filtered_html',
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
  $export['review_importer'] = $feeds_importer;

  return $export;
}
