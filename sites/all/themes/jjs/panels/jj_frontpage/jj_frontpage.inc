<?php
// Plugin definition
$plugin = array(
  'title'       => t('Frontpage'),
  'icon'        => '',
  'category'    => t('JJ'),
  'theme'       => 'jj_frontpage',
  'css'         => 'jj_frontpage.css',
  'admin theme' => 'jj_frontpage',
  'admin css'   => 'jj_frontpage.css',
  'panels'     => array(
    'header'  => t('Header Region'),
    'footer' => t('Footer Region'),
    'left' => t('Left Sidebar'),
    'right' => t('Right Sidebar'),
  ),
);
