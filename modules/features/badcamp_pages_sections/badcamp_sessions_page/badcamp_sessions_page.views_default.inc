<?php
/**
 * @file
 * badcamp_sessions_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function badcamp_sessions_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'badcamp_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_session_date_and_time' => 'field_session_date_and_time',
    'field_session_time_slot' => 'field_session_time_slot',
    'field_session_room' => 'field_session_room',
    'field_session_speaker' => 'field_session_speaker',
    'field_session_skill_level' => 'field_session_skill_level',
    'field_session_track' => 'field_session_track',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Please propose a session';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no proposed sessions.
<a href="node/add/session" class="button">Submit your session proposal</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Session skill level */
  $handler->display->display_options['fields']['field_session_skill_level']['id'] = 'field_session_skill_level';
  $handler->display->display_options['fields']['field_session_skill_level']['table'] = 'field_data_field_session_skill_level';
  $handler->display->display_options['fields']['field_session_skill_level']['field'] = 'field_session_skill_level';
  $handler->display->display_options['fields']['field_session_skill_level']['label'] = 'Level';
  /* Field: Content: Session speaker(s) */
  $handler->display->display_options['fields']['field_session_speaker']['id'] = 'field_session_speaker';
  $handler->display->display_options['fields']['field_session_speaker']['table'] = 'field_data_field_session_speaker';
  $handler->display->display_options['fields']['field_session_speaker']['field'] = 'field_session_speaker';
  $handler->display->display_options['fields']['field_session_speaker']['label'] = 'Speaker(s)';
  $handler->display->display_options['fields']['field_session_speaker']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_speaker']['delta_offset'] = '0';
  /* Field: Content: Session track */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['label'] = 'Track';
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Session status (field_session_status) */
  $handler->display->display_options['filters']['field_session_status_value']['id'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['filters']['field_session_status_value']['field'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_session_status_value']['reduce_duplicates'] = TRUE;

  /* Display: Simple Session List */
  $handler = $view->new_display('panel_pane', 'Simple Session List', 'panel_pane_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'BADCamp';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Proposed Session List */
  $handler = $view->new_display('panel_pane', 'Proposed Session List', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proposed Sessions';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Want to propose?';
  $handler->display->display_options['header']['area']['content'] = '<!-- a href="node/add/session" class="button">Submit your session proposal</a> -->';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Please propose a session';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no proposed sessions.
<a href="node/add/session" class="button">Submit your session proposal</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Session time slot */
  $handler->display->display_options['fields']['field_session_time_slot']['id'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['table'] = 'field_data_field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['field'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['label'] = 'Time';
  $handler->display->display_options['fields']['field_session_time_slot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_time_slot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time_slot']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Session room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['label'] = 'Room';
  $handler->display->display_options['fields']['field_session_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_room']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Session speaker(s) */
  $handler->display->display_options['fields']['field_session_speaker']['id'] = 'field_session_speaker';
  $handler->display->display_options['fields']['field_session_speaker']['table'] = 'field_data_field_session_speaker';
  $handler->display->display_options['fields']['field_session_speaker']['field'] = 'field_session_speaker';
  $handler->display->display_options['fields']['field_session_speaker']['label'] = 'Speaker(s)';
  $handler->display->display_options['fields']['field_session_speaker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speaker']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_session_speaker']['delta_offset'] = '0';
  /* Field: Content: Session skill level */
  $handler->display->display_options['fields']['field_session_skill_level']['id'] = 'field_session_skill_level';
  $handler->display->display_options['fields']['field_session_skill_level']['table'] = 'field_data_field_session_skill_level';
  $handler->display->display_options['fields']['field_session_skill_level']['field'] = 'field_session_skill_level';
  $handler->display->display_options['fields']['field_session_skill_level']['label'] = 'Difficulty';
  $handler->display->display_options['fields']['field_session_skill_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_skill_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Session track */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['label'] = 'Track';
  $handler->display->display_options['fields']['field_session_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_track']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this session';
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Session status (field_session_status) */
  $handler->display->display_options['filters']['field_session_status_value']['id'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['filters']['field_session_status_value']['field'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_session_status_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Session skill level (field_session_skill_level) */
  $handler->display->display_options['filters']['field_session_skill_level_tid']['id'] = 'field_session_skill_level_tid';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['table'] = 'field_data_field_session_skill_level';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['field'] = 'field_session_skill_level_tid';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['operator_id'] = 'field_session_skill_level_tid_op';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['label'] = 'Difficulty';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['operator'] = 'field_session_skill_level_tid_op';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['identifier'] = 'field_session_skill_level_tid';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_session_skill_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['vocabulary'] = 'skill_level';
  /* Filter criterion: Content: Session track (field_session_track) */
  $handler->display->display_options['filters']['field_session_track_tid']['id'] = 'field_session_track_tid';
  $handler->display->display_options['filters']['field_session_track_tid']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['filters']['field_session_track_tid']['field'] = 'field_session_track_tid';
  $handler->display->display_options['filters']['field_session_track_tid']['value'] = '';
  $handler->display->display_options['filters']['field_session_track_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['operator_id'] = 'field_session_track_tid_op';
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['label'] = 'Track';
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['operator'] = 'field_session_track_tid_op';
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['identifier'] = 'field_session_track_tid';
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_session_track_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_session_track_tid']['vocabulary'] = 'tracks';
  $handler->display->display_options['pane_category']['name'] = 'BADCamp';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Accepted Session List */
  $handler = $view->new_display('panel_pane', 'Accepted Session List', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Accepted Sessions';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_session_date_and_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Please propose a session';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no accepted sessions.
<a href="node/add/session" class="button">Submit your session proposal</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: my_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'my_schedule';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_session_skill_level] - [field_session_track])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Session track */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['label'] = '';
  $handler->display->display_options['fields']['field_session_track']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_track']['alter']['text'] = '[field_session_track] - [field_session_skill_level]';
  $handler->display->display_options['fields']['field_session_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_track']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Session skill level */
  $handler->display->display_options['fields']['field_session_skill_level']['id'] = 'field_session_skill_level';
  $handler->display->display_options['fields']['field_session_skill_level']['table'] = 'field_data_field_session_skill_level';
  $handler->display->display_options['fields']['field_session_skill_level']['field'] = 'field_session_skill_level';
  $handler->display->display_options['fields']['field_session_skill_level']['label'] = '';
  $handler->display->display_options['fields']['field_session_skill_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_skill_level']['alter']['text'] = '[field_session_track] ([field_session_skill_level])';
  $handler->display->display_options['fields']['field_session_skill_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_skill_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Session room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['label'] = '';
  $handler->display->display_options['fields']['field_session_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_room']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Session time slot */
  $handler->display->display_options['fields']['field_session_time_slot']['id'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['table'] = 'field_data_field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['field'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['label'] = '';
  $handler->display->display_options['fields']['field_session_time_slot']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_time_slot']['alter']['text'] = '[field_session_room] - [field_session_time_slot]';
  $handler->display->display_options['fields']['field_session_time_slot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time_slot']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Session speaker(s) */
  $handler->display->display_options['fields']['field_session_speaker']['id'] = 'field_session_speaker';
  $handler->display->display_options['fields']['field_session_speaker']['table'] = 'field_data_field_session_speaker';
  $handler->display->display_options['fields']['field_session_speaker']['field'] = 'field_session_speaker';
  $handler->display->display_options['fields']['field_session_speaker']['label'] = '';
  $handler->display->display_options['fields']['field_session_speaker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speaker']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_session_speaker']['delta_offset'] = '0';
  /* Field: Content: Session date and time */
  $handler->display->display_options['fields']['field_session_date_and_time']['id'] = 'field_session_date_and_time';
  $handler->display->display_options['fields']['field_session_date_and_time']['table'] = 'field_data_field_session_date_and_time';
  $handler->display->display_options['fields']['field_session_date_and_time']['field'] = 'field_session_date_and_time';
  $handler->display->display_options['fields']['field_session_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_session_date_and_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Session date and time (field_session_date_and_time) */
  $handler->display->display_options['sorts']['field_session_date_and_time_value']['id'] = 'field_session_date_and_time_value';
  $handler->display->display_options['sorts']['field_session_date_and_time_value']['table'] = 'field_data_field_session_date_and_time';
  $handler->display->display_options['sorts']['field_session_date_and_time_value']['field'] = 'field_session_date_and_time_value';
  /* Sort criterion: Content: Session skill level (field_session_skill_level) */
  $handler->display->display_options['sorts']['field_session_skill_level_tid']['id'] = 'field_session_skill_level_tid';
  $handler->display->display_options['sorts']['field_session_skill_level_tid']['table'] = 'field_data_field_session_skill_level';
  $handler->display->display_options['sorts']['field_session_skill_level_tid']['field'] = 'field_session_skill_level_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Session status (field_session_status) */
  $handler->display->display_options['filters']['field_session_status_value']['id'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['filters']['field_session_status_value']['field'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_session_status_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Session skill level (field_session_skill_level) */
  $handler->display->display_options['filters']['field_session_skill_level_tid']['id'] = 'field_session_skill_level_tid';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['table'] = 'field_data_field_session_skill_level';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['field'] = 'field_session_skill_level_tid';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['operator_id'] = 'field_session_skill_level_tid_op';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['label'] = 'Difficulty';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['operator'] = 'field_session_skill_level_tid_op';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['identifier'] = 'field_session_skill_level_tid';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_session_skill_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_session_skill_level_tid']['vocabulary'] = 'skill_level';
  /* Filter criterion: Content: Session track (field_session_track) */
  $handler->display->display_options['filters']['field_session_track_tid']['id'] = 'field_session_track_tid';
  $handler->display->display_options['filters']['field_session_track_tid']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['filters']['field_session_track_tid']['field'] = 'field_session_track_tid';
  $handler->display->display_options['filters']['field_session_track_tid']['value'] = '';
  $handler->display->display_options['filters']['field_session_track_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['operator_id'] = 'field_session_track_tid_op';
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['label'] = 'Track';
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['operator'] = 'field_session_track_tid_op';
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['identifier'] = 'field_session_track_tid';
  $handler->display->display_options['filters']['field_session_track_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_session_track_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_session_track_tid']['vocabulary'] = 'tracks';
  /* Filter criterion: Content: Session date and time (field_session_date_and_time) */
  $handler->display->display_options['filters']['field_session_date_and_time_value']['id'] = 'field_session_date_and_time_value';
  $handler->display->display_options['filters']['field_session_date_and_time_value']['table'] = 'field_data_field_session_date_and_time';
  $handler->display->display_options['filters']['field_session_date_and_time_value']['field'] = 'field_session_date_and_time_value';
  $handler->display->display_options['filters']['field_session_date_and_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_date_and_time_value']['expose']['operator_id'] = 'field_session_date_and_time_value_op';
  $handler->display->display_options['filters']['field_session_date_and_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_session_date_and_time_value']['expose']['operator'] = 'field_session_date_and_time_value_op';
  $handler->display->display_options['filters']['field_session_date_and_time_value']['expose']['identifier'] = 'field_session_date_and_time_value';
  $handler->display->display_options['filters']['field_session_date_and_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Session time slot (field_session_time_slot) */
  $handler->display->display_options['filters']['field_session_time_slot_tid']['id'] = 'field_session_time_slot_tid';
  $handler->display->display_options['filters']['field_session_time_slot_tid']['table'] = 'field_data_field_session_time_slot';
  $handler->display->display_options['filters']['field_session_time_slot_tid']['field'] = 'field_session_time_slot_tid';
  $handler->display->display_options['filters']['field_session_time_slot_tid']['value'] = '';
  $handler->display->display_options['filters']['field_session_time_slot_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_time_slot_tid']['expose']['operator_id'] = 'field_session_time_slot_tid_op';
  $handler->display->display_options['filters']['field_session_time_slot_tid']['expose']['label'] = 'Time';
  $handler->display->display_options['filters']['field_session_time_slot_tid']['expose']['operator'] = 'field_session_time_slot_tid_op';
  $handler->display->display_options['filters']['field_session_time_slot_tid']['expose']['identifier'] = 'field_session_time_slot_tid';
  $handler->display->display_options['filters']['field_session_time_slot_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_session_time_slot_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_session_time_slot_tid']['vocabulary'] = 'time_slot';
  $handler->display->display_options['pane_category']['name'] = 'BADCamp';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['badcamp_sessions'] = $view;

  return $export;
}
