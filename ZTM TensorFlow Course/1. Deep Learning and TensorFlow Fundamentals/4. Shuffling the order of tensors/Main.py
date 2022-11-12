import tensorflow as tf

#Shuffle the order of elements in a tensor
# Shuffle a tensor (valuable for when you want to shuffle your data so the inherent order doesn't affect learning)

"""
why we use shuffling?
we use shuffling to randomize the inputs that out neural network is getting
for example: if we have 10000 images and the first 5000 are with dogs and the other 5000 are with cats
our NN might start to think that it only needs to learn the images that contain dogs, or it might start to overchange
the weights to predict the dog images
So the best way is to shuffle the inputs so out NN can learn both at the same rate
so we would have sth like: dog->cat->dog->dog->cat->etc.
"""

not_shuffled = tf.constant([[10, 7],
                            [3, 4],
                            [2, 5]])
# Shuffle our non-shuffled tensor
shuffled = tf.random.shuffle(not_shuffled)  # this will shuffle the tensor

print(shuffled)

# -----------------------------------------------------------------------------------------------------------
"""
ABOUT SEEDS:
there are 2 types of seeds: global level seeds and operational level seeds

-If neither the global seed nor the operation seed is set, we get different results for every call to the random op and 
every re-run of the program


"""
