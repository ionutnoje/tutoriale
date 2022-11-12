import tensorflow as tf
import numpy as np

"""
Tensors and NumPy
We've seen some examples of tensors interact with NumPy arrays, such as, using NumPy arrays to create tensors.

Tensors can also be converted to NumPy arrays using:

np.array() - pass a tensor to convert to an ndarray (NumPy's main datatype).
tensor.numpy() - call on a tensor to convert to an ndarray.
Doing this is helpful as it makes tensors iterable as well as allows us to use any of NumPy's methods on them.
"""

# Create a tensor from a NumPy array
J = tf.constant(np.array([3., 7., 10.]))
print(J)

# Convert tensor J to NumPy with np.array()
print(np.array(J), type(np.array(J)))

# Convert tensor J to NumPy with .numpy()
print(J.numpy(), type(J.numpy()))

"""
By default tensors have dtype=float32, where as NumPy arrays have dtype=float64.

This is because neural networks (which are usually built with TensorFlow) can generally work very well with less precision (32-bit rather than 64-bit).
"""

# Create a tensor from NumPy and from an array
numpy_J = tf.constant(np.array([3., 7., 10.])) # will be float64 (due to NumPy)
tensor_J = tf.constant([3., 7., 10.]) # will be float32 (due to being TensorFlow default)
print(numpy_J.dtype, tensor_J.dtype)



