import tensorflow as tf
import numpy as np

"""
Finding the positional maximum and minimum
How about finding the position a tensor where the maximum value occurs?

This is helpful when you want to line up your labels (say ['Green', 'Blue', 'Red']) with your prediction 
probabilities tensor (e.g. [0.98, 0.01, 0.01]). 

In this case, the predicted label (the one with the highest prediction probability) would be 'Green'.

You can do the same for the minimum (if required) with the following:

tf.argmax() - find the index of the maximum element in a given tensor.
tf.argmin() - find the index of the minimum element in a given tensor.
"""

# Create a tensor with 50 values between 0 and 1
F = tf.constant(np.random.random(50))
print(F)
# Find the maximum element position of F
print(tf.argmax(F))
# Find the minimum element position of F
print(tf.argmin(F))
# Find the maximum element position of F
print(f"The maximum value of F is at position: {tf.argmax(F).numpy()}")
print(f"The maximum value of F is: {tf.reduce_max(F).numpy()}")
print(f"Using tf.argmax() to index F, the maximum value of F is: {F[tf.argmax(F)].numpy()}")
print(f"Are the two max values the same (they should be)? {F[tf.argmax(F)].numpy() == tf.reduce_max(F).numpy()}")
