<?php if (! empty($content['header'])): ?>
<div class="jj-header">
  <?php print $content['header']; ?>
</div>
<?php endif; ?>

<div class="jj-wrap">
  <?php if (! empty($content['left'])): ?>
  <div class="jj-left">
    <?php print $content['left']; ?>
  </div>
  <?php endif; ?>

  <?php if (! empty($content['right'])): ?>
  <div class="jj-right">
    <?php print $content['right']; ?>
  </div>
  <?php endif; ?>
</div>

<?php if (! empty($content['footer'])): ?>
<div class="jj-footer">
  <?php print $content['footer']; ?>
</div>
<?php endif; ?>
