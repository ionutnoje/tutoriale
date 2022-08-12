/*
verificați dacă matricea este în ordinea sortată cu recursivitate.
*/



#include <iostream>
using namespace std;

int VectorInOrdine(int Vector[],int nr_elemente)
{
    //numaratoare intr un vector incepe de la indexul 0....deci daca avem 5 elemente invector o sa avem index de la 0 la 4

    if(nr_elemente == 1) //daca ajungem la elementul 1 inseamna ca mai avem 2 elemente in vector....elementul cu indexul 1 si 0
    {
        cout << "vectorul este sortat:)" << endl;
    }
    else
    {
        if(Vector[nr_elemente - 1] > Vector[nr_elemente - 2])
        {
            cout << "elementul " << nr_elemente << " este mai mare decat elementul " << nr_elemente - 1  << endl;
            cout << "numarul de elemente ramase in vector sunt: " << nr_elemente << endl << endl;
            VectorInOrdine(Vector,nr_elemente - 1);
        }
        else
        {
            cout << "elementul " << nr_elemente << " nu este mai mare decat elementul " << nr_elemente - 1   << " deci nu este sortat "<< endl;
        }
    }
}


int main()
{
    int Vector_test[5] = {1,2,3,4,5};
    int nrelemente = sizeof(Vector_test)/sizeof(Vector_test[0]);

    VectorInOrdine(Vector_test,nrelemente);


    return 0;
}