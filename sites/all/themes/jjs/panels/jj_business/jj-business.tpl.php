<?php if ($header): ?>
<div class="jj-header">
  <?php print $header; ?>
</div>
<?php endif; ?>

<div class="jj-wrap">
  <?php if ($left): ?>
  <div class="jj-left">
    <?php print $left; ?>
  </div>
  <?php endif; ?>

  <?php if ($right): ?>
  <div class="jj-right">
    <?php print $right; ?>
  </div>
  <?php endif; ?>
</div>

<?php if ($footer): ?>
<div class="jj-footer">
  <?php print $footer; ?>
</div>
<?php endif; ?>
