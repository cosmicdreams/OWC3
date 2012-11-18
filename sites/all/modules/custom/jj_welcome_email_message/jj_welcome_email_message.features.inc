<?php
/**
 * @file
 * jj_welcome_email_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jj_welcome_email_message_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
