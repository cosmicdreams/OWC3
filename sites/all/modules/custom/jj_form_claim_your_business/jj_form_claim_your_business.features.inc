<?php
/**
 * @file
 * jj_form_claim_your_business.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function jj_form_claim_your_business_default_entityform_type() {
  $items = array();
  $items['business_claim_form'] = entity_import('entityform_type', '{
    "type" : "business_claim_form",
    "label" : "Business Claim Form",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submission_rules" : { "rules_submission_rule_msg" : "rules_submission_rule_msg" },
      "validation_rules" : { "rules_validation_rule" : "rules_validation_rule" },
      "submit_button_text" : "",
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for submitting your request to\\u0026nbsp;\\u003C\\/p\\u003E",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0, "3" : 0 },
      "resubmit_action" : "old",
      "access_rules" : { "rules_access_rule" : "rules_access_rule" },
      "redirect_path" : "\\/",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EHave a business registered on JJ\\u0026#39;s List. \\u0026nbsp;Claim it by entering your information below.\\u003C\\/p\\u003E",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
