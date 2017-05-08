<div class="image-link link-<?php print $bean->field_front_block_label_color['und'][0]['value']; ?><?php print $attributes; ?>>
  <a href="<?php print $bean->field_front_block_url['und'][0]['url']; ?>">
    <?php if (isset($bean->field_front_block_image['und'][0]['uri']) && isset($bean->field_front_block_image_style['und'][0]['value'])): ?><img src="<?php print image_style_url($bean->field_front_block_image_style['und'][0]['value'], $bean->field_front_block_image['und'][0]['uri']); ?>" alt="<?php print $bean->field_front_block_image['und'][0]['alt']; ?>" />
    <?php elseif (isset($bean->field_front_block_image['und'][0]['uri'])): ?><img src="<?php print file_create_url($bean->field_front_block_image['und'][0]['uri']); ?>" alt="<?php print $bean->field_front_block_image['und'][0]['alt']; ?>" /><?php endif; ?>
      <h2><?php if (isset($bean->field_front_block_label_icon['und'][0]['value'])): ?><i class="fa <?php print $bean->field_front_block_label_icon['und'][0]['value']; ?>"></i><?php endif; print $title; ?></h2>
  </a>
</div>