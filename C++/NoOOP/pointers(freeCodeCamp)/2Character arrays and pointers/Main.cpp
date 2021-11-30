#include <iostream>
#include <stdio.h>

using namespace std;

void print(char C[])//compilatorul il vede ca si char* C
{

    while(*C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");
    

}


int main()
{
    char C[20] = "hello";//string gets stored in the space for array
    //char *C = "hello";//string gets stored as compile time constant

     

    print(C);

    return 0;
}