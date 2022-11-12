import tensorflow as tf
import numpy as np

"""
Using @tf.function
In your TensorFlow adventures, you might come across Python functions which have the decorator @tf.function.

If you aren't sure what Python decorators do, read RealPython's guide on them.

But in short, decorators modify a function in one way or another.

In the @tf.function decorator case, it turns a Python function into a callable TensorFlow graph. Which is a fancy way 
of saying, if you've written your own Python function, and you decorate it with @tf.function, when you export your 
code (to potentially run on another device), TensorFlow will attempt to convert it into a fast(er) version of itself 
(by making it part of a computation graph). 

For more on this, read the Better performance with tf.function guide.

"""


# Create a simple function
def function(x, y):
    return x ** 2 + y


x = tf.constant(np.arange(0, 10))
y = tf.constant(np.arange(10, 20))
function(x, y)


# Create the same function and decorate it with tf.function
@tf.function
def tf_function(x1, y1):
    return x1 ** 2 + y1


tf_function(x, y)

"""
If you noticed no difference between the above two functions (the decorated one and the non-decorated one) you'd be right.

Much of the difference happens behind the scenes. One of the main ones being potential code speed-ups where possible.
"""
