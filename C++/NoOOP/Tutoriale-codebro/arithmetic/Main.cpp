#include <iostream>
using namespace std;


int main()
{
    int incrementare = 0;

    //adunare: +
    //scadere: -
    //inmultire *
    //impartire /
    //restul impartirii a doua numere %(returneaza restul impartirii)

    cout << "adunare " << 5 + 2 << endl;
    cout << "scadere " << 5 - 1 << endl;
    cout << "inmultire " << 5 * 2 << endl;
    cout << "impartire " << 5/2 << endl;//returneaza partea intreaga a rezultatului
    cout << "impartire " << 5/2.0 << endl;//o sa apara 2,5
    cout << "impartire " << (double)5/2 << endl;//castam rezultatul in double sau float
    cout << "impartire cu rest " << 5 % 2 << endl;// restul impartirii lui 5 la 2


    //metode de a incrementa o val cu 1
    cout << incrementare << endl;
        incrementare++;
    cout << incrementare << endl;
        incrementare += 1;
    cout << incrementare << endl;
    //la fel se face si pentru a decrementa un nr...se foloseste --
        

    return 0;
}