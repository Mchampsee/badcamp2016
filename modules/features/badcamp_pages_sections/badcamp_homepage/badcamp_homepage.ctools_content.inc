<?php
/**
 * @file
 * badcamp_homepage.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function badcamp_homepage_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'badcamp_introduction_callout';
  $content->admin_title = 'BADCamp Introduction';
  $content->admin_description = 'This is the introductory paragraph for BADCamp homepage';
  $content->category = 'BADCamp';
  $content->settings = array(
    'admin_title' => 'BADCamp Introduction',
    'title' => 'ABOUT',
    'body' => '<div class="panel-pane pane-custom pane-3 blue">
<div class="pane-content">
<p>BADCamp is a technology conference for the people, an annual celebration of the web, open-source software, and the creators who make it all possible. Join us this fall for four days of talks, trainings, summits, sprints and socials with some of the brightest minds from all over the world.</p>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['badcamp_introduction_callout'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'badcamp_main_title_callout';
  $content->admin_title = 'BADCamp main title callout';
  $content->admin_description = 'This is the name, date, location title callout for BADCamp';
  $content->category = 'BADCamp';
  $content->settings = array(
    'admin_title' => 'Main Title callout',
    'title' => '',
    'body' => '<h2 class="pane-title">Bay Area<br />
Drupal Camp</h2>

<h2 class="pane-title">2015<br />
October 22 - 25</h2>

<h2 class="pane-title">University of<br />
California,<br />
Berkeley</h2>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['badcamp_main_title_callout'] = $content;

  return $export;
}
