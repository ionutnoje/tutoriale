import tensorflow as tf
import numpy as np

tf.random.set_seed(42)

# create a tensor of size 50 with random values between 0 and 100 and add 2 extra dimensions at the start
tensor_random1 = tf.constant(tf.random.uniform(shape=[50], minval=0, maxval=100), shape=(1, 1, 50))
print(tensor_random1)

# create a tensor of size 50 with random values between 0 and 100 and add 2 extra dimensions at the start
tensor_random2 = tf.constant(np.random.random(50))
print(tensor_random2)
tensor_random2 = tf.expand_dims(tensor_random2, 0)
tensor_random2 = tf.expand_dims(tensor_random2, 0)
print(tensor_random2)

