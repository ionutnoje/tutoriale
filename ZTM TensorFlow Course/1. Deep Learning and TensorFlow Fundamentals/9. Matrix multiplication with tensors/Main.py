import tensorflow as tf

"""
Matrix multiplication
One of the most common operations in machine learning algorithms is matrix multiplication.
TensorFlow implements this matrix multiplication functionality in the tf.matmul() method.
The main two rules for matrix multiplication to remember are:

The inner dimensions must match:
(3, 5) @ (3, 5) won't work
(5, 3) @ (3, 5) will work
(3, 5) @ (5, 3) will work
The resulting matrix has the shape of the outer dimensions:
(5, 3) @ (3, 5) -> (5, 5)
(3, 5) @ (5, 3) -> (3, 3)
🔑 Note: '@' in Python is the symbol for matrix multiplication.
"""

tensor = tf.constant([[10, 7],
                      [3, 4]])
# Matrix multiplication in TensorFlow
print(tensor)
print(tf.matmul(tensor, tensor))

# Matrix multiplication with Python operator '@'
print(tensor @ tensor)

"""
Both of these examples work because our tensor variable is of shape (2, 2).
What if we created some tensors which had mismatched shapes?
"""

# Create (3, 2) tensor
X = tf.constant([[1, 2],
                 [3, 4],
                 [5, 6]])

# Create another (3, 2) tensor
Y = tf.constant([[7, 8],
                 [9, 10],
                 [11, 12]])
# print(tf.matmul(X,Y)) # error because the shapes of the tensors are wrong for multiplication
"""
Trying to matrix multiply two tensors with the shape (3, 2) errors because the inner dimensions don't match.

We need to either:

Reshape X to (2, 3) so it's (2, 3) @ (3, 2).
Reshape Y to (3, 2) so it's (3, 2) @ (2, 3).
We can do this with either:

tf.reshape() - allows us to reshape a tensor into a defined shape.
tf.transpose() - switches the dimensions of a given tensor.

"""
# Let's try tf.reshape() first.

# Example of reshape (3, 2) -> (2, 3)
Y = tf.reshape(Y, shape=(2, 3))

# Try matrix multiplication with reshaped Y
print(X @ Y)

# It worked, let's try the same with a reshaped X, except this time we'll use tf.transpose() and tf.matmul().
# Example of transpose (3, 2) -> (2, 3)
X = tf.transpose(X)

# Try matrix multiplication
print(tf.matmul(tf.transpose(X), Y))

# You can achieve the same result with parameters
print(tf.matmul(a=X, b=Y, transpose_a=True, transpose_b=False))

"""
Notice the difference in the resulting shapes when transposing X or reshaping Y.

This is because of the 2nd rule mentioned above:

(3, 2) @ (2, 3) -> (3, 3) done with X @ tf.reshape(Y, shape=(2, 3)) (2, 3) @ (3, 2) -> (2, 2) done with tf.matmul(
tf.transpose(X), Y) This kind of data manipulation is a reminder: you'll spend a lot of your time in machine learning 
and working with neural networks reshaping data (in the form of tensors) to prepare it to be used with various 
operations (such as feeding it to a model). 
"""

"""
The dot product
Multiplying matrices by each other is also referred to as the dot product.

You can perform the tf.matmul() operation using tf.tensordot(). 
"""

# Perform the dot product on X and Y (requires X to be transposed)
print(tf.tensordot(tf.transpose(X), Y, axes=1))
"""
You might notice that although using both reshape and transpose work, you get different results when using each.

Let's see an example, first with tf.transpose() then with tf.reshape().
"""

# Perform matrix multiplication between X and Y (transposed)
print(tf.matmul(X, tf.transpose(Y)))

# Perform matrix multiplication between X and Y (reshaped)
print(tf.matmul(X, tf.reshape(Y, (2, 3))))

"""

Hmm... they result in different values.

Which is strange because when dealing with Y (a (3x2) matrix), reshaping to (2, 3) and tranposing it result in the 
same shape. """

# Check shapes of Y, reshaped Y and tranposed Y
print(Y.shape, tf.reshape(Y, (2, 3)).shape, tf.transpose(Y).shape)

# But calling tf.reshape() and tf.transpose() on Y don't necessarily result in the same values.

# Check values of Y, reshape Y and transposed Y
print("Normal Y:")
print(Y, "\n")  # "\n" for newline

print("Y reshaped to (2, 3):")
print(tf.reshape(Y, (2, 3)), "\n")

print("Y transposed:")
print(tf.transpose(Y))

"""As you can see, the outputs of tf.reshape() and tf.transpose() when called on Y, even though they have the same 
shape, are different. 

This can be explained by the default behaviour of each method:

tf.reshape() - change the shape of the given tensor (first) and then insert values in order they appear (in our case, 
7, 8, 9, 10, 11, 12). tf.transpose() - swap the order of the axes, by default the last axis becomes the first, 
however the order can be changed using the perm parameter. So which should you use? 

Again, most of the time these operations (when they need to be run, such as during the training a neural network, 
will be implemented for you). 

But generally, whenever performing a matrix multiplication and the shapes of two matrices don't line up, 
you will transpose (not reshape) one of them in order to line them up. """


"""
Matrix multiplication tidbits
If we transposed Y, it would be represented as  (note the capital T for transpose).
Get an illustrative view of matrix multiplication by Math is Fun.
Try a hands-on demo of matrix multiplication: http://matrixmultiplication.xyz/ (shown below).
"""




