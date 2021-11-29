#include <iostream>
#include <stdio.h>

using namespace std;

/*
void Increment(int a)
{
    a = a + 1;
    printf("address of variable a in increment = %d\n",&a);
}


int main()
{
    int a;
    a = 10;
    Increment(a);
    //printf("a = %d",a);//o sa raman 10 pentru ca a este o variabila locala in main,
    //deci numai valoare este transmisa la functie

    //a ul din main si a ul din functia increment au adrese diferite 
    //de aceea trebuie sa folosim referintele
    
    //daca nu declaram o variabila in main aceea o sa fie globala
    //variabilele din main care sunt locale au memoria alocata in stack
    
    //

    printf("address of variable a in main = %d\n",&a);


    return 0;
}
*/




void Increment(int *p)
{
    *p = (*p) + 1;
}

int main()
{
    //pointers as function arguments- call by reference

    int a;
    a = 10;
    Increment(&a);//call by reference
    printf("a = %d",a);



    return 0;
}