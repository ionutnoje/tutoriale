import tensorflow as tf

# Manipulating tensors (tensor operations)
# Finding patterns in tensors (numerical representation of data) requires manipulating them.

# Again, when building models in TensorFlow, much of this pattern discovery is done for you.

# Basic operations
# You can perform many of the basic mathematical operations directly on tensors using Python operators such as, +, -, *


# You can add values to a tensor using the addition operator
tensor = tf.constant([[10, 7], [3, 4]])
print(tensor + 10)  # add 10 to each element in matrix

# Since we used tf.constant(), the original tensor is unchanged (the addition gets done on a copy).

# Original tensor unchanged
print(tensor)




#Other operators also work.

# Multiplication (known as element-wise multiplication)
print(tensor * 10)
# Subtraction
print(tensor - 10)
#You can also use the equivalent TensorFlow function. Using the TensorFlow function (where possible) has the advantage of being sped up later down the line when running as part of a TensorFlow graph.

# Use the tensorflow function equivalent of the '*' (multiply) operator
tf.multiply(tensor, 10)
# The original tensor is still unchanged
print(tensor)
