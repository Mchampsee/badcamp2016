<?php
/**
 * @file
 * badcamp_user_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function badcamp_user_profile_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_administration_settings|user|user|form';
  $field_group->group_name = 'group_administration_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administration settings',
    'weight' => '14',
    'children' => array(
      0 => 'googleanalytics',
      1 => 'metatags',
      2 => 'rabbit_hole',
      3 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-administration-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_administration_settings|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camper_information|user|user|form';
  $field_group->group_name = 'group_camper_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Camper information',
    'weight' => '11',
    'children' => array(
      0 => 'field_user_featured_attendee',
      1 => 'field_user_title_role',
      2 => 'field_user_bio',
      3 => 'field_user_interests',
      4 => 'field_user_individual_sponsor',
      5 => 'picture',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camper-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_camper_information|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|user|user|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '6',
    'children' => array(
      0 => 'field_user_drupalorg_username',
      1 => 'field_user_twitter_handle',
      2 => 'field_user_facebook_profile',
      3 => 'field_user_flickr_profile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_contact|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participation|user|user|default';
  $field_group->group_name = 'group_participation';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participation',
    'weight' => '9',
    'children' => array(
      0 => 'field_user_featured_attendee',
      1 => 'field_user_interest_volunteering',
      2 => 'field_user_interest_jobs',
      3 => 'field_user_individual_sponsor',
      4 => 'field_user_training_interest',
      5 => 'field_user_hosting',
      6 => 'field_user_services',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-participation field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_participation|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_settings|user|user|form';
  $field_group->group_name = 'group_personal_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal settings',
    'weight' => '13',
    'children' => array(
      0 => 'ckeditor',
      1 => 'timezone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_personal_settings|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|user|user|form';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social media',
    'weight' => '12',
    'children' => array(
      0 => 'field_user_twitter_handle',
      1 => 'field_user_facebook_profile',
      2 => 'field_user_flickr_profile',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_social_media|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_information|user|user|form';
  $field_group->group_name = 'group_user_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User information',
    'weight' => '0',
    'children' => array(
      0 => 'account',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_information|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Administration settings');
  t('Camper information');
  t('Contact');
  t('Participation');
  t('Personal settings');
  t('Social media');
  t('User information');

  return $field_groups;
}
