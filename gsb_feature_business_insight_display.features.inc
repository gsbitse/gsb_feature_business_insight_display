<?php
/**
 * @file
 * gsb_feature_business_insight_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_business_insight_display_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gsb_feature_business_insight_display_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function gsb_feature_business_insight_display_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panelizer'])) {
    $data['node_view_panelizer']->conf['access']['logic'] = 'and'; /* WAS: '' */
    $data['node_view_panelizer']->conf['access']['plugins'] = array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'business_insight' => 'business_insight',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function gsb_feature_business_insight_display_flag_default_flags() {
  $flags = array();
  // Exported flag: "Business Insight Flag".
  $flags['business_insight_flag'] = array(
    'content_type' => 'node',
    'title' => 'Business Insight Flag',
    'global' => '0',
    'types' => array(
      0 => 'gsb_event',
      1 => 'gsb_school_story',
      2 => 'gsb_video',
    ),
    'flag_short' => 'Flag Business Insight',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag Business Insight',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'gsb_feature_business_insight_display',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
