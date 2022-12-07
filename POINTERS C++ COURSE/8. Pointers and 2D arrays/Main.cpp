#include <iostream>
#include <stdlib.h>

void enter_values(int **matrix, int nr_of_lines, int nr_of_columns)
{
    for(int j = 0; j < nr_of_lines; j++)
    {
        for(int k = 0; k < nr_of_columns; k++)
        {
            std::cin >> matrix[j][k];
        }
    }
}


void print_elements(int **matrix, int nr_of_lines, int nr_of_columns)
{
    std::cout << "\n\n";
    for(int j = 0; j < nr_of_lines; j++)
    {
        for(int k = 0; k < nr_of_columns; k++)
        {
            std::cout << matrix[j][k] << "\t";
            
        }
        std::cout << std::endl;
    }
}


void print_addresses(int **matrix, int nr_of_lines, int nr_of_columns)
{
    
    std::cout << "\n\n";
    for(int j = 0; j < nr_of_lines; j++)
    {
        for(int k = 0; k < nr_of_columns; k++)
        {
            std::cout << &matrix[j][k] << "\t";
            
        }
        std::cout << std::endl;
    }

}


void print_all_addresses(int **matrix, int nr_of_lines, int nr_of_columns)
{
    std::cout << "\t\t" << matrix << "-->" << *matrix << "  " << *(matrix) + 1 << "  " << *(matrix) + 2 << std::endl;
    std::cout << &matrix << "------>\t" << matrix + 1 << "-->" << *(matrix + 1) << "  " << *(matrix + 1) + 1 << "  " << *(matrix + 1) + 2 << std::endl;
    std::cout << "\t\t" << matrix + 2 << "-->" << *(matrix + 2) << "  " << *(matrix + 2) + 1 << "  " << *(matrix + 2) + 2 << std::endl;
    
}


int main()
{
    int nr_of_lines,nr_of_columns;
    int **matrix;   //pointer that points to the matrix

    std::cin >> nr_of_lines;
    std::cin >> nr_of_columns;


    matrix = new int* [nr_of_lines];
    
    for(int i = 0; i < nr_of_lines; i++)
    {
        matrix[i] = new int[nr_of_columns];
    }

    enter_values(matrix, nr_of_lines, nr_of_columns);
    //print_elements(matrix, nr_of_lines, nr_of_columns);
    //print_addresses(matrix, nr_of_lines, nr_of_columns);

    
    system("CLS");
    print_all_addresses(matrix, nr_of_lines, nr_of_columns);

    

    


    





    std::cout << "\n\n" << std::endl;
    std::cout << "adress of main pointer: " << &matrix << std::endl;
    std::cout << "adress of pointer to row 1: " << matrix << std::endl;
    std::cout << "adress of first element: " << *matrix << std::endl;          //adress of the first element in the matrix
    std::cout << *matrix + 1 << std::endl;      //adress of the second element in the matrix
    std::cout << **matrix << std::endl;         //value of the first element in the matrix
    std::cout << **(matrix + 1) << std::endl;   //value of the first element in row 2
    std::cout << **(matrix + 2) << std::endl;   //value of the first element in row 3
    std::cout << **(matrix+1) + 1 << std::endl; //value of the second element in row 2
    std::cout << **(matrix + 2) + 2 << std::endl;// value of the last element in row 3

    //**(matrix + 2) --> we are in the 3rd row
    //**(matrix + 2) + 2 --> we are in the 3rd row , 3rd collumn


    

    return 0;
}