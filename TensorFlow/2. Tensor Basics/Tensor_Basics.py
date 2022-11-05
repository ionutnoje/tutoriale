import os
import tensorflow as tf

os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2' # ca sa nu ne mai apara scrisul rosu de la tensor in consola

physical_devices = tf.config.list_physical_devices('GPU')
tf.config.experimental.set_memory_growth(physical_devices[0], True)



#un tensor este o generalizare pentru vectori, matrici, etc.
# one dimensional tensor = vector
# 2 dimensional tensor = matrix

####################################################################################################
# INITIALIZATION OF TENSORS
x = tf.constant(4) # un tensor cu valoarea 4, fara shape, are tip int32
print(x)

y = tf.constant(4, shape=(1,1), dtype=tf.float32) # am creat un tensor cu val 4, shape de matrice de 1 pe 1 si tipul datei de float32
print(y)

#acum o sa cream o matrice
matrice = tf.constant([[1,2,3],[4,5,6]])
print(matrice)

#un alt fel de initializare asemanator cu cel din numpy
matrice1 = tf.ones((3,3), dtype=tf.float32)
print(matrice1)

matrice0 = tf.zeros((3,3))
print(matrice0)

identity = tf.eye(3) # I for the identity matrix (eye) o matrice de 3x3 cu 1 pe diagonala principala
print(identity)

# o matrice cu valori random in care folosim mean si standard deviation
        # mean este media aritmetica a tururor elementelor din matrice
        # sandard deviation: În statistică și teoria probabilităților, abaterea standard a unei variabile aleatoare reprezintă o măsură a dispersiei valorilor acesteia în jurul uneia considerate mijlocii. Se mai numește și abatere medie pătratică, după propunerea lui Isidore Didion.

rand_matrix = tf.random.normal((3,3), mean=0, stddev=1)
print(rand_matrix)


rand_matrix1 = tf.random.uniform((1,3), minval=0, maxval=1)
print(rand_matrix1)


vector_range = tf.range(9)
print(vector_range)

# ca sa transformam un vector dintr un tip in altul o sa folosim cast

cast_vector = tf.cast(vector_range, dtype=tf.float32)
print(cast_vector)




####################################################################################################
# MATHEMATICAL OPERATIONS

x = tf.constant([1,2,3,4])
y = tf. constant([4,5,6,7])

z = tf.add(x,y)   # z = x+y
print(z)

z = tf.subtract(x,y)   # z = x-y
print(z)

z = tf.divide(x,y)  # z = x/y
print(z)

z = tf.multiply(x,y) # z = x * y
print(z)

#dutproduct: x1 * y1 + x2 * y2 + ....

z = tf.tensordot(x,y, axes=1) # axes 1 ca sa faca pe verticala
print(z)

z = tf.reduce_sum(x*y, axis=0) # ca sa faca pe verticala
print(z)


#matrix multiplication

x = tf.random.normal((2,3))
y = tf.random.normal((3,4))

z = tf.matmul(x,y) # z = x @ y
print(z)



####################################################################################################
# INDEXING OF A TENSOR

x = tf.constant([1,2,3,4,5,5,3,2])
print(x[:]) # print(x)

print(x[2:])    #o sa printeze toate elementele incepand de la indexul 2, indexul incepe de la 0
print(x[::2])   # printeaza primul element, sare peste urmatrorul, printeaza, sare etc
print(x[::-1]) #printeaza in ordine inversa


# vrem sa luam elemente specifice, prin indexi , sa zicem elementul cu indexul 3 si indexul 6 din vector:
indices = tf.constant([3,6])
x_ind = tf.gather(x,indices)
print(x_ind)

# acum pentru matrice:

x1 = tf.constant([[1,2],
                [4,5],
                [7,9]])

#printuri usoare
print(x1[0,:]) # printam prima linie din matrice
print(x1[0:2,:]) # printam primele 2 linii


####################################################################################################
# RESHAPING A TENSOR

x = tf.range(9) # un vector cu elemente de la 0 la 8
print(x)
# vrem sa transformam x ul intr o matrice de 3x3

x = tf.reshape(x, (3,3))
print(x)

#transpusa

x = tf.transpose(x, perm=[1,0]) # printam matricea transpusa, perm 1,0 adica inversam axele
print(x)


















