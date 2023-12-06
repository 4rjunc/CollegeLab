from PIL import Image, ImageEnhance

def adjust_contrast(input_path, output_path, factor):
    # Open the image file
    img = Image.open(input_path)

    # Create an ImageEnhance object
    enhancer = ImageEnhance.Contrast(img)

    # Adjust the contrast
    enhanced_img = enhancer.enhance(factor)

    # Save the adjusted image
    enhanced_img.save(output_path)

# Example usage
input_image_path = 'flower.jpg'
output_contrast_adjusted_path = 'contrast_adjusted_image.jpg'

# Specify the contrast adjustment factor (1.0 for no change, <1.0 for decrease, >1.0 for increase)
contrast_factor = 1.5

adjust_contrast(input_image_path, output_contrast_adjusted_path, contrast_factor)
