import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt

"""
Since we're working on a regression problem (predicting a number) let's create some linear data (a straight line) to model.
"""
# Create features
X = np.array([-7.0, -4.0, -1.0, 2.0, 5.0, 8.0, 11.0, 14.0])

# Create labels
y = np.array([3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 21.0, 24.0])

# Visualize it
# plt.scatter(X, y)
# plt.show()

"""
Before we do any modelling, can you calculate the pattern between X and y?

For example, say I asked you, based on this data what the y value would be if X was 17.0?

Or how about if X was -10.0?

This kind of pattern discovery is the essence of what we'll be building neural networks to do for us.

Regression input shapes and output shapes
One of the most important concepts when working with neural networks are the input and output shapes.

The input shape is the shape of your data that goes into the model.

The output shape is the shape of your data you want to come out of your model.

These will differ depending on the problem you're working on.

Neural networks accept numbers and output numbers. These numbers are typically represented as tensors (or arrays).

Before, we created data using NumPy arrays, but we could do the same with tensors.
"""

# Example input and output shapes of a regression model
house_info = tf.constant(["bedroom", "bathroom", "garage"])
house_price = tf.constant([939700])
# print(house_info, house_info.shape, house_price)


# Turn out numpy arrays into tensors
X = tf.constant(X)
y = tf.constant(y)

print(X, " \n", y)
print(X.shape, " \n", y.shape)

input_shape = X[0].shape
output_shape = y[0].shape
# both are going to be 0 because they are scalars, just one number so no dimension->no shape

print(input_shape, output_shape)

plt.scatter(X, y)
plt.show()

"""
Steps in modelling with TensorFlow
Now we know what data we have as well as the input and output shapes, let's see how we'd build a neural network to model it.

In TensorFlow, there are typically 3 fundamental steps to creating and training a model.

1. Creating a model - piece together the layers of a neural network yourself (using the Functional or Sequential API) or 
import a previously built model (known as transfer learning). 
2. Compiling a model - defining how a models performance should be measured (loss/metrics) as well as defining how it should improve (optimizer). 
3. Fitting a model - letting the model try to find patterns in the data (how does X get to y). Let's see these in action using the Keras 
Sequential API to build a model for our regression data. And then we'll step through each. 

Note: If you're using TensorFlow 2.7.0+, the fit() function no longer upscale input data to go from (batch_size, 
) to (batch_size, 1). To fix this, you'll need to expand the dimension of input data using tf.expand_dims(input_data, 
axis=-1). 

In our case, this means instead of using model.fit(X, y, epochs=5), use model.fit(tf.expand_dims(X, axis=-1), y, epochs=5).
"""

#   CREATING OUR FIRST MODEL


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
model.fit(tf.expand_dims(X, axis=-1), y, epochs=10)

# Make a prediction with the model
print(model.predict([17.0]))

"""
It doesn't go very well... it should've output something close to 27.0.

🤔 Question: What's Keras? I thought we were working with TensorFlow but every time we write TensorFlow code, 
keras comes after tf (e.g. tf.keras.layers.Dense())? 

Before TensorFlow 2.0+, Keras was an API designed to be able to build deep learning models with ease. Since 
TensorFlow 2.0+, its functionality has been tightly integrated within the TensorFlow library. """













