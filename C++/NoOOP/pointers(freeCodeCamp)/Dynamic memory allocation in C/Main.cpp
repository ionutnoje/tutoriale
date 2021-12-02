#include <iostream>
#include <stdio.h>

using namespace std;

/*
    ALLOCATE BLOCK OF MEMORY
        malloc - void* malloc(size_t size) // size_t este unsigned int
                -malloc nu initializeaza valorile din vector pe 0
        calloc - void* calloc(size_t num, size_t size);
                -calloc initializeaza toate elementele din vector pe 0
        realloc - void* realloc(void* Ptr, size_t size);

    DEALLOCATE VLOCK OF MEMORY
        free  
*/



int main()
{

    //exemple de cod
/*
            //malloc
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n * sizeof(int));//dynamically allocated array

    for(int i = 0; i < n; i++)
    {
        A[i] =i + 1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d",A[i]);
    }

*/

/*
        //calloc
    
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *A = (int*)calloc(n, sizeof(int));//dynamically allocated array
    for(int i = 0; i < n; i++)
    {
        printf("%d",A[i]);
    }


    for(int i = 0; i < n; i++)
    {
        A[i] =i + 1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d",A[i]);
    }
*/

/*

        //free

    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n * sizeof(int));//dynamically allocated array

    for(int i = 0; i < n; i++)
    {
        A[i] =i + 1;
    }
    free(A);

    for(int i = 0; i < n; i++)
    {
        printf("%d",A[i]);
    }

        
*/


        //realloc
    
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n * sizeof(int));//dynamically allocated array

    for(int i = 0; i < n; i++)
    {
        A[i] =i + 1;
    }

    int *B = (int*)realloc(A,2*n*sizeof(int));
    printf("Prev block address = %d, new address = %d\n",A,B);

    for(int i = 0; i < 2*n; i++)
    {
        printf("%d ",B[i]);
    }
















    return 0;
}