import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt

# create a neural network to predict the next numbers in the sequence

X = tf.constant(tf.range(1, 100))
y = X + 10

# print(X)
# print(y)

# so we have our 2 tensors, now we want to split them in training and testing

X_training = X[:80]
X_testing = X[80:]

y_training = y[:80]
y_testing = y[80:]

#print(X_training)
#print(X_testing)
#print(y_training)
#print(y_testing)


# Create the model
model = tf.keras.Sequential([
    tf.keras.layers.Dense(1, input_shape=[1]),
    tf.keras.layers.Dense(100, activation="relu"),
    tf.keras.layers.Dense(100, activation="relu"),
    tf.keras.layers.Dense(1)
])

model.compile(
    loss=tf.keras.losses.mae,
    optimizer=tf.keras.optimizers.Adam(learning_rate=0.001),
    metrics=["mae", "acc"]
)

model.fit(tf.expand_dims(X_training, axis=-1), y_training, epochs=1000, verbose=1)


y_pred = model.predict(X_testing)

#print(y_pred)


# visualize the results in a plot


plt.figure(figsize=(10, 10))
plt.scatter(X_training, y_training, c="b", label="Training")
plt.scatter(X_testing, y_testing, c="g", label="Testing")
plt.scatter(X_testing, y_pred, c="r", label="Predicted")
plt.legend()
plt.show()
