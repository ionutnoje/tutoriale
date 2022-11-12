import tensorflow as tf
import numpy as np

tensor1 = tf.constant(np.random.random(50))
print(tensor1)
print("min_poz: ", tf.argmin(tensor1), " min_val: ", tf.reduce_min(tensor1))
print("max_poz: ", tf.argmax(tensor1), " max_val: ", tf.reduce_max(tensor1))

tensor2 = tf.constant([[1, 2],
                       [3, 4],
                       [1, 0]])
print(tensor2)
print("min_poz: ", tf.argmin(tensor2), " min_val: ", tf.reduce_min(tensor2))
print("max_poz: ", tf.argmax(tensor2), " max_val: ", tf.reduce_max(tensor2))


tensor3 = tf.constant(tf.random.uniform(shape=[21], minval=0, maxval=100), shape=(1,1,1,21))
print(tensor3)