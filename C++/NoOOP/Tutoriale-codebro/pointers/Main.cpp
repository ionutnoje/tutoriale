#include <iostream>
#include <string>
using namespace std;


//pointers
// & address-of operator, return variable adress in memory
// * dereference operator



int main()
{
    /*
    string name = "ionut";
    int age = 20;

    cout << "adresa variabilei name in memorie este: " << &name << endl;
    cout << "adresa variabilei age in memorie este: " << &age << endl;
*/

    string name = "noje";
    int age = 100;


    string *pName = &name;
    int *pAge = &age;

    cout << pName << endl;//afiseaza adresa 
    cout << pAge << endl;//afiseaza adresa

    cout << *pName << endl;//afiseaza valoarea
    cout << *pAge << endl;//afiseaza valoarea











    return 0;
}