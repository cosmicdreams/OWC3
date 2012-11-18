<?php
/**
 * @file
 * jj_welcome_email_message.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jj_welcome_email_message_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = 'Thank you for joining our vibrant community at jjslist.com, where people with disabilities and businesses connect! Here are a few things you can explore next:

    To find a disability-aware business near you, visit our Directory.
    To share your thoughts on the disability awareness of a business, write a review.

Are you a business owner?

    Search for your business (link) and claim it now to unlock the ability to manage your page.
    Learn about our Disability Awareness Training for Businesses.

Are you an educator or agency staff?

    Learn about our Safe and Productive Internet Life & Literacy Skills (SPILLS) Curriculum.

Questions? We’re happy to help. Contact us at info@jjslist.com or (847) 869-0000.

Thanks again! Together, we can build a community that’s truly inclusive.

Sincerely,
The JJ’s List Team
www.facebook.com/JJsList
www.twitter.com/JJsList';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'New User Profile Signup - Thank You';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = 'Thank you for joining our vibrant community at jjslist.com, where people with disabilities and businesses connect! Here are a few things you can explore next:

    To find a disability-aware business near you, visit our Directory.
    To share your thoughts on the disability awareness of a business, write a review.

Are you a business owner?

    Search for your business (link) and claim it now to unlock the ability to manage your page.
    Learn about our Disability Awareness Training for Businesses.

Are you an educator or agency staff?

    Learn about our Safe and Productive Internet Life & Literacy Skills (SPILLS) Curriculum.

Questions? We’re happy to help. Contact us at info@jjslist.com or (847) 869-0000.

Thanks again! Together, we can build a community that’s truly inclusive.

Sincerely,
The JJ’s List Team
www.facebook.com/JJsList
www.twitter.com/JJsList';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'New User Profile Signup - Thank You';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  return $export;
}
