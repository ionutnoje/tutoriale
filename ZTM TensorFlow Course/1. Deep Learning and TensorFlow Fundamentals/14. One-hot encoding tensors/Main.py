import tensorflow as tf
import numpy as np

"""
One-hot encoding
If you have a tensor of indices and would like to one-hot encode it, you can use tf.one_hot().

You should also specify the depth parameter (the level which you want to one-hot encode to).
"""
# Create a list of indices
some_list = [0, 1, 2, 3]

# One hot encode them
print(tf.one_hot(some_list, depth=4))
# You can also specify values for on_value and off_value instead of the default 0 and 1.

# Specify custom values for on and off encoding
print(tf.one_hot(some_list, depth=4, on_value="We're live!", off_value="Offline"))

