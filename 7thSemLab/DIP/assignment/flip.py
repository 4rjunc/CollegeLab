from PIL import Image

def flip_image(input_path, output_path, flip_type):
    # Open the image file
    img = Image.open(input_path)

    # Flip the image horizontally or vertically
    flipped_img = img.transpose(flip_type)

    # Save the flipped image
    flipped_img.save(output_path)

# Example usage
input_image_path = 'original_image.jpg'
output_flipped_horizontal_path = 'flipped_horizontal_image.jpg'

# Specify the flip type (Image.FLIP_LEFT_RIGHT for horizontal, Image.FLIP_TOP_BOTTOM for vertical)
flip_type = Image.FLIP_LEFT_RIGHT

flip_image(input_image_path, output_flipped_horizontal_path, flip_type)
