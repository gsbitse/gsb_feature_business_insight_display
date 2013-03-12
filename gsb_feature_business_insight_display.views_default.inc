<?php
/**
 * @file
 * gsb_feature_business_insight_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_business_insight_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_insides_by_tag';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Business Insides by tag';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_insight' => 'business_insight',
    'gsb_event' => 'gsb_event',
    'gsb_media_mention' => 'gsb_media_mention',
    'gsb_school_story' => 'gsb_school_story',
    'gsb_video' => 'gsb_video',
  );
  $export['business_insides_by_tag'] = $view;

  $view = new view();
  $view->name = 'business_insides_sidebar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Business Insides sidebar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'business-insides/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['sorts']['vid']['id'] = 'vid';
  $handler->display->display_options['sorts']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['vid']['field'] = 'vid';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'business_insight_topic' => 'business_insight_topic',
    'region' => 'region',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['business_insides_sidebar'] = $view;

  $view = new view();
  $view->name = 'gsb_business_insight';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GSB Business Insight';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Business Insights';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View more like this';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'nid' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_business_insight_topic_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_target_audience_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_discipline_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_industry_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_region_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_company_organization_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_tag_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Editorial Summary */
  $handler->display->display_options['fields']['field_editorial_summary']['id'] = 'field_editorial_summary';
  $handler->display->display_options['fields']['field_editorial_summary']['table'] = 'field_data_field_editorial_summary';
  $handler->display->display_options['fields']['field_editorial_summary']['field'] = 'field_editorial_summary';
  $handler->display->display_options['fields']['field_editorial_summary']['label'] = '';
  $handler->display->display_options['fields']['field_editorial_summary']['element_label_colon'] = FALSE;
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Content Image */
  $handler->display->display_options['fields']['field_content_image']['id'] = 'field_content_image';
  $handler->display->display_options['fields']['field_content_image']['table'] = 'field_data_field_content_image';
  $handler->display->display_options['fields']['field_content_image']['field'] = 'field_content_image';
  $handler->display->display_options['fields']['field_content_image']['label'] = '';
  $handler->display->display_options['fields']['field_content_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Content Image Caption */
  $handler->display->display_options['fields']['field_content_image_caption']['id'] = 'field_content_image_caption';
  $handler->display->display_options['fields']['field_content_image_caption']['table'] = 'field_data_field_content_image_caption';
  $handler->display->display_options['fields']['field_content_image_caption']['field'] = 'field_content_image_caption';
  $handler->display->display_options['fields']['field_content_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Date Published */
  $handler->display->display_options['fields']['field_date_published']['id'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['fields']['field_date_published']['field'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['label'] = '';
  $handler->display->display_options['fields']['field_date_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_published']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Date Published (field_date_published) */
  $handler->display->display_options['sorts']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['sorts']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['sorts']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['sorts']['field_date_published_value']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_insight' => 'business_insight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group'] = 2;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Node Id';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Date Published (field_date_published) */
  $handler->display->display_options['filters']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['filters']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_published_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_published_value']['default_date'] = 'now';
  /* Filter criterion: Content: Business Insight Topic (field_business_insight_topic) */
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['id'] = 'field_business_insight_topic_tid';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['table'] = 'field_data_field_business_insight_topic';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['field'] = 'field_business_insight_topic_tid';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['operator_id'] = 'field_business_insight_topic_tid_op';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['label'] = 'Business Insight Topic (field_business_insight_topic)';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['operator'] = 'field_business_insight_topic_tid_op';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['identifier'] = 'field_business_insight_topic_tid';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['vocabulary'] = 'business_insight_topic';
  /* Filter criterion: Content: Target Audience (field_target_audience) */
  $handler->display->display_options['filters']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator_id'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['label'] = 'Target Audience (field_target_audience)';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['identifier'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_target_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_target_audience_tid']['vocabulary'] = 'target_audience';
  /* Filter criterion: Content: Discipline (field_discipline) */
  $handler->display->display_options['filters']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['filters']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_discipline_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['operator_id'] = 'field_discipline_tid_op';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['label'] = 'Discipline (field_discipline)';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['operator'] = 'field_discipline_tid_op';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['identifier'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_discipline_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_discipline_tid']['vocabulary'] = 'discipline';
  /* Filter criterion: Content: Industry (field_industry) */
  $handler->display->display_options['filters']['field_industry_tid']['id'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['table'] = 'field_data_field_industry';
  $handler->display->display_options['filters']['field_industry_tid']['field'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_industry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator_id'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['label'] = 'Industry (field_industry)';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['identifier'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_industry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_industry_tid']['vocabulary'] = 'industry';
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Region (field_region)';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'region';
  /* Filter criterion: Content: Company Organization (field_company_organization) */
  $handler->display->display_options['filters']['field_company_organization_tid']['id'] = 'field_company_organization_tid';
  $handler->display->display_options['filters']['field_company_organization_tid']['table'] = 'field_data_field_company_organization';
  $handler->display->display_options['filters']['field_company_organization_tid']['field'] = 'field_company_organization_tid';
  $handler->display->display_options['filters']['field_company_organization_tid']['value'] = '';
  $handler->display->display_options['filters']['field_company_organization_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_company_organization_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['operator_id'] = 'field_company_organization_tid_op';
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['label'] = 'Company Organization (field_company_organization)';
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['operator'] = 'field_company_organization_tid_op';
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['identifier'] = 'field_company_organization_tid';
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_company_organization_tid']['vocabulary'] = 'company_organization';
  /* Filter criterion: Content: Tag (field_tag) */
  $handler->display->display_options['filters']['field_tag_tid']['id'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['table'] = 'field_data_field_tag';
  $handler->display->display_options['filters']['field_tag_tid']['field'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tag_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_tag_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator_id'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['label'] = 'Tag (field_tag)';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['identifier'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tag_tid']['vocabulary'] = 'tag';

  /* Display: Business Insights */
  $handler = $view->new_display('panel_pane', 'Business Insights', 'business_insights');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'designed-box media-bi';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more like this';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="blue-small-border"></span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Content Image */
  $handler->display->display_options['fields']['field_content_image']['id'] = 'field_content_image';
  $handler->display->display_options['fields']['field_content_image']['table'] = 'field_data_field_content_image';
  $handler->display->display_options['fields']['field_content_image']['field'] = 'field_content_image';
  $handler->display->display_options['fields']['field_content_image']['label'] = '';
  $handler->display->display_options['fields']['field_content_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image']['settings'] = array(
    'image_style' => 'business_insights_220x125',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Editorial Summary */
  $handler->display->display_options['fields']['field_editorial_blurb']['id'] = 'field_editorial_blurb';
  $handler->display->display_options['fields']['field_editorial_blurb']['table'] = 'field_data_field_editorial_blurb';
  $handler->display->display_options['fields']['field_editorial_blurb']['field'] = 'field_editorial_blurb';
  $handler->display->display_options['fields']['field_editorial_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_editorial_blurb']['element_label_colon'] = FALSE;
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['label'] = '';
  $handler->display->display_options['fields']['field_authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['alter']['text'] = '<span class="author-by-title">by </span>[field_authors]';
  $handler->display->display_options['fields']['field_authors']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_authors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authors']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_authors']['settings'] = array(
    'view_mode' => 'tiny',
  );
  $handler->display->display_options['fields']['field_authors']['delta_offset'] = '0';
  /* Field: Content: Date Published */
  $handler->display->display_options['fields']['field_date_published']['id'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['fields']['field_date_published']['field'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['label'] = '';
  $handler->display->display_options['fields']['field_date_published']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_published']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'business_insight_topic' => 'business_insight_topic',
    'discipline' => 'discipline',
    'industry' => 'industry',
    'region' => 'region',
    'tag' => 'tag',
    'target_audience' => 'target_audience',
    'academic_area' => 0,
    'panopoly_categories' => 0,
    'club_category' => 0,
    'company_organization' => 0,
    'event_category' => 0,
    'event_series' => 0,
    'program' => 0,
    'workbench_sections' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="business-insights-content"><h4>[title]</h4><span class="bi-author">[field_authors]</span><div class="bi-body">[body]</div><span class="bi-terms">[term_node_tid]</span></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date Published (field_date_published) */
  $handler->display->display_options['sorts']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['sorts']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['sorts']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['sorts']['field_date_published_value']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'GSB Content Panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Related Business Insights */
  $handler = $view->new_display('block', 'Related Business Insights', 'related_business_insights');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'related-business-insights';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more like this';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_insight' => 'business_insight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Published (field_date_published) */
  $handler->display->display_options['filters']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['filters']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_published_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_published_value']['default_date'] = 'now';
  /* Filter criterion: Content: Content Image (field_content_image:fid) */
  $handler->display->display_options['filters']['field_content_image_fid']['id'] = 'field_content_image_fid';
  $handler->display->display_options['filters']['field_content_image_fid']['table'] = 'field_data_field_content_image';
  $handler->display->display_options['filters']['field_content_image_fid']['field'] = 'field_content_image_fid';
  $handler->display->display_options['filters']['field_content_image_fid']['operator'] = 'not empty';
  $export['gsb_business_insight'] = $view;

  return $export;
}
