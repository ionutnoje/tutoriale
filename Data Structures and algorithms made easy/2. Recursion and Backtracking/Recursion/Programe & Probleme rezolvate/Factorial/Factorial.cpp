#include <iostream>

using namespace std;

int factorial(int numar)
{
    //cazul de baza este cand numarul nostru este ori 0 ori 1...in acel moment se sfarseste executia
    if(numar <= 1)
    {
        return 1;
    }
    else
    {
        //in acest caz o sa inmultim numarul nostru actual cu urmatorul numar mai mic...pana la cazul de baza
        //adica daca avem numarul 5 ales...aici o sa faca 5 * 4
        return numar * factorial(numar - 1);
    }
}

int main()
{
    int numar;

    cout << "factorialul pe care doriti sa il calculati este: " << endl;
    cin >> numar;

    cout << "rezultatul este: " << factorial(numar);

    return 0;
}



/*
int factorial(int numar)
{
    
    if(numar <= 1)
    {
        return 1;
    }
    else
    {
        return numar * factorial(numar - 1);
    }
}


RULARE MANUALA:

alegem numarul 5. 

step 1: (5 <= 1) - nu
        return 5 * factorial(4)

step 2: (4 <= 1) - nu
        return 4 * factorial(3)

step 3: (3 <= 1) - nu
        return 3 * factorial(2)

step 4: (2 <= 1) - nu
        return 2 * factorial(1)

step 5: (1 <= 1) - da
de aici revenim in sus si facem inmultirile

1 * 2 = 2
2 * 3 = 6 
6 * 4 = 24
24 * 5 = 120

rezultat final:)




*/