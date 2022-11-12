import tensorflow as tf
import numpy as np

"""
Squeezing a tensor (removing all single dimensions)
If you need to remove single-dimensions from a tensor (dimensions with size 1), you can use tf.squeeze().

tf.squeeze() - remove all dimensions of 1 from a tensor.
"""
# Create a rank 5 (5 dimensions) tensor of 50 numbers between 0 and 100
G = tf.constant(np.random.randint(0, 100, 50), shape=(1, 1, 1, 1, 50))
print(G.shape, G.ndim)

# Squeeze tensor G (remove all 1 dimensions)
G_squeezed = tf.squeeze(G)
print(G_squeezed.shape, G_squeezed.ndim)