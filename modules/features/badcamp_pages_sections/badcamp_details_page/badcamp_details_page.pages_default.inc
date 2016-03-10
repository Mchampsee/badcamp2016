<?php
/**
 * @file
 * badcamp_details_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_details_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'details';
  $page->task = 'page';
  $page->admin_title = 'Details';
  $page->admin_description = '';
  $page->path = 'details';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Details',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_details__panel_context_8a2e88fd-8325-4acf-99e5-fe69683d4b0e';
  $handler->task = 'page';
  $handler->subtask = 'details';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'details',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'BADCamp Details | [site:name]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'BADCamp Details';
  $display->uuid = 'e62a7e1e-f2cb-4f2d-84f6-0a37edafc10c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2245110d-ec40-44fe-b74f-c7152d1eef44';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '45',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2245110d-ec40-44fe-b74f-c7152d1eef44';
    $display->content['new-2245110d-ec40-44fe-b74f-c7152d1eef44'] = $pane;
    $display->panels['middle'][0] = 'new-2245110d-ec40-44fe-b74f-c7152d1eef44';
    $pane = new stdClass();
    $pane->pid = 'new-80312a9b-c91b-4041-b94e-8a84f3c4df41';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Scholarships',
      'body' => '<p>We realize that there may be valuable members of our community who do not have the resources to attend BADCamp this year. We will be offering scholarships to reward those who contribute to the Drupal project.</p>

<p><a class="button" href="/scholarship-application">Apply for scholarship</a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'scholarships',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '80312a9b-c91b-4041-b94e-8a84f3c4df41';
    $display->content['new-80312a9b-c91b-4041-b94e-8a84f3c4df41'] = $pane;
    $display->panels['middle'][1] = 'new-80312a9b-c91b-4041-b94e-8a84f3c4df41';
    $pane = new stdClass();
    $pane->pid = 'new-34442084-f3dc-4f77-a853-9e692b09b5ac';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'attendees-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'featured-attendees',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '34442084-f3dc-4f77-a853-9e692b09b5ac';
    $display->content['new-34442084-f3dc-4f77-a853-9e692b09b5ac'] = $pane;
    $display->panels['middle'][2] = 'new-34442084-f3dc-4f77-a853-9e692b09b5ac';
    $pane = new stdClass();
    $pane->pid = 'new-99c16317-972d-4e3b-a4de-145a9c4d4728';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '0',
      'offset' => '0',
      'exposed' => array(
        'field_event_type_tid' => array(
          12 => '12',
        ),
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'summits',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '99c16317-972d-4e3b-a4de-145a9c4d4728';
    $display->content['new-99c16317-972d-4e3b-a4de-145a9c4d4728'] = $pane;
    $display->panels['middle'][3] = 'new-99c16317-972d-4e3b-a4de-145a9c4d4728';
    $pane = new stdClass();
    $pane->pid = 'new-591bfd22-9c78-4db6-b2c8-8e7e68c5d2ba';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'badcamp_sponsors_thank_you';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sponsors',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '591bfd22-9c78-4db6-b2c8-8e7e68c5d2ba';
    $display->content['new-591bfd22-9c78-4db6-b2c8-8e7e68c5d2ba'] = $pane;
    $display->panels['middle'][4] = 'new-591bfd22-9c78-4db6-b2c8-8e7e68c5d2ba';
    $pane = new stdClass();
    $pane->pid = 'new-bc8ac7be-0cc2-4ba3-ba99-0e238b9b6315';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'exposed' => array(
        'field_sponsor_level_tid' => array(
          1 => '1',
        ),
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sponsors-content',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'bc8ac7be-0cc2-4ba3-ba99-0e238b9b6315';
    $display->content['new-bc8ac7be-0cc2-4ba3-ba99-0e238b9b6315'] = $pane;
    $display->panels['middle'][5] = 'new-bc8ac7be-0cc2-4ba3-ba99-0e238b9b6315';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['details'] = $page;

  return $pages;

}
