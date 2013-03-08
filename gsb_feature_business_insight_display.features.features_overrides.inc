<?php
/**
 * @file
 * gsb_feature_business_insight_display.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function gsb_feature_business_insight_display_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panelizer.conf|access|logic"] = 'and';
  $overrides["page_manager_handlers.node_view_panelizer.conf|access|plugins"] = array(
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
  );

 return $overrides;
}
