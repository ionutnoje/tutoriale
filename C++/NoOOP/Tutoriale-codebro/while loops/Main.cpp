#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    //while loops
/*
    string name;

    while(name.empty())//cat timp conditia din () este true o sa execute codul din {}
    {
        cout << "please enter your name " << endl;
        getline(cin ,name);
    }

    cout << "salutare, " << name << endl;
*/


    //do while loop
    //la do while codul dintre {} se executa cel putin o data chiar daca conditia nu este indeplinita, contrar while loopului normal
/*
    string answer;

    do
    {
        cout << "you are playing the game" << endl;
        cout << "press q to quit " << endl;
        getline(cin,answer);
        cout << "**************" << endl;
    }
    while(answer.at(0) != 'q' && answer.at(0) != 'Q');

    cout << "ai iesit din joc" << endl;
*/

    return 0;
}