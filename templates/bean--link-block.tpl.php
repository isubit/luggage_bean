<div class"link-block <?php print $bean->field_link_block_style['und'][0]['value'] ?>" <?php print $attributes; ?>>
  <a href="<?php print $bean->field_link_block_url['und'][0]['url']; ?>">

    <?php if (isset($bean->field_link_block_image['und'][0]['uri'])): ?>
      <div class="link-block_img">
        <img src="<?php print file_create_url($bean->field_link_block_image['und'][0]['uri']); ?>" alt="<?php print $bean->field_link_block_image['und'][0]['alt']; ?>" />
      </div>
    <?php endif; ?>

    <?php if (isset($bean->field_link_block_label_icon['und'][0]['value'])): ?>
      <div class="link-block_label">
        <p><i class="fa <?php print $bean->field_link_block_label_icon['und'][0]['value']; ?>"></i>
        <?php endif; print $title; ?></p>
      </div>
    <?php endif; ?>

  </a>
</div>