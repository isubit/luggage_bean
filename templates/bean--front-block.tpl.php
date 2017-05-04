<div class="image-link link-<?php print $bean->field_front_block_label_color['und'][0]['value']; ?><?php print $attributes; ?>>
  <a href="<?php print $bean->field_front_block_url['und'][0]['url']; ?>">
    <img src="<?php print file_create_url($bean->field_front_block_image['und'][0]['uri']); ?>" alt="<?php print $bean->field_front_block_image['und'][0]['alt']; ?>" />
      <h2><?php if (isset($bean->field_front_block_label_icon['und'][0]['value'])): ?><i class="fa <?php print $bean->field_front_block_label_icon['und'][0]['value']; ?>"></i><?php endif; print $title; ?></h2>
  </a>
</div>