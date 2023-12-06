from PIL import Image

def crop_image(input_path, output_path, x, y, width, height):
    # Open the image file
    img = Image.open(input_path)

    # Crop the image
    cropped_img = img.crop((x, y, x + width, y + height))

    # Save the cropped image
    cropped_img.save(output_path)

# Example usage
input_image_path = 'flower.jpg'
output_cropped_path = 'cropped_image.jpg'

# Specify the coordinates (x, y) and dimensions (width, height) of the region to be cropped
crop_x, crop_y, crop_width, crop_height = 100, 50, 300, 200

crop_image(input_image_path, output_cropped_path, crop_x, crop_y, crop_width, crop_height)
