#include <iostream>
using namespace std;

int vector[100] ,numar_ales,p;

void Afis()
{
    //cu functia de afisare o sa afisam solutia

    for( int i = 1; i <= p; i++)
        cout<<vector[i]<<" ";
    cout<<endl;
}

bool Validare(int k){
    //ne intereseaza sa avem minim 2 elemente...trebuie ca elementele sa fie in oridine crescatoare
    if(k > 1)
        if(vector[k] <= vector[k-1]) 
            return false;
    return true;
}

bool Solutie(int k)
{
    //functia solutie ne ajuta sa ne dam seama daca am ajuns la capatul vectorului...daca avem 3 elemente sa stim sa ne oprim

    return k == p; //aici o sa ne oprim cand ajungem la maximul ales de noi din combinari(combinari de n luate cate p)
}

void back(int k){ //k reprezinta nivelul din stiva/vector la care ne aflam
    for(int i=1 ; i<=numar_ales ; ++i)// toate elementele din stiva/vector o sa vina din acest for...de la 1 pana la valoare introdusa de noi de la tastatura
    {
        vector[k]=i;   
        if( Validare(k) == true)
            if(Solutie(k) == true)
                Afis();
            else
                back(k+1); //aici o sa mergem pe nivelul urmator din stiva/vector,si o sa reluam procesul
    }
}
int main(){
    cin>>numar_ales >> p;//combinari de numar_ales luate cate p
    back(1);
    return 0;
}

