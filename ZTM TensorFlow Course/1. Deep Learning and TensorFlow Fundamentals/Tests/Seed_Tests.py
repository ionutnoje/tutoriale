import tensorflow as tf

tensor1 = tf.constant([[1, 2],
                       [2, 3],
                       [4, 5],
                       [5, 2]])

print(tensor1)

tensor1 = tf.random.shuffle(tensor1) # random shuffle every time
print(tensor1)

tensor2 = tf.constant([[1,2,3],
                       [3,4,5],
                       [5,3,1]])
print(tensor2)

tensor2 = tf.random.shuffle(tensor2, seed=1) # will be the same shuffle every run
print(tensor2)


tensor3 = tf.Variable([[1,2],
                      [3,4]])

print(tensor3)

print(tensor3[0][0])


