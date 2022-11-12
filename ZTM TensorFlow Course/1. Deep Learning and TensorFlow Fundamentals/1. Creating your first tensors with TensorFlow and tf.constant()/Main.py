# Import TensorFlow
import tensorflow as tf
#print(tf.__version__) # find the version number (should be 2.x+)

# -------------------------------------------------------------------------------------------------------------------

# Creating Tensors with tf.constant()
# Create a scalar (rank 0 tensor)
scalar = tf.constant(7)
print(scalar)

# -------------------------------------------------------------------------------------------------------------------

# Check the number of dimensions of a tensor (ndim stands for number of dimensions)
print(scalar.ndim)

# -------------------------------------------------------------------------------------------------------------------

# Create a vector (more than 0 dimensions)
vector = tf.constant([10, 10])
print(vector)
print(vector.ndim)

# -------------------------------------------------------------------------------------------------------------------

# Create a matrix (more than 1 dimension)
matrix = tf.constant([[10, 7],
                      [7, 10]])
print(matrix)
print(matrix.ndim)

# -------------------------------------------------------------------------------------------------------------------

# Create another matrix and define the datatype
another_matrix = tf.constant([[10., 7.],
                              [3., 2.],
                              [8., 9.]], dtype=tf.float16) # specify the datatype with 'dtype'
print(another_matrix)
print(matrix.ndim)

# -------------------------------------------------------------------------------------------------------------------

# How about a tensor? (more than 2 dimensions, although, all of the above items are also technically tensors)
tensor = tf.constant([[[1, 2, 3],
                       [4, 5, 6]],
                      [[7, 8, 9],
                       [10, 11, 12]],
                      [[13, 14, 15],
                       [16, 17, 18]]])
print(tensor)
print(tensor.ndim)


# tensor with the number of dimensions equal to 4, so that means that we have 4 elements in a vector, which also
# means that we have 4 versors
tensor = tf.constant([[[[1, 2, 3,4],
                       [4, 5, 6,5]],
                      [[7, 8, 9,6],
                       [10, 11, 12,7]],
                      [[13, 14, 15,8],
                       [16, 17, 18,9]]]])
print(tensor)
print(tensor.ndim)

# -------------------------------------------------------------------------------------------------------------------

tensor1 = tf.range(1,20)
print(tensor1)



"""
DEFINITIONS:

This is known as a rank 3 tensor (3-dimensions), however a tensor can have an arbitrary (unlimited) amount of dimensions.

For example, you might turn a series of images into tensors with shape (224, 224, 3, 32), where:

224, 224 (the first 2 dimensions) are the height and width of the images in pixels. 3 is the number of colour 
channels of the image (red, green blue). 32 is the batch size (the number of images a neural network sees at any one 
time). All of the above variables we've created are actually tensors. But you may also hear them referred to as their 
different names (the ones we gave them): 

scalar: a single number. vector: a number with direction (e.g. wind speed with direction). matrix: a 2-dimensional 
array of numbers. tensor: an n-dimensional array of numbers (where n can be any number, a 0-dimension tensor is a 
scalar, a 1-dimension tensor is a vector). To add to the confusion, the terms matrix and tensor are often used 
interchangeably. 

Going forward since we're using TensorFlow, everything we refer to and use will be tensors.


PERSONAL EXPLANATION:
If the tensors are rank-1, then it decreases visual understand by replacing our orthogonal triplet of easily visualized arrows:
(x^,y^,z^)

the number of dimensions is directly correlated with the number of versors (versori)(edit: wrong)

EXAMPLE: 

numpy_A = np.arange(1, 25, dtype=np.int32)  # create a NumPy array between 1 and 25
A = tf.constant(numpy_A,shape=[2, 3, 4])  # note: the shape total (2*4*3) has to match the number of elements in the
# array

So here A will have 3 dimensions because we have 2 matrix es, each with 3 rows and 4 elements on each row,
that's why we have 3 dimensions

numpy_A has 1 dimension because it is an array with 24 elements


A = tf.constant(numpy_A,shape=[6, 4]) - this one will have 2 dimensions, watch the number of brackets in the output(2)
                                        so it's just this matrix [matrix]
A = tf.constant(numpy_A,shape=[1, 6, 4]) - this will have 3 dimensions, so here we can have multiple matrix es in the
                                            output: [[matrix1],
                                                     [matrix2]]
                                            here matrix2 will be null because we don't have elements for it


"""