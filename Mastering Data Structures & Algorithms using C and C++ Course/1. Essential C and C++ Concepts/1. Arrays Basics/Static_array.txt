#include <iostream>

using namespace std;


int main()
{
    //create a static array
    int A[5] = {1,2,3,4,5};

    //print the values using a normal for loop
    for(int i = 0; i < sizeof(A)/sizeof(A[0]); i++){
        cout << "A[" << i << "]= " << A[i] << endl;
    }

    //print the values using a foreach loop
    for(int i: A)
    {
        cout << i << endl;
    }

    return 0;
}