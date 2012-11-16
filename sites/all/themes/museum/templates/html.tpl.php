<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">
 
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $scripts; ?>
  <link href="http://fonts.googleapis.com/css?family=Lato:400,700,400italic,700italic|Almendra+SC" rel="stylesheet" type="text/css">
  <?php print $styles; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
