from PIL import Image, ImageDraw

def draw_shape(input_path, output_path, shape_type, coordinates, color):
    # Open the image file
    img = Image.open(input_path)

    # Create a drawing object
    draw = ImageDraw.Draw(img)

    # Draw the shape based on the specified type
    if shape_type == 'rectangle':
        draw.rectangle(coordinates, outline=color)

    # Save the image with the drawn shape
    img.save(output_path)

# Example usage
input_image_path = 'original_image.jpg'
output_image_path = 'image_with_shape.jpg'

# Specify the shape type ('rectangle' in this example)
shape_type = 'rectangle'

# Specify the coordinates and color for the shape (adjust as needed)
shape_coordinates = [(50, 50), (200, 200)]  # Coordinates of the top-left and bottom-right corners for a rectangle
shape_color = 'red'

draw_shape(input_image_path, output_image_path, shape_type, shape_coordinates, shape_color)
