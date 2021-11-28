#include <iostream>
using namespace std;


int main()
{
    int x = 69420;//variabila x o sa retina un numar intreg
    double y = 5.2052425212;//variabila y o sa retina un nr cu zecimale, pana la 15 zecimale
    float f = 6.421341;//variabila f o sa retina un nr cu zecimale, panal la 7 zecimale
    char c = 'd';//variabila c o sa retina un singur caracter care se scrie intre ' '
    string p = "se poate scrie o propozitie";//variabila p o sa retina mai multe caractere,o propozitie, se scrie inter " "
    bool b = true;//variabila b o sa retina o val de true sau false

    cout << "variabila de tip int este egala cu " << x << endl;
    cout << "variabila de tip double este egala cu " << y << endl;
    cout << "variabila de tip float este egala cu " << f << endl;
    cout << "variabila de tip char este egala cu " << c << endl;
    cout << "variabila de tip string este egala cu " << p << endl;
    cout << "variabila de tip boolean este egala cu " << b << endl;

    //la afisare de val booleene o sa apara 1 pt true si 0 pentru false


    //putem sa schimbam valoarea variabilelor mai jos in program
    //ex:
    x = 12423;//nu se mai pune int inainte de x pentru ca am declarat o mai sus ca fiind de tip int
    cout << "valoarea lui x este acum " << x << endl;

    return 0;
}