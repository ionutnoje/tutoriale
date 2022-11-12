"""
Creating random tensors
Random tensors are tensors of some abitrary size which contain random numbers.
"""

"""
tensorflow uses these random tensors at the beginning of the program for the weights 
"""
import tensorflow as tf

# Create two random (but the same) tensors
random_1 = tf.random.Generator.from_seed(7)  # set seed for reproducibility / here we set the random values
random_1 = random_1.normal(shape=(3, 2))  # here we specify the shape and the distribution (normal)
"""
tf.random.normal() outputs a tensor of the given shape filled with values of the dtype type from a normal distribution.

Normal distribution, also known as the Gaussian distribution, is a probability distribution that is symmetric about the 
mean, showing that data near the mean are more frequent in occurrence than data far from the mean.

These numbers are not relly random, they are sudo-random because we specified the seed
"""

random_2 = tf.random.Generator.from_seed(7)
random_2 = random_2.normal(shape=(3, 2))

# Are they equal?
print(random_1)
print(random_2)
print(random_1 == random_2)
