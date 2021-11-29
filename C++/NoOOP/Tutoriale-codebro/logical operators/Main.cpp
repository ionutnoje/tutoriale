#include <iostream>
#include <string>

using namespace std;

int main()
{
        //  && AND logical operator(si logic,daca doua sau mai multe variabile indeplinesc aceeasi conditie retrneaza trure altfel false)
        //  || OR logical operator(sau logic,daca cal putin una din mai multe variabile indeplineste o conditie returneaza true altfel false)
        //  ! NOT logical operator(daca punem ! inainte de o functie de tip boolean o sa returneza opusul)


/*
    //ex pentru &&

    double temp;

    cout << "enter your temperature: " << endl;
    cin >> temp;

    if(temp >= 35 && temp <= 37.5)
    {
        cout << "your temperature is normal" << endl;
    }
    else
    {
        cout << "go to the hospital" << endl;
    }


*/

/*

    string cough;

    cout << "do you have a cough (yes/no): " << endl;
    cin >> cough;

    if(cough.at(0) == 'y' || cough.at(0) == 'Y')
    {
        cout << "you are sick" << endl;
    }
    else{
        cout << "you are probably fine" << endl;
    }


*/



    string name;

    cout << "enter your name: " << endl;
    getline(cin,name);


    if(name.empty())
    {
        cout << "you did not enter your name" << endl;
    }
    else if(!name.empty())
    {
        cout << "salutare " << name << endl;
    }
    else
    {
        cout << "eroare" << endl;
    }













    return 0;
}