import tensorflow as tf

#  if we only set the global seed (tf.random.set_seed(1)), for each run we will get the same results
#  for example I want to share my code with a friend and I want him to have the same outputs as me
#  this can be achieved by setting a global seed as showed above


"""
Operations that rely on a random seed actually derive it from two seeds: the global and operation-level seeds. 
This sets the global seed.

Its interactions with operation-level seeds is as follows:

If neither the global seed nor the operation seed is set: A randomly picked seed is used for this op.
If the global seed is set, but the operation seed is not: The system deterministically picks an operation seed in 
conjunction with the global seed so that it gets a unique random sequence. Within the same version of tensorflow and 
user code, this sequence is deterministic. However across different versions, this sequence might change. If the code 
depends on particular seeds to work, specify both global and operation-level seeds explicitly.
If the operation seed is set, but the global seed is not set: A default global seed and the specified operation seed 
are used to determine the random sequence.
If both the global and the operation seed are set: Both seeds are used in conjunction to determine the random sequence.
"""

# If neither the global seed nor the operation seed is set, we get different results for every call to the random op and
# every re-run of the program:
"""
print(tf.random.uniform([1]))  # generates 'A1'
print(tf.random.uniform([1]))  # generates 'A2'
"""

# if the global seed is set but the operation seed is not set, we get different results for every call to the random
# op, but the same sequence for every re-run of the program:
# we will get the same outputs every time, this is what the global seed does
"""
tf.random.set_seed(1234)  # global seed
print(tf.random.uniform([1]))  # generates 'A1'
print(tf.random.uniform([1]))  # generates 'A2'
"""

# Note that tf.function acts like a re-run of a program in this case. When the global seed is set but operation seeds
# are not set, the sequence of random numbers are the same for each tf.function. For example:

"""
tf.random.set_seed(1234)


@tf.function
def f():
    a = tf.random.uniform([1])
    b = tf.random.uniform([1])
    return a, b


@tf.function
def g():
    a = tf.random.uniform([1])
    b = tf.random.uniform([1])
    return a, b


print(f())  # prints '(A1, A2)'
print(g())  # prints '(A1, A2)'
# each function will have the same output because we didn't specify an operational seed
"""

# If the operation seed is set, we get different results for every call to the random op, but the same sequence for
# every re-run of the program:
# each run we will get the same values, but each value is different in the run itself
"""
print(tf.random.uniform([1], seed=1))  # generates 'A1'
print(tf.random.uniform([1], seed=1))  # generates 'A2'
"""

# The reason we get 'A2' instead 'A1' on the second call of tf.random.uniform above is because the same
# tf.random.uniform kernel (i.e. internal representation) is used by TensorFlow for all calls of it with the same
# arguments, and the kernel maintains an internal counter which is incremented every time it is executed, generating
# different results.

# Calling tf.random.set_seed will reset any such counters:

"""
tf.random.set_seed(1234)
print(tf.random.uniform([1], seed=1))  # generates 'A1'
print(tf.random.uniform([1], seed=1))  # generates 'A2'
tf.random.set_seed(1234)
print(tf.random.uniform([1], seed=1))  # generates 'A1'
print(tf.random.uniform([1], seed=1))  # generates 'A2'
"""


# When multiple identical random ops are wrapped in a tf.function, their behaviors change because the ops no long
# share the same counter. For example:


@tf.function
def foo():
    a = tf.random.uniform([1], seed=1)
    b = tf.random.uniform([1], seed=1)
    return a, b


# these 2 will have the same output, because we set the seed

print(foo())  # prints '(A1, A1)'
print(foo())  # prints '(A2, A2)'


@tf.function
def bar():
    a = tf.random.uniform([1])
    b = tf.random.uniform([1])
    return a, b


# these 2 will have different values because we didn't specify the seed

print(bar())  # prints '(A1, A2)'
print(bar())  # prints '(A3, A4)'
# The second call of foo returns '(A2, A2)' instead of '(A1, A1)' because tf.random.uniform maintains an internal
# counter. If you want foo to return '(A1, A1)' every time, use the stateless random ops such as
# tf.random.stateless_uniform. Also see tf.random.experimental.Generator for a new set of stateful random ops that
# use external variables to manage their states.
