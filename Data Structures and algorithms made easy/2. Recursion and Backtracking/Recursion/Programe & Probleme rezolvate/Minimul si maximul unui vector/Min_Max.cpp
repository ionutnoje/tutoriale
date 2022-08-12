#include <iostream>
using namespace std;



void MinVector(int Vector[],int iterator, int lungime_vector, int minim)
{
    if(iterator >= lungime_vector)
    {
        cout << "minimul vectorului este: " << minim << endl;
        
    }
    else 
    {
        if(Vector[iterator] <= minim)
        {
            minim = Vector[iterator];
        }
        MinVector(Vector, ++iterator, lungime_vector, minim);
    }
    

}


void MaxVector(int Vector[],int iterator, int lungime_vector, int maxim)
{
    if(iterator >= lungime_vector)
    {
        cout << "maximul vectorului este: " << maxim << endl;
        
    }
    else 
    {
        if(Vector[iterator] >= maxim)
        {
            maxim = Vector[iterator];
        }
        MaxVector(Vector, ++iterator, lungime_vector, maxim);
    }
    

}

int main()
{

    int vector[] = { 12, 1234, 45, 67, 1, 0, -34 };
    int lungime_vector = sizeof(vector) / sizeof(vector[0]);
    MinVector(vector, 0, lungime_vector, vector[0]);
    MaxVector(vector, 0, lungime_vector, vector[0]);
    
}