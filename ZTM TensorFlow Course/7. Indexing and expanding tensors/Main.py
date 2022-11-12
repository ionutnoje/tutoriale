import tensorflow as tf

rank_4_tensor = tf.zeros([2, 3, 4, 5])

# Get the first 2 items of each dimension
# print(rank_4_tensor[:2, :2, :2, :2])
# print("\n")
# Get the dimension from each index except for the final one
# print(rank_4_tensor[:1, :1, :1, :])
# print("\n")

# Create a rank 2 tensor (2 dimensions)
rank_2_tensor = tf.constant([[10, 7],
                             [3, 4]])

# Get the last item of each row
# print(rank_2_tensor[:, -1])
# You can also add dimensions to your tensor whilst keeping the same information present using tf.newaxis.

# Add an extra dimension (to the end)
rank_3_tensor = rank_2_tensor[..., tf.newaxis]  # in Python "..." means "all dimensions prior to"
# print(rank_2_tensor, rank_3_tensor) # shape (2, 2), shape (2, 2, 1)

# You can achieve the same using tf.expand_dims().

tf.expand_dims(rank_2_tensor, axis=-1)  # "-1" means last axis

rank5_tensor = tf.ones([2, 3, 4, 5, 6])
#print(rank5_tensor)

# access the first 3 elements of each dimension
#print(rank5_tensor[:3, :3, :3, :3, :3])

# expand a rank 2 tensor to a rank 4 tensor

tensor_rank2 = tf.constant([[1,2],
                            [3,1]])
print(tensor_rank2, tensor_rank2.shape, tensor_rank2.ndim)

# adding a dimension to out tensor
tensor_rank2 = tf.expand_dims(tensor_rank2, axis=0)
print(tensor_rank2, tensor_rank2.shape, tensor_rank2.ndim)

tensor_rank2 = tf.expand_dims(tensor_rank2, axis=2)
print(tensor_rank2, tensor_rank2.shape, tensor_rank2.ndim)

tensor_rank2 = tf.expand_dims(tensor_rank2, axis=-1)
print(tensor_rank2, tensor_rank2.shape, tensor_rank2.ndim)




