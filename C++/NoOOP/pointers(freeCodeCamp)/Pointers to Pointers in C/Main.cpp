#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    //pointer to pointer
        
        //din troria din video
        int x = 5;
        int *p = &x;
        *p = 6;
        int **q = &p;
        int ***r = &q;

        printf("%d\n",*p);//6
        printf("%d\n",*q);//adresa pentru ca este dublu pointer...deci cu un * o sa arate
                          // adresa iar cu doua * o sa arate valoarea stocata de pointerul
                          //la pointeaza, si la urma lui primul pointer are val variabilei
                          //catre care pointeaza
        printf("%d\n",*(*q));//6

        printf("%d\n",*(*r));//adresa pui p
        printf("%d\n",*(*(*r)));//6


        ***r = 10;//***r inseamna ca prima data mergem la adresa pointerului q(cu primul *),
                  //cu al doilea * o sa ajungem la adresa pointerului p, si cu ultimul * ajungem
                  // la variabiala x, si totodata la valoarea ei
        printf("x = %d\n",x);
        

        **q = *p + 2;//12
        printf("x = %d\n",x);
        //**q = *(*q)
        //*q = p
        //**q = x

    return 0;
}