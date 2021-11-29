/*
    -pointerii sunt variabile care stocheaza adresa altor variabile
    -declarare: 
                int a;//integer
                int *p;//pointer to integer
                
                char c;//character
                char &p0;//pointer to character

                p = &a;
                a = 8;
                *p = 8;


*/


#include <iostream>
#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;// &a = adress of a
    
    /*
    printf("%d\n",p);
    printf("%d\n",*p);//*p - value at adress pointed by p
    printf("%d\n",&a);//adresa lui a
    */

   /*
    printf("a = %d\n",a);
    *p = 12;//valoarea la carea p face referire o sa fie 12, adica a o sa ia valoarea 12
    //dereferening
    printf("a = %d\n",a);

    

    printf("adress of P is %d\n", p);
    printf("value at p is %d\n",*p);

    int b = 20;
    *p = b;// o sa modifice valoarea lui a in valoarea lui b
    //adresa spre care b pointeaza nu se schimba dar se schimba valoarea variabilei spre care pointeaza
    printf("a = %d\n",a);

    printf("adress of P is %d\n", p);
    printf("value at p is %d\n",*p);
*/


    //pointer arithmetic
    
            /*
            printf("size of integer is %d bytes\n",sizeof(int));
            printf("%d\n",p);//p is 2002
            printf("%d\n",p+1);//p is 2006//pentru ca este de tip int si ocupa 4 bytes de memorie
            printf("%d\n",p+2);//p is 2008
            */

    printf("adress p is %d\n", p);
    printf("value at address p is %d\n",*p);
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("address p+1 is %d\n",p+1);
    printf("value at address p+1 is %d\n",*(p+1));
                   
    
    
    
    
    
    
    return 0;
}






















