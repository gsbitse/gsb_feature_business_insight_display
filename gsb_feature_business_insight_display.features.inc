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
