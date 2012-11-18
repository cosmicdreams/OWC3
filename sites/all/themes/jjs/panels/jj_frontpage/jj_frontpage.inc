<?php
// Plugin definition
$plugin = array(
  'title'       => t('Frontpage'),
  'icon'        => '80.jpg',
  'category'    => t('JJ'),
  'theme'       => 'jj_frontpage',
  'css'         => 'jj_frontpage.css',
  'admin theme' => 'jj_frontpage_admin',
  'admin css'   => 'jj_frontpage.css',
  'regions'     => array(
    'header'  => t('Header Region'),
    'footer' => t('Footer Region'),
    'left' => t('Left Sidebar'),
    'right' => t('Right Sidebar'),
  ),
);
