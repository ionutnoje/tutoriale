import tensorflow as tf
import numpy as np
import tensorflow.keras as keras
import matplotlib.pyplot as plt

X = tf.constant(tf.range(1, 100))
y = tf.constant(
    [0.1, 0.3, 0.6, 1.0, 1.5, 2.1, 2.8, 3.5, 4.5, 5.5, 6.6, 7.8, 9.1, 10.5, 12.0, 13.6, 15.2, 17.0, 18.9, 20.9, 23.0,
     25.2, 27.5, 29.9, 32.5, 35.1, 37.8, 40.6, 43.5, 46.5, 49.6, 52.8, 56.1, 59.5, 63.0, 66.6, 70.3, 74.1, 78.0, 82.0,
     86.1, 90.3, 94.6, 99.0, 103.5, 108.1, 112.8, 117.6, 122.5, 127.5, 132.6, 137.7, 143.1, 148.5, 154.0, 159.6, 165.2,
     171.1, 177.0, 183.0, 189.1, 195.2, 201.6, 208.0, 214.5, 221.1, 227.7, 234.6, 241.5, 248.5, 255.6, 262.8, 270.1,
     277.5, 285.0, 292.6, 300.3, 308.1, 316.0, 324.0, 332.1, 340.3, 348.6, 357.0, 365.5, 374.1, 382.8, 391.6, 400.5,
     409.5, 418.6, 427.8, 437.1, 446.5, 456.0, 465.6, 475.3, 485.1, 495.0])

X_training = X[:80]
y_training = y[:80]

X_testing = X[80:]
y_testing = y[80:]

model = tf.keras.Sequential([
    tf.keras.layers.Dense(1, input_shape=[1]),
    tf.keras.layers.Dense(300, activation="relu"),
    tf.keras.layers.Dense(1)
])

model.compile(
    loss=tf.keras.losses.mae,
    optimizer=tf.keras.optimizers.Adam(learning_rate=0.01),
    metrics=["mae"]
)

model.fit(tf.expand_dims(X_training, axis=-1), y_training, epochs=5000, verbose=1)

y_pred = model.predict(X_testing)

plt.figure(figsize=(10, 10))
plt.scatter(X_training, y_training, c="b", label="Training")
plt.scatter(X_testing, y_testing, c="g", label="Testing")
plt.scatter(X_testing, y_pred, c="r", label="Predicted")

plt.legend()
plt.show()
