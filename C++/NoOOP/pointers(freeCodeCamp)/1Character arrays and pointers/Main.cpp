#include <iostream>
#include <stdio.h>

using namespace std;

/*
    string: group of characters

    1)how to store strings
        size of array >= nr of characters in string + 1
        "john" size >=5, because on the last place in the array is the null character

    2)arrays and pointers are different types that are used in similar manner

    3)arrays are always passed to functions by reference


*/

void print(char C[])//compilatorul il vede ca si char* C
{
    int i = 0;
    while(C[i] != '\0')
    {
        printf("%c", C[i]);
        i++;
    }
    printf("\n");


    /*
    while(*C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");
    */

}


int main()
{
    char C[20] = "hello";
    print(C);

    return 0;
}