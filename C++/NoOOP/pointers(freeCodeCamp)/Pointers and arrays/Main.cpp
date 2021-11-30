#include <iostream>
#include <stdio.h>

using namespace std;



/*
            //teste de la mine
                int x = 5;
                int *p = &x;

                printf("p = %d\n",p);
                printf("&p= %d\n",&p);
                printf("&x = %d\n",&x);
                printf("*p= %d\n",*p);



*/


int main()
{
    int A[] = {2,4,5,8,1};
    printf("A= %d\n",A);//ne da adresa primului element din vector
    printf("&A[0]= %d\n",&A[0]);//ne da adresa primului element din vector
    printf("A[0]= %d\n",A[0]);//ne da valoarea primului element din vector
    printf("*A= %d\n\n\n",*A);//ne da valoarea primului element din vector


    for(int i = 0; i < 5; i++)
    {
        printf("address &A[i] = %d\n",&A[i]);
        printf("address A+i = %d\n",A+i);
        printf("value A[i] = %d\n",A[i]);
        printf("address *(A+i) = %d\n\n",*(A+i));
    }

    return 0;
}