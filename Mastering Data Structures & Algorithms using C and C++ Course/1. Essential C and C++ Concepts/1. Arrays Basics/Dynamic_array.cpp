#include <iostream>

using namespace std;



void printArray(int* array, int nrOfElements)
{
    cout << array << endl; //prints the adress of this array
    for (int j = 0; j < nrOfElements; j++) {
        cout << "A[" << j << "]= " << array[j] << endl;
    }
}



int main()
{
    int numberOfElements;

    cout << "number of elements: " << endl;
    cin >> numberOfElements;

    //create the dynamic array
    int* array = new int[numberOfElements];

    //chech if array is null
    if (array == nullptr)
    {
        cout << "the array was not created / has no space allocated" << endl;
    }
    else
    {
        //assign all elements
        for (int i = 0; i < numberOfElements; i++)
        {
            cout << "array[" << i << "]= ";
            cin >> array[i];
        }
    }

    //print all elements
    for (int j = 0; j < numberOfElements; j++) {
        cout << "A[" << j << "]= " << array[j] << endl;
    }

    
    printArray(array, numberOfElements);
    delete[] array;




    return 0;
}