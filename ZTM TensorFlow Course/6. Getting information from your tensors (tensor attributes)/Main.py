import tensorflow as tf

# Getting information from tensors (shape, rank, size) There will be times when you'll want to get different pieces
# of information from your tensors, in particular, you should know the following tensor vocabulary:

# Shape: The length (number of elements) of each of the dimensions of a tensor. Rank: The number of tensor
# dimensions. A scalar has rank 0, a vector has rank 1, a matrix is rank 2, a tensor has rank n. Axis or Dimension: A
# particular dimension of a tensor. Size: The total number of items in the tensor. You'll use these especially when
# you're trying to line up the shapes of your data to the shapes of your model. For example, making sure the shape of
# your image tensors are the same shape as your models input layer.

# We've already seen one of these before using the ndim attribute. Let's see the rest.

# Create a rank 4 tensor (4 dimensions)
rank_4_tensor = tf.zeros([2, 3, 4, 5])
print(rank_4_tensor)
print(rank_4_tensor.shape, rank_4_tensor.ndim, tf.size(rank_4_tensor))

# Get various attributes of tensor
print("Datatype of every element:", rank_4_tensor.dtype)
print("Number of dimensions (rank):", rank_4_tensor.ndim)
print("Shape of tensor:", rank_4_tensor.shape)
print("Elements along axis 0 of tensor:", rank_4_tensor.shape[0])
print("Elements along last axis of tensor:", rank_4_tensor.shape[-1])
print("Total number of elements (2*3*4*5):", tf.size(rank_4_tensor))
print("Total number of elements (2*3*4*5):", tf.size(rank_4_tensor).numpy()) # .numpy() converts to NumPy array

# Datatype of every element:
# Number of dimensions (rank): 4
# Shape of tensor: (2, 3, 4, 5)
# Elements along axis 0 of tensor: 2
# Elements along last axis of tensor: 5
# Total number of elements (2*3*4*5): 120
# You can also index tensors just like Python lists.
