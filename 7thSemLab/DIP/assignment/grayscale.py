from PIL import Image

def convert_to_grayscale(input_path, output_path):
    # Open the image file
    img = Image.open(input_path)

    # Convert the image to grayscale
    grayscale_img = img.convert('L')

    # Save the grayscale image
    grayscale_img.save(output_path)

# Example usage
input_image_path = "./flower.jpg"
output_grayscale_path = 'grayscale_image.jpg'

convert_to_grayscale(input_image_path, output_grayscale_path)
