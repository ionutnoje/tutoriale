#include <iostream>
#include <stdio.h>

using namespace std;

void Func(int *A)
{
    cout << "mesaj din functia pentru 1D array" << endl;
}

void Func1(int B[][3])
{
    cout << "mesaj din functia pentru 2D-array" << endl;
}

void Func2(int (*C)[2][2])
{
    cout << "mesaj din functia pentru 3D-array" << endl;
}




int main()
{

    int C[3][2][2] = {{{2,5},{7,9}},
                     {{3,4},{6,1}},
                     {{0,8},{11,13}}};

    printf("%d %d %d %d\n",C, *C, C[0], &C[0][0]);// o sa returneza aceeasi adresa pentru toate
    printf("%d",*(C[0][0]+1));//5     

    int A[2] = {1,2};
    Func(A);

    int B[2][3] = {{2,5,6},{5,6,7}};
    Func1(B);

    Func2(C);


    return 0;
}