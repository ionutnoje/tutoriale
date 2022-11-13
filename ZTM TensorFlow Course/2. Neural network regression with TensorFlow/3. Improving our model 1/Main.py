import tensorflow as tf
import tensorflow.keras as keras
from tensorflow.keras import layers
import numpy as np

"""
Improving a model
How do you think you'd improve upon our current model?

If you guessed by tweaking some of the things we did above, you'd be correct.

To improve our model, we alter almost every part of the 3 steps we went through before.

-Creating a model - here you might want to add more layers, increase the number of hidden units (also called neurons) 
within each layer, change the activation functions of each layer. 
-Compiling a model - you might want to choose 
optimization function or perhaps change the learning rate of the optimization function. 
-Fitting a model - perhaps you 
could fit a model for more epochs (leave it training for longer) or on more data (give the model more examples to 
learn from). 
"""

# Create features
X = np.array([-7.0, -4.0, -1.0, 2.0, 5.0, 8.0, 11.0, 14.0])

# Create labels
y = np.array([3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0])

X = tf.constant(X)
y = tf.constant(y)


# Set random seed
tf.random.set_seed(42)

# Create a model using the Sequential API
model = tf.keras.Sequential([
    tf.keras.layers.Dense(1)
])

# Compile the model
model.compile(loss=tf.keras.losses.mae,  # mae is short for mean absolute error
              optimizer=tf.keras.optimizers.SGD(),  # SGD is short for stochastic gradient descent
              metrics=["mae"])

# Fit the model
# model.fit(X, y, epochs=5) # this will break with TensorFlow 2.7.0+
model.fit(tf.expand_dims(X, axis=-1), y, epochs=2000)

# Make a prediction with the model
print(model.predict([17.0]))