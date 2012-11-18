<?php
// Plugin definition
$plugin = array(
  'title'       => t('Business Directory'),
  'icon'        => '80.png',
  'category'    => t('JJ'),
  'theme'       => 'jj_business_directory',
  'css'         => 'jj_business.css',
  'admin theme' => 'jj_business_directory',
  'admin css'   => 'jj_business.css',
  'regions'     => array(
    'header'  => t('Header Region'),
    'footer' => t('Footer Region'),
    'left' => t('Left Sidebar'),
    'right' => t('Right Sidebar'),
  ),
);
