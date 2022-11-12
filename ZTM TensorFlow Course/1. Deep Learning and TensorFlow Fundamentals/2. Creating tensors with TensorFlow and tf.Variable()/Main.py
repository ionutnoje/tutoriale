"""A TensorFlow variable is the recommended way to represent shared, persistent state your program manipulates. This
guide covers how to create, update, and manage instances of tf.Variable in TensorFlow.

Variables are created and tracked via the tf.Variable class. A tf.Variable represents a tensor whose value can be
changed by running ops on it. Specific ops allow you to read and modify the values of this tensor. Higher level
libraries like tf.keras use tf.Variable to store model parameters.

variables: can be changed, like parameters, weight, bias etc.
constant: can not be updated, but can be called multible times with only 1 copy in the memory
 """

"""Creating Tensors with tf.Variable() You can also (although you likely rarely will, because often, when working 
with data, tensors are created for you automatically) create tensors using tf.Variable(). 

The difference between tf.Variable() and tf.constant() is tensors created with tf.constant() are immutable (can't be 
changed,can only be used to create a new tensor), where as, tensors created with tf.Variable() are mutable (can be changed).
"""

import tensorflow as tf

# Create the same tensor with tf.Variable() and tf.constant()
changeable_tensor = tf.Variable([10, 7])
unchangeable_tensor = tf.constant([10, 7])
print(changeable_tensor)
print(unchangeable_tensor)

# ----------------------------------------------------------------------------------------------------------------------

# Now let's try to change one of the elements of the changeable tensor.

# Will error (requires the .assign() method)
"""
changeable_tensor[0] = 7
print(changeable_tensor)
"""

# ----------------------------------------------------------------------------------------------------------------------

# To change an element of a tf.Variable() tensor requires the assign() method.

# Won't error
changeable_tensor[0].assign(7)
print(changeable_tensor)

# ----------------------------------------------------------------------------------------------------------------------

# Now let's try to change a value in a tf.constant() tensor.

# Will error (can't change tf.constant())
"""
unchangeable_tensor[0].assign(7)
print(unchangeable_tensor)
"""
"""
we can't change the value of a constant tensor(created with tf.constant, but we can change the value of a changeable 
tensor(created with tf.variable) the same way we would acces a value of an array + assign function
"""


