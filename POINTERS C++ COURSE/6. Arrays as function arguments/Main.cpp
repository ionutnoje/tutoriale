#include <iostream>

int sumOfElements(int A1[], int size)
{
    //we can't figure out the size of the array inside this method, that's why we pass the size
    int total = 0;
    for(int i = 0; i < size; i++)
    {
        total = total + A1[i];
    }

    std::cout << "\nsumOfElements: " << std::endl;
    std::cout << "adress of array: " << &A1 << std::endl;
    std::cout << "sizeof(A): " << sizeof(A1) << std::endl;
    std::cout << "sizeof(A[0]: " << sizeof(A1[0]) << std::endl;

    return total;
}

int sumOfElements1(int A2[])
{
    int total = 0;
    for(int i = 0; i < sizeof(A2)/sizeof(A2[0]); i++)
    {
        total = total + A2[i];
    }

    
    std::cout << "\nsumOfElements: " << std::endl;
    std::cout << "adress of array: " << &A2 << std::endl;
    std::cout << "sizeof(A): " << sizeof(A2) << std::endl;
    std::cout << "sizeof(A[0]: " << sizeof(A2[0]) << std::endl;



    return total;
}

int sumOfElements2(int *A3)
{
    int total = 0;
    for(int i = 0; i < sizeof(A3)/sizeof(A3[0]); i++)
    {
        total = total + A3[i];
    }

    
    std::cout << "\nsumOfElements: " << std::endl;
    std::cout << "adress of array: " << &A3 << std::endl;
    std::cout << "sizeof(A): " << sizeof(A3) << std::endl;
    std::cout << "sizeof(A[0]: " << sizeof(A3[0]) << std::endl;

    return total;
}


void doubleElements(int *A, int size)
{
    for(int i = 0; i < size; i++)
    {
        A[i] += A[i];
    }
}

int main()
{
    int A[] = {1,2,3,4,5,6,7};

    std::cout << "Main: " << std::endl;
    std::cout << "adress of array: " << &A << std::endl;
    std::cout << "sizeof(A): " << sizeof(A) << std::endl;
    std::cout << "sizeof(A[0]: " << sizeof(A[0]) << std::endl;

    int total = sumOfElements(A, sizeof(A)/sizeof(A[0]));
    std::cout << "sum of elements is: " << total << std::endl;

    total = sumOfElements1(A); //we can pas A or &A[0]
    std::cout << "sum of elements1 is: " << total << std::endl;

    total = sumOfElements2(&A[0]);
    std::cout << "sum of elements2 is: " << total << std::endl;




    //calling the doubleElements method
    doubleElements(A, sizeof(A)/sizeof(A[0]));
    for(int i = 0; i < sizeof(A)/sizeof(A[0]); i++)
    {
        std::cout << "element" << i << "= " << A[i] << std::endl;
    }

    std::cout << "some prints: \n" << std::endl;
    std::cout << "&A: " << &A << std::endl;
    std::cout << "A: " << A << std::endl;
    std::cout << "&A[0]: " << &A[0] << std::endl;
    std::cout << "*A: " << *A << std::endl;
    


    return 0;
}






//sumOfElements(int array[]) = sumOfElements(int *array)   - they are the same
//when we call the function only the adress of the first element is passed, that's why we can't 
//calculate the size of the array in the sum methods

//in out case sumOfElements1 is the same as sumOfElements2

//total = sumOfElements1(A); here we can pass A or &A[0], they are both the same
//they both point to the first element of the array