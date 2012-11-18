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
    'header_left'  => t('Header Left'),
    'header_right' => t('Header Right'),
    'blog' => t('Recent Blog Articles'),
    'reviews' => t('Latest Reviews'),
  ),
);
