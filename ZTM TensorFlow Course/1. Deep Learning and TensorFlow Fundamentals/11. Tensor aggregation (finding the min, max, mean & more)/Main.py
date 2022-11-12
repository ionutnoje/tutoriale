import tensorflow as tf
import tensorflow_probability as tfp
import numpy as np

"""
Aggregating tensors
Aggregating tensors = condensing them from multiple values down to a smaller amount of values.


Getting the absolute value
Sometimes you'll want the absolute values (all values are positive) of elements in your tensors.

To do so, you can use tf.abs().
"""
# Create tensor with negative values
D = tf.constant([-7, -10])
print(D)
# Get the absolute values
print(tf.abs(D))

"""Finding the min, max, mean, sum (aggregation) You can quickly aggregate (perform a calculation on a whole tensor) 
tensors to find things like the minimum value, maximum value, mean and sum of all the elements. 

To do so, aggregation methods typically have the syntax reduce()_[action], such as:

tf.reduce_min() - find the minimum value in a tensor. 
tf.reduce_max() - find the maximum value in a tensor (helpful for when you want to find the highest prediction probability). 
tf.reduce_mean() - find the mean of all elements in a tensor. 
tf.reduce_sum() - find the sum of all elements in a tensor. Note: typically, each of these is under the math module, e.g. 
tf.math.reduce_min() but you can use the alias tf.reduce_min(). """

# Create a tensor with 50 random values between 0 and 100
E = tf.constant(np.random.randint(low=0, high=100, size=50))
print(E)

print("minim: ", tf.reduce_min(E))
print("max: ", tf.reduce_max(E))
print("mean: ", tf.reduce_mean(E))
print("sum: ", tf.reduce_sum(E))
print("prod: ", tf.reduce_prod(E))

"""To find the variance of our tensor we need access to tensorflow_probability 
#Variance tells you the degree of spread in your data set. The more spread the data, the larger the variance is in 
relation to the mean. """
# Find the variance of our tensor
print("variance: " ,tfp.stats.variance(E))

# or

print("variance: " ,tf.math.reduce_variance(tf.cast(E, dtype=tf.float32)))

# Find the standard deviation
print("standard deviation: " ,tf.math.reduce_std(tf.cast(E, dtype=tf.float32)))

