#include <iostream>

void print_array(int array[], int size)
{ 
    for(int j = 0; j < size; j++)
    {
        array[j] = array[j]  + 10;
    }
    
    for(int i = 0; i < size; i++)
    {
        std::cout << "array[" << i  << "]= " << array[i]<< std::endl;
    }

    std::cout << "adresa array din functia print_array: " << array << std::endl;
}


void print_array1(int *array, int size)
{
    for(int j = 0; j < size; j++)
    {
        array[j] = array[j] + 2 ;
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << "array[" << i  << "]= " << array[i]<< std::endl;
    }

        std::cout << "adresa array din functia print_array1: " << array << std::endl;

}

int main()
{
    int array[] = {0,1,2,3,4};


    std::cout << "array: " << array << std::endl;       //gives as the adress of the first element in the array
    std::cout << "&array: " << &array << std::endl;     //gives as the adress of the first element in the array
    std::cout << "array[0]: " << array[0] << std::endl; //gives as the value of the first element in the array
    std::cout << "*array[0]: " << *array << std::endl;  //gives as the value of the first element in the array
    std::cout << "\n\n";

   

    std::cout << "MATRICEA INITIALA: " << std::endl;
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        std::cout << "array[" << i << "]= " << array[i]<< std::endl;
    }
    
    std::cout << "adresa array din functia main: " << &array << std::endl;

    std::cout << "\n\n";

    std::cout << "MATRICEA DIN FUNCTIA PRINT_ARRAY: " << std::endl;
    print_array(array, sizeof(array)/sizeof(array[0]));
    std::cout << "\n\n";

    std::cout << "VERIFICARE METRICE INITIALA DUPA APELAREA FUNCTIEI: " << std::endl;
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        std::cout << "array[" << i << "]= " << array[i]<< std::endl;
    }
    std::cout << "\n\n";

    std::cout << "MATRICEA DIN FUNCTIA PRINT_ARRAY1: " << std::endl;
    print_array1(array,sizeof(array)/sizeof(array[0]));
    std::cout << "\n\n";

    std::cout << "VERIFICARE METRICE INITIALA DUPA APELAREA FUNCTIEI: " << std::endl;
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        std::cout << "array[" << i << "]= " << array[i]<< std::endl;
    }
    


    std::cout << "Afisare adrese si valori pentru fiecare element: " << std::endl;

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        std::cout << "adress of array["<< i << "]= " << &array[i] << std::endl;
        std::cout << "value of array["<< i << "]= " << (array[i]) << std::endl;
    }
    

    return 0;
}

/**
 concluzii:
    la orice functie un vector este trimis ca si referinta:))
    
*/