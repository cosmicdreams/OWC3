<?php
/**
 * @file
 * jj_global_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jj_global_config_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_list().
 */
function jj_global_config_default_mailchimp_list() {
  $items = array();
  $items['jjs_newsletter'] = entity_import('mailchimp_list', '{
    "name" : "jjs_newsletter",
    "mc_list_id" : "d361a73a6b",
    "label" : "JJ\\u0027s Newsletter",
    "description" : "",
    "list_type" : "freeform",
    "settings" : {
      "roles" : { "1" : "1", "2" : "2" },
      "mergefields" : {
        "EMAIL" : "mail",
        "FNAME" : "field-user-firstname",
        "LNAME" : "field-user-lastname",
        "MMERGE13" : "field-user-business-owner",
        "MMERGE3" : "",
        "MMERGE4" : "",
        "MMERGE5" : "",
        "MMERGE6" : "",
        "MMERGE7" : "",
        "MMERGE8" : "",
        "MMERGE9" : "",
        "MMERGE10" : "",
        "MMERGE12" : "",
        "MMERGE11" : "field-user-zip-code"
      },
      "doublein" : 0,
      "show_register_form" : 0,
      "show_account_form" : 0,
      "include_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0
    },
    "created" : "1353224718",
    "updated" : "1353224718",
    "rdf_mapping" : []
  }');
  return $items;
}
