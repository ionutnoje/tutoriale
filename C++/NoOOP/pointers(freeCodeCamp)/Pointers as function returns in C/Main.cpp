#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;
/*

*/

/*       //iteratia 1

int Add(int a, int b)// called function
{
    printf("adress of a in Add: %d\n",&a);
    int c = a+b;
    return c;
}

int Add1(int* a, int* b)// called function
{
    //a and b are poointer to integers
    printf("adress of a in Add1: %d\n",&a);
    printf("value in a of Add1 (adress of a of main) = %d\n",a);
    printf("value at adress stored in a of Add1 = %d\n",*a);
    int c = *a + *b;
    return c;
}




int main() //calling function
{
    int a = 2, b = 4;
    
    printf("call by value\n\n");

    printf("adress of a in main: %d\n",&a);
    
    //call by value
    
    int z = Add(a,b);// value in a of main is copied to a of Add
                    //  value in b of main is copied to b of Add

    printf("sum= %d\n",z);

    //x,y,z sunt variabile locale pentru main
    //a,b,c sunt variabila locale pentru metoda Add

    printf("\n\n");

    printf("call by reference\n\n");
    //call by reference
    int c = Add1(&a,&b);
    printf("sum = %d", c);

    return 0;
}

*/







        //iteratia 2

void PrintHelloWorld()
{
    printf("hello world\n");
}

int* Add(int *a, int* b)    // called function - returns pointer to integer
{
    int c = (*a) + (*b);
    return &c;
    //nu o sa functioneze pentru ca dupa ce functia ia sfarsit si valoarea sumei o sa fie stearsa
    //deci o sa primim o eroare
    
}

int *Add1(int *a,int *b)
{
    int* c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    cout << "c: " << c << endl;
    cout << "&c: " << &c << endl;
    cout << "*c: " << *c << endl;
    return c;
}

int main()// calling function
{
    int a = 2, b = 4;
    int* ptr = Add1(&a,&b);//a and b are integers local to main
    PrintHelloWorld();
    printf("sum = %d\n",*ptr);

    return 0;
}



