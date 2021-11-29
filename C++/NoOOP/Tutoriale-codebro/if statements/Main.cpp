#include <iostream>
using namespace std;


int main()
{
    int variabila = 1;

    if(variabila == 5)//conditia se pune in ()
    {
        //se foloseste == pentru a testa daca o variabila este egala cu alta
        //daca volosim = simplu practic o sa ii dam variabilei variabila valoarea 5
        //ce cod se scrie aici se executa daca conditia este indeplinita
    
        cout << "variabila este egala cu 5" << endl;

    }
    else if(variabila <= 5)
    {
        cout << "variabila este <= ca 5" << endl;
    }
    else if(variabila >= 5)
    {
        cout << "variabila este >= ca 5" << endl;
    }
    else
    {

        cout << "variabila nu este egala cu 5" << endl;
    
        //in else se executa codul in cazul in care conditia nu este indeplinita
    }





    return 0;
}