#include <iostream>
#include <stdio.h>

using namespace std;



/*
    Application's memory:

    HEAP- 

    STACK-la inceput de program se aloca memorie pentru metoda main
         -in stack se salveaza variabilele din main 

         -cand din main apelam functia Square se aloca memorie pentru functie
         -se aloca memorie si pentru 
         -cat tipm functia se executa restul programului este oprit
         -dupa ce functia isi termina treaba este stearsa din stack

    STATIC/GLOBAL- in global se afla variabila toatl

    CODE(text)-
*/











/*//variatia 1

int total;

int Square(int x)
{
    return x*x;
}

int SquareOfSum(int x,int y)
{
    int z = Square(x+y);
    return z;
}


int main()
{
    int a = 4,b = 8;
    total = SquareOfSum(a,b);
    printf("output: %d", total);

    return 0;
}

*/





int main()
{                        //varianta c
/*
    int a;//goes on stack
    int *p;
    p = (int *)malloc(sizeof(int));

    *p = 10;
    free(p);

    p = (int*)malloc(sizeof(int));
    *p = 20;
    free(p);

    p = (int*)malloc(10 * sizeof(int));
    //obiectul p este salvat in stack, dar memoria necesara pentru vector este salvata in heap
*/


            //varianta c++

    int a;
    int *p;
    p = new int;
    *p = 10;
    delete p;
    p = new int[20];
    delete[] p;        


    return 0;
}