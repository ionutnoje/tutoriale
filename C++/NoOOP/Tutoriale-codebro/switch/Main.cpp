#include <iostream>
#include <string>
using namespace std;

int main()
{
    int luna;

    cout << "introduceti o luna din an(1-12): " << endl;
    cin >> luna;

    switch (luna)
    {
    case 1:
        cout << "luna introdusa este ianuarie" << endl;
        break;
    
    case 2:
        cout << "luna introdusa este februarie" << endl;
        break;

    case 3:
        cout << "luna introdusa este martie" << endl;
        break;

    case 4:
        cout << "luna introdusa este aprilie" << endl;
        break;

    case 5:
        cout << "luna introdusa este mai" << endl;
        break;

    case 6:
        cout << "luna introdusa este iunie" << endl;
        break;

    case 7:
        cout << "luna introdusa este iulie" << endl;
        break;

    case 8:
        cout << "luna introdusa este august" << endl;
        break;    

    case 9:
        cout << "luna introdusa este septembrie" << endl;
        break;

    case 10:
        cout << "luna introdusa este octombrie" << endl;
        break;

    case 11:
        cout << "luna introdusa este noiembrie" << endl;
        break;


    case 12:
        cout << "luna introdusa este decembrie" << endl;
        break;        


    default:
        break;
    }


    return 0;
}