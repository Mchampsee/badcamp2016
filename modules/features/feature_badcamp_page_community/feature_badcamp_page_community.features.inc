<?php
/**
 * @file
 * feature_badcamp_page_community.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_badcamp_page_community_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
