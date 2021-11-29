#include <iostream>
#include <stdio.h>

using namespace std;

/*
    int * -> int
    char * -> char

    dereference -> acces/modify value

*/





int main()
{
    int a = 1025;
    int *p;

                //start of typecasting pointers

    //variatie 1
/*
    p = &a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("adress = %d, value = %d\n",p,*p);

    char *p0;
    //p0 = p;//eroare pentru ca p0 este pointer catre char iar p este pointer catre int
    
    p0 = (char*)p;
    printf("size of char is %d bytes\n",sizeof(char));
    printf("adress = %d, value = %d\n",p0,*p0);
    //o sa apara ca *p0 o sa aiba valoarea 1 pentru ca p avea 4 bytes care stoca bitii nr 1025
    //prin faptul ca am facut typecast in char inseamna ca o sa memoram numai primul bit din cei 4
    //cum se vede mai jos primul bit(00000001) are valoarea 1
    //pointerul dupa typecastare o sa ia primul bit pentru ca o adresa salvata de un pointer este adresa catre primul bit din valoarea pe care o stocam
    // 00000001 din binar inseamna 1

    //1025 = 00000000 00000000 00000100 00000001

*/
/*
    p = &a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("adress = %d, value = %d\n",p,*p);
    printf("adress = %d, value = %d\n",p+1,*(p+1));
    

    char *p0;
    //p0 = p;//eroare pentru ca p0 este pointer catre char iar p este pointer catre int
    
    p0 = (char*)p;
    printf("size of char is %d bytes\n",sizeof(char));
    printf("adress = %d, value = %d\n",p0,*p0);
    printf("adress = %d, value = %d\n",p0+1,*(p0+1));

    //p0+1 o sa ne duca la al doilea bit de la numarul 1025, care din binar are valoare 4

    //1025 = 00000000 00000000 00000100 00000001

*/

            //end of typecasting pointers

            //start of void pointer - generic pointer

    void *p0;
    p0 = p;
    //printf("address = %d, value = %d\n",p0,*p0);
    //da eroare la printarea *p0 pentru ca nu este legat de o valoare

    printf("adress = %d",p0);
    //printf("adress = %d",p0+1);//eroare


    return 0;
}