import tensorflow as tf

"""
Changing the datatype of a tensor
Sometimes you'll want to alter the default datatype of your tensor.

This is common when you want to compute using less precision (e.g. 16-bit floating point numbers vs. 32-bit floating point numbers).

Computing with less precision is useful on devices with less computing capacity such as mobile devices (because the less bits, the less space the computations require).

You can change the datatype of a tensor using tf.cast().
"""

# Create a new tensor with default datatype (float32)
B = tf.constant([1.7, 7.4])

# Create a new tensor with default datatype (int32)
C = tf.constant([1, 7])
print(B, C)

# Change from float32 to float16 (reduced precision)
B = tf.cast(B, dtype=tf.float16)
print(B)

# Change from int32 to float32
C = tf.cast(C, dtype=tf.float32)
print(C)






