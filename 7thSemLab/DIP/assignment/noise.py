from PIL import Image, ImageFilter
import random

def add_noise(input_path, output_path, noise_factor):
    # Open the image file
    img = Image.open(input_path)

    # Get the image size
    width, height = img.size

    # Create a new image with the same size
    noisy_img = Image.new('RGB', (width, height))

    # Add random noise to each pixel
    for x in range(width):
        for y in range(height):
            r, g, b = img.getpixel((x, y))
            noise = int(random.uniform(-noise_factor, noise_factor) * 255)
            r = max(0, min(255, r + noise))
            g = max(0, min(255, g + noise))
            b = max(0, min(255, b + noise))
            noisy_img.putpixel((x, y), (r, g, b))

    # Save the image with added noise
    noisy_img.save(output_path)

# Example usage
input_image_path = 'original_image.jpg'
output_noisy_path = 'noisy_image.jpg'

# Specify the noise factor (adjust as needed)
noise_factor = 0.2

add_noise(input_image_path, output_noisy_path, noise_factor)
