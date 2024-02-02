import tensorflow as tf
from tensorflow.keras import layers, models


# Define the MLP model
def create_mlp(input_size, hidden_sizes, output_size):
    model = models.Sequential()
    # Add the input layer
    model.add(layers.InputLayer(input_shape=(input_size,)))
    # Add hidden layers
    for hidden_size in hidden_sizes:
        model.add(layers.Dense(hidden_size, activation="relu"))
    # Add the output layer
    model.add(layers.Dense(output_size, activation="softmax"))
    return model


# Example usage
if __name__ == "__main__":
    # Define the model architecture
    input_size = 10  # Example: Number of input features
    hidden_sizes = [
        64,
        32,
    ]  # Example: Two hidden layers with 64 and 32 neurons, respectively
    output_size = 2  # Example: Number of output classes
    # Create the MLP model
    mlp_model = create_mlp(input_size, hidden_sizes, output_size)
    # Display the model summary
    mlp_model.summary()
