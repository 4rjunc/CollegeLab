from PIL import Image

def threshold_image(input_path, output_path, threshold):
    # Open the image file
    img = Image.open(input_path)

    # Convert the image to binary based on the threshold
    binary_img = img.point(lambda p: 255 if p > threshold else 0)

    # Save the binary image
    binary_img.save(output_path)

# Example usage
input_image_path = 'flower.jpg'
output_binary_path = 'binary_image.jpg'

# Specify the threshold value (adjust as needed)
threshold_value = 128

threshold_image(input_image_path, output_binary_path, threshold_value)
