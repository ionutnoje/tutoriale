#include <iostream>
using namespace std;

int Vector[100],nr_ales;

void Afisare()
{
    for(int i = 1; i <= nr_ales; i++)
    {
        cout << Vector[i];
    }

    cout << endl;
}

bool Solutie(int k)
{
    if(k == nr_ales)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool Validare(int k)
{
    for(int i = 1; i <= k - 1; ++i)
    {
        if(Vector[i] == Vector[k])
        {
            return false;
        }
        
    }

    return true;
  
}


void PermutariBackTracking(int k)
{
    for(int i = 1; i <= nr_ales; i++)
    {
        Vector[k] = i;
        if(Validare(k) == true)
        {
            if(Solutie(k) == true)
            {
                Afisare();

            }
            else
            {
                PermutariBackTracking(k + 1);
            }
        }
    }
}



int main()
{   
    cout << "numarul: " << endl;
    cin >> nr_ales;
    PermutariBackTracking(1);


    return 0;
}