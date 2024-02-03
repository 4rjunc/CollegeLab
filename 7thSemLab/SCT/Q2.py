import tensorflow as tf
import numpy as np

# Define XOR input and output
X = np.array([[0, 0], [0, 1], [1, 0], [1, 1]], dtype=np.float32)
y = np.array([[0], [1], [1], [0]], dtype=np.float32)

# Define the neural network architecture
model = tf.keras.Sequential([
    tf.keras.layers.Dense(2, input_dim=2, activation='sigmoid'),  # Input layer with 2 nodes
    tf.keras.layers.Dense(1, activation='sigmoid')  # Output layer with 1 node
])

# Compile the model
model.compile(optimizer='adam', loss='mean_squared_error', metrics=['accuracy'])

# Train the model on XOR data
model.fit(X, y, epochs=10000, verbose=0)

# Evaluate the model on XOR data
predictions = model.predict(X)
rounded_predictions = np.round(predictions)

# Print the results
print("Input:")
print(X)
print("\nPredictions:")
print(predictions)
print("\nRounded Predictions:")
print(rounded_predictions)
