<?php

function museum_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['museum_test'] = array(
    '#type' => 'textfield',
    '#title' => t('Test'),
    '#default_value' => theme_get_setting('museum_test'),
  );
}
