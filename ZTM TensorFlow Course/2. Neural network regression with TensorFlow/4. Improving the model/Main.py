import tensorflow as tf
import numpy as np

# Create features
X = np.array([-7.0, -4.0, -1.0, 2.0, 5.0, 8.0, 11.0, 14.0])

# Create labels
y = np.array([3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0])

X = tf.constant(X)
y = tf.constant(y)

model = tf.keras.Sequential([
    tf.keras.layers.Dense(100, activation="relu"),  # first hidden layer
    # tf.keras.layers.Dense(100, activation="relu"),  # second hidden layer
    # tf.keras.layers.Dense(100, activation="relu"),  # last hidden layer
    tf.keras.layers.Dense(1)  # layer de output
])

model.compile(
    loss=tf.keras.losses.mae,
    optimizer=tf.keras.optimizers.Adam(learning_rate=0.01),
    metrics=['mae']
)

model.fit(tf.expand_dims(X, axis=-1), y, epochs=2000)

print(model.predict([17.0]))
