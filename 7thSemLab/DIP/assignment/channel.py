from PIL import Image

def split_channels(input_path, output_path_prefix):
    # Open the image file
    img = Image.open(input_path)

    # Split the image into individual channels (R, G, B)
    channels = img.split()

    # Save each channel as a separate image
    for i, channel in enumerate(channels):
        channel_path = f'{output_path_prefix}_channel_{i}.png'
        channel.save(channel_path)

# Example usage
input_image_path = 'original_image.jpg'
output_channel_prefix = 'image_channel'

split_channels(input_image_path, output_channel_prefix)
