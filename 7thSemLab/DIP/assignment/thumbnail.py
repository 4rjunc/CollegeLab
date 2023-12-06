from PIL import Image

def generate_thumbnail(input_path, output_path, thumbnail_size):
    # Open the image file
    img = Image.open(input_path)

    # Generate a thumbnail
    img.thumbnail(thumbnail_size)

    # Save the thumbnail
    img.save(output_path)

# Example usage
input_image_path = 'original_image.jpg'
output_thumbnail_path = 'thumbnail_image.jpg'

# Specify the thumbnail size (adjust as needed)
thumbnail_size = (100, 100)

generate_thumbnail(input_image_path, output_thumbnail_path, thumbnail_size)
