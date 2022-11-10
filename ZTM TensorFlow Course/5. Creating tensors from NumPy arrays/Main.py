import tensorflow as tf
import numpy as np

# Other ways to make tensors Though you might rarely use these (remember, many tensor operations are done behind the
# scenes for you), you can use tf.ones() to create a tensor of all ones and tf.zeros() to create a tensor of all zeros.

# Make a tensor of all ones
tf.ones(shape=(3, 2))
# Make a tensor of all zeros
tf.zeros(shape=(3, 2))
# You can also turn NumPy arrays in into tensors.

# Remember, the main difference between tensors and NumPy arrays is that tensors can be run on GPUs.

# Note: A matrix or tensor is typically represented by a capital letter (e.g. X or A) whereas a vector is typically
# represented by a lowercase letter (e.g. y or b).


numpy_A = np.arange(1, 25, dtype=np.int32)  # create a NumPy array between 1 and 25
A = tf.constant(numpy_A,shape=[2, 3, 4])  # note: the shape total (2*4*3) has to match the number of elements in the
# array
print(numpy_A, A)
print(A.ndim)
print(numpy_A.ndim)

