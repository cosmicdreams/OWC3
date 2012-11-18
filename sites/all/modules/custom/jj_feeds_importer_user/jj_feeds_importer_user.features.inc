<?php
/**
 * @file
 * jj_feeds_importer_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jj_feeds_importer_user_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
