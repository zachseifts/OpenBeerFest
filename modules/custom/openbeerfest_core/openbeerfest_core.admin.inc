<?php
/**
 * @file
 * The admin pages and forms for the OpenBeerFest Core module.
 */

function openbeerfest_core_admin() {
  $form = array();

  $form['openbeerfest_core_on_sale'] = array(
    '#type' => 'select',
    '#title' => t('Are tickets on sale?'),
    '#default_value' => variable_get('openbeerfest_core_on_sale', 0),
    '#options' => array(
      0 => 'No',
      1 => 'Yes',
    ),
    '#description' => t('Are ticketes on sale?'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
