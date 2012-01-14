<?php
/**
 * @file
 * campuscms_feature_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campuscms_feature_events_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_path';
  $strongarm->value = 'profiles/campuscms_profile/libraries/colorbox';
  $export['colorbox_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fullcalendar_path';
  $strongarm->value = 'profiles/campuscms_profile/libraries/fullcalendar/fullcalendar';
  $export['fullcalendar_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event';
  $strongarm->value = array();
  $export['menu_options_event'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_event_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'main',
      'weight' => '14',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'body' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Body',
      'hidden' => 0,
    ),
    'field_event_contact_address' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Address',
      'hidden' => 0,
    ),
    'field_event_contact_department' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Department',
      'hidden' => 0,
    ),
    'field_event_contact_email' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Email',
      'hidden' => 0,
    ),
    'field_event_contact_fax' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Fax',
      'hidden' => 0,
    ),
    'field_event_contact_name' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Name',
      'hidden' => 0,
    ),
    'field_event_contact_phone' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Phone',
      'hidden' => 0,
    ),
    'field_event_contact_title' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Title',
      'hidden' => 0,
    ),
    'field_event_date' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Date',
      'hidden' => 0,
    ),
    'field_event_documents' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Documents',
      'hidden' => 0,
    ),
    'field_event_image' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Image',
      'hidden' => 0,
    ),
    'field_event_location' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Location',
      'hidden' => 0,
    ),
    'field_event_submit_buttons' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Submit Buttons',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_event_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_event'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event';
  $strongarm->value = '1';
  $export['node_preview_event'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event';
  $strongarm->value = 0;
  $export['node_submitted_event'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_pattern';
  $strongarm->value = 'events/[node:title]';
  $export['pathauto_node_event_pattern'] = $strongarm;

  return $export;
}
