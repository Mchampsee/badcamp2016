<?php
/**
 * @file
 * badcamp_registration_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_registration_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'badcamp_registration';
  $page->task = 'page';
  $page->admin_title = 'Registration';
  $page->admin_description = 'Register for camp!';
  $page->path = 'registration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Register',
    'name' => 'main-menu',
    'weight' => '100',
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
  $handler->name = 'page_badcamp_registration__panel_context_20a7095a-37f4-44bc-b03b-588504eb45bd';
  $handler->task = 'page';
  $handler->subtask = 'badcamp_registration';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'registration',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Register to Attend | [site:name]',
        ),
        'description' => array(
          'value' => 'Register to attend BADCamp (it\'s free!) and sign up for trainings, summits, and more!',
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
  $display->title = 'Registration';
  $display->uuid = '262cbe19-f5b7-4352-9b1c-a8b8391e55b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
    $pane->panel = 'middle';
    $pane->type = 'user_register_form';
    $pane->subtype = 'user_register_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-jumAEj8vmAU2VEcx2UoFg2aMGhpt-bFrL7ga1arsHWw',
      'form_token' => 'kt_Ktlfua7SOuZbQIOGCaaPugOs6qvdB7GGG3yaRHmc',
      'form_id' => 'ctools_user_register_form_content_type_edit_form',
      'override_title' => 1,
      'override_title_text' => 'Registration',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
    $display->content['new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f'] = $pane;
    $display->panels['middle'][0] = 'new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['badcamp_registration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'registration_step_2';
  $page->task = 'page';
  $page->admin_title = 'Registration Step 2';
  $page->admin_description = 'The second step of registration, individual sponsorship.';
  $page->path = 'registration/sponsorship';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'make a stripe donation',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_registration_step_2__panel_context_5196f101-92d8-428a-bfca-28fbfc9676f2';
  $handler->task = 'page';
  $handler->subtask = 'registration_step_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Registration Sponsorship Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Registration - Step 2';
  $display->uuid = '3857cf82-8323-4c0c-984e-253843673a61';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a8e5ebd-62c8-4aab-8375-8362b1e025d0';
    $pane->panel = 'middle';
    $pane->type = 'donation_options';
    $pane->subtype = 'donation_options';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
      'stripe_donation_payment_page_title' => NULL,
      'stripe_donation_zero_amt_donation_redirect_path' => '/user',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a8e5ebd-62c8-4aab-8375-8362b1e025d0';
    $display->content['new-0a8e5ebd-62c8-4aab-8375-8362b1e025d0'] = $pane;
    $display->panels['middle'][0] = 'new-0a8e5ebd-62c8-4aab-8375-8362b1e025d0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0a8e5ebd-62c8-4aab-8375-8362b1e025d0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['registration_step_2'] = $page;

  return $pages;

}
