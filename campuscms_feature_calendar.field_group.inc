<?php
/**
 * @file
 * campuscms_feature_calendar.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campuscms_feature_calendar_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_contact|node|event|form';
  $field_group->group_name = 'group_event_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '6',
    'children' => array(
      0 => 'field_event_contact_name',
      1 => 'field_event_contact_title',
      2 => 'field_event_contact_department',
      3 => 'field_event_contact_phone',
      4 => 'field_event_contact_email',
      5 => 'field_event_contact_fax',
      6 => 'field_event_contact_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_contact|node|event|form'] = $field_group;

  return $export;
}
