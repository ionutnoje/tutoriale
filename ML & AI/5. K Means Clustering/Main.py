# la acest tip le ML nu a sa specificam atributele si rezultatele, calculatorul o sa isi dea seama care sunt care

# explicatii de la mine:
"""
algoritmul o sa imceapa prin a crea 2 centroizi, daca k este egal cu 2 random in graf(centorid este centrul unui grup de mai multe puncte)
o sa desenam o linie dreapta de la un centroid la altul
o sa desenam o linie perpendiculara pe prima, iar toate punctele de pe o parte a celei de a doua linie o sa faca parte din grupul primului centroid
iar punctele de pe cealalta parte o sa faca parte din grupul celuilalt centroid
dupa ce am facut separarea punctelor o sa cautam centrul fiecarul grup de puncte si o sa relocalizam centroizii in mijlocul acelor grupuri
mijlocul punctelor o sa se calculeze prin media aritmetica a tuturor x1 rilor fiecarul puncti dintr un grup , rezultatul o sa fie x1 le centroidului
apoi facem acelasi lucru si pentru x2, x3 si tot asa
si acum totul se repeta, dar nu se mai face random, se repeta din punctele actuale a centroizilor,
se deseneaza iar dreapta dintre primul centroid si al doilea, se traseaza linia perpendiculara primei drepte si se verifica distantele dintre puncte fata de cei
doi centroizi , se calculeaza iar mijloacele celor 2 grupuri de puncte si tot asa...


"""


import numpy as np
import sklearn
from sklearn.preprocessing import scale
from sklearn.datasets import load_digits
from sklearn.cluster import KMeans
from sklearn import metrics

digits = load_digits()
data = scale(digits.data) # in digits.data avem atributele necesare si le facem scale (adica o sa fie mapate intre valori de -1 si 1
y = digits.target
# k = (np.uniq(y)) # varianta dinamica
k = 10

samples, features = data.shape # o sa returneze un tuple in care se specifica cate randuri  si cate coloane sunt ex: (3,6)

def bench_k_means(estimator, name, data):
    estimator.fit(data)
    print('%-9s\t%i\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f'
          % (name, estimator.inertia_,
             metrics.homogeneity_score(y, estimator.labels_),
             metrics.completeness_score(y, estimator.labels_),
             metrics.v_measure_score(y, estimator.labels_),
             metrics.adjusted_rand_score(y, estimator.labels_),
             metrics.adjusted_mutual_info_score(y,  estimator.labels_),
             metrics.silhouette_score(data, estimator.labels_,
                                      metric='euclidean')))


# estimator.labels_ sunt rezultatele finale cu care compara rezultatele curente si pe baza carora o sa se antreneze
# acestea sunt generate automant de model


# aici cream clasificatorul kmans
clf = KMeans(n_clusters=k, init="random", n_init=10) # documentarie pentru valorile pe care le putem pune in paranteza ca sa marim precizia modelului
# n_clusters = The number of clusters to form as well as the number of centroids to generate
# init = Method for initialization: k-means++(selects initial cluster centers for k-mean clustering in a smart way
#                                   random(choose n_clusters observations(rows) at random from data for the initial centroids)
# n_init = Number of time the k-means algorithm will be run with different centroid seeds. The final results will be the best output of n_init consecutive runs in terms of inertia.

bench_k_means(clf, "1",data)
"""
def bench_k_means(kmeans, name, data, labels):
    Benchmark to evaluate the KMeans initialization methods.

    Parameters
    ----------
    kmeans : KMeans instance
        A :class:`~sklearn.cluster.KMeans` instance with the initialization
        already set.
    name : str
        Name given to the strategy. It will be used to show the results in a
        table.
    data : ndarray of shape (n_samples, n_features)
        The data to cluster.
    labels : ndarray of shape (n_samples,)
        The labels used to compute the clustering metrics which requires some
        supervision.
"""
