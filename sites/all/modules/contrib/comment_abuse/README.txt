Readme file for the Comment abuse module for Drupal
---------------------------------------------

This module provides control and sending complaints to the comments.

Features:
  - link to complaints about the comment will be added automatically;
  - complaints sent by AJAX;
  - two modes of send complaints - simple link and popup with complaint form;
  - filter by content types;
  - notification by email about complaints;
  - author of comment can not complain about your own comment;
  - each user can complain about a comment only once:
    - for authorized users, verifies the user ID;
    - for anonymous users, checked by IP-address.
  - support views module;
  - form administration of complaints;
  - simple generation of links for complaints in the code.

Installation:
  Installation is like with all normal drupal modules:
  extract the 'comment_abuse' folder from the archive to the
  modules directory from your website (typically sites/all/modules/).

Dependencies:
  Ctools.

Configuration:
  The administration complaints is at admin/content/comment-abuse/list,
  page options of module is at admin/settings/comment-abuse/options,
  where you can configure text of the comment_abuse messages.

Developers:
  You can modify list of reasons of complaints through drupal_alter.
  Add function your_module_complaint_reason_alter(&$reasons) and modify
  array of reasons.

  function your_module_complaint_reason_alter(&$reasons) {
    $reasons[] = 'my reason';
  }

  You can add your custom logic when user send complaint on comment.
  Implements hook_comment_abuse().
  function your_module_comment_abuse($abuse) {
    // Your custom logic.
  }

  You can render complaint link manually via function comment_abuse_get_link()
