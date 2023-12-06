from PIL import Image, ImageEnhance

def adjust_brightness(input_path, output_path, factor):
    # Open the image file
    img = Image.open(input_path)

    # Create an ImageEnhance object
    enhancer = ImageEnhance.Brightness(img)

    # Adjust the brightness
    enhanced_img = enhancer.enhance(factor)

    # Save the adjusted image
    enhanced_img.save(output_path)

# Example usage
input_image_path = 'flower.jpg'
output_brightness_adjusted_path = 'brightness_adjusted_image.jpg'

# Specify the brightness adjustment factor (1.0 for no change, <1.0 for decrease, >1.0 for increase)
brightness_factor = 1.5

adjust_brightness(input_image_path, output_brightness_adjusted_path, brightness_factor)
