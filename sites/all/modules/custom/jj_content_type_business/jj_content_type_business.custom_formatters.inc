<?php
/**
 * @file
 * jj_content_type_business.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function jj_content_type_business_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'custom_google_static_map';
  $formatter->label = 'Custom: Google Static Map';
  $formatter->description = 'Displays a google static map from an address field.';
  $formatter->mode = 'php';
  $formatter->field_types = 'text';
  $formatter->code = '$geo_stuff = $variables[\'#object\']->field_business_location[\'und\'][0];
$lat = $geo_stuff[\'lat\'];
$lon = $geo_stuff[\'lon\'];
$address = $variables[\'#object\']->field_business_address[\'und\'][0];
$street = $address[\'thoroughfare\'];
$city = $address[\'locality\'];
$state = $address[\'administrative_area\'];
//dpm($address);

$street = str_replace(\' \',\'+\',$street);
$state = str_replace(\' \',\'+\',$state);
$city = str_replace(\' \',\'+\',$city);
//dpm($street);
//dpm($city);
//dpm($state);

//dpm($geo_stuff);
//dpm($variables[\'#object\']);

return \'<img border="0" alt="Points of Interest in Lower Manhattan" src="//maps.googleapis.com/maps/api/staticmap?center=\'.$street.\',\'.$city.\',\'.$state.\'&zoom=13&size=600x300&maptype=roadmap&markers=color:blue%7Clabel:S%7C\'.$lat.\',\'.$lon.\'&markers=color:green%7Clabel:G%7C\'.$lat.\',\'.$lon.\'&markers=color:red%7Clabel:C%7C\'.$lat.\',\'.$lon.\'&sensor=false&key=AIzaSyDKIgze-TBGPIYQssYLWGtpXimt28aczf4" />\';';
  $formatter->fapi = '';
  $export['custom_google_static_map'] = $formatter;

  return $export;
}
