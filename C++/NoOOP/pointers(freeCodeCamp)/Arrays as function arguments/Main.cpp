#include <iostream>
#include <stdio.h>

using namespace std;


/*      ITERATII

    ITERATIA 1:
        int SumOfElements(int A[],int size)
        {
            int i, sum = 0;
            for(i = 0;i < size;i++)
            {
                sum += A[i];
            }
            return sum;
        }


        int main()
        {   
            //arrays as function arguments

            int A[] = {1,2,3,4,5};
            int size = sizeof(A)/sizeof(int);
            int total = SumOfElements(A,size);
            printf("sum of elements = %d\n",total);

            return 0;
        }



    ITERATIA 2:
                    
            int SumOfElements(int A[])//de compiler este vadut ca int* A
                                    //int* A or int A[] it s the same  
            {
                int i, sum = 0;
                int size = sizeof(A)/sizeof(A[0]);//din moment ce are numai adresa de la primul element din vector, val size o sa fie 1
                                                    //de aceea este mai bine sa calculam marimea vectorului din main si sa o trimitem ca parametru la functie
                printf("sizeof(A)/sizeof(A[0]) = %d\n",sizeof(A)/sizeof(A[0]));
                printf("SOE - size of A = %d, size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
                for(i = 0; i < size;i++)
                {
                    sum += A[i];
                }
                return sum;
            }


            int main()
            {   
                //arrays as function arguments

                int A[] = {1,2,3,4,5};
                int total = SumOfElements(A);
                printf("sum of elements = %d\n",total);
                printf("SOE - size of A = %d, size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
                
                //nu returneaza ce trebuie pentru ca la functie este trimisa o adresa catre vector
                //acea adresa este catre primul element din vector,deci o sa aiba numai prima valoare
                //de aceea suma ar trebui sa fie 1
                //deci el vede numai adresa de la primul element din vector,nu tot vectorul

                
                return 0;
            }


*/


void Double(int *A,int size)
{
    for(int i = 0; i < size; i++)
    {
        A[i] = 2 * A[i];
    }
}


int main()
{   
    //arrays as function arguments

    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int i;
    Double(A,size);
    for(i = 0; i < size; i++)
    {
        printf("%d\t",A[i]);
    }
    
    return 0;
}