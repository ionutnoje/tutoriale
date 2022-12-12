#include <iostream>


int **create(int nr_of_lines, int nr_of_columns, void (*afisare)(int**, int, int))
{
    int **matrix; //nu trebuie setat static pentru ca din functiile din afara mainului memoria este alocata pe heap
                    //iar din heap memoria o stergem noi manual
    matrix = new int* [nr_of_lines];

    for(int i = 0; i < nr_of_lines; i++)
    {
        matrix[i] = new int [nr_of_columns];
    }

    

    for(int j = 0; j < nr_of_lines; j++)
    {
        for(int k = 0; k < nr_of_columns; k++)
        {
            std::cout << "M[" << j << "][" << k <<  "]= ";
            std::cin >> matrix[j][k];
        }
    }

    std::cout << "print din functia de creare: " << std::endl;
    afisare(matrix, nr_of_lines, nr_of_columns);


    return matrix;
}

void print_matrix(int **matrice, int nr_of_lines, int nr_of_columns)
{
    int a = 5;

    for(int j = 0; j < nr_of_lines; j++)
    {
        for(int k = 0; k < nr_of_columns; k++)
        {
            std::cout << "   M[" << j << "][" << k <<  "]= " << matrice[j][k];
        }
        std:: cout << "\n";
    }

}


int main()
{
    int nr_of_lines,nr_of_columns;
    std::cout << "nr_of_lines: ";
    std::cin >> nr_of_lines;

    std::cout << "nr_of_columns: ";
    std::cin >> nr_of_columns;

    int **matrice = create(nr_of_lines,nr_of_columns, print_matrix);
    std::cout << "afisare din main: " << std::endl;

    for(int j = 0; j < nr_of_lines; j++)
    {
        for(int k = 0; k < nr_of_columns; k++)
        {
            std::cout << "   M[" << j << "][" << k <<  "]= " << matrice[j][k];
        }
        std:: cout << "\n";
    }

    for (int w = 0; w < nr_of_lines; w++)
        delete[] matrice[w];
    delete[] matrice;

    for(int j = 0; j < nr_of_lines; j++)
    {
        for(int k = 0; k < nr_of_columns; k++)
        {
            std::cout << "   M[" << j << "][" << k <<  "]= " << matrice[j][k];
        }
        std:: cout << "\n";
    }

    return 0;
}