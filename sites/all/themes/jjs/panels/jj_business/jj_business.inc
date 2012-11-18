<?php
// Plugin definition
$plugin = array(
  'title'       => t('Business'),
  'icon'        => '',
  'category'    => t('JJ'),
  'theme'       => 'jj_business',
  'css'         => 'jj_business.css',
  'admin theme' => 'jj_business',
  'admin css'   => 'jj_business.css',
  'regions'     => array(
    'header'  => t('Header Region'),
    'footer' => t('Footer Region'),
    'left' => t('Left Sidebar'),
    'right' => t('Right Sidebar'),
  ),
);
