import sklearn
from sklearn import datasets
from sklearn import svm
from sklearn import metrics
from sklearn.neighbors import KNeighborsClassifier

cancer = datasets.load_breast_cancer()

print(cancer.feature_names)
print(cancer.target_names)

X = cancer.data
y = cancer.target

x_train, x_test, y_train, y_test = sklearn.model_selection.train_test_split(X, y, test_size=0.2)

print(x_train, y_train)
classes = ['malignant' 'benign'] # pentru final cand o sa printam rezultatele

clf = svm.SVC(kernel="linear", C=2)  # https://scikit-learn.org/stable/modules/generated/sklearn.svm.SVC.html
# C=2 este soft marginul, o sa lase mai multe puncte apropiate de hyperbase sa nu fie bagate in seama


# comparatie cu k neighbors....svm este mai precis(cu mult)
#clf = KNeighborsClassifier(n_neighbors=13)

clf.fit(x_train, y_train)

y_pred = clf.predict(x_test)

acc = metrics.accuracy_score(y_test, y_pred)
print("accuracy: ", acc)

