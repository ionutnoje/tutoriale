#include <iostream>
using namespace std;

int vector[100] ,numar_ales;

void Afis()
{
    //cu functia de afisare o sa afisam solutia

    for( int i = 1; i <= numar_ales; i++)
        cout<<vector[i]<<" ";
    cout<<endl;
}

bool Validare(int k){
    //in aceasta functie o sa comparam valoare curenta cu toate numerele anterioare din stiva...in caz ca gasim duplicate o sa returnam false
    //in caz contrar o sa returnam true...pentru ca ne trebuie permutarile...deci toate elementele trebuie sa fie diferite
   
   //cu acest for o sa facem verificarile...comparam elementul curent cu toate celelalte elemente din stiva/vector
   for(int i = 1; i <= k-1; ++i)//mergem pana la k-1 pentru ca nu vrem sa comparam valoarea curenta cu ea insasi
        if(vector[k] == vector[i])// 
            return false;
    return true;
}

bool Solutie(int k)
{
    //functia solutie ne ajuta sa ne dam seama daca am ajuns la capatul vectorului...daca avem 3 elemente sa stim sa ne oprim

    return k == numar_ales;
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
    cin>>numar_ales;
    back(1);
    return 0;
}


/*
//EXPLICATII SUPLIMENTARE
alegem un numar de la tastatura
toate numerele pana la numarul ales inclusiv o sa intre in program

incepem rularea backtrackingului prin apelarea functiei backtracking cu valoare 1...adica cu prima pozitie din vector/stiva
din for o sa se atribuie valoarea 1 pe prima pozitie urmand sa se faca verificarile...cum nu este o solutie........
solutie este numai cand este si validat si si toate cele n spatii din vector sunt ocupate...in acest caz o singura pozitie este ocupata...
deci se continua executia prin apelarea backtracking(k+1) adica 2...pozitia urmatoare din vector...prin urmare
for ul principal incepe de la 1...[(mereu cand facem backtracking(k+1),forul principal o sa inceapa de la 1, cand revenim la backtracking(k-1)
 adica revenim la o pozitie mai jos in vector, atunci se continua de la i ul de la care am plecat cand am apelat backtracking(k+1), si se continua din punctul restpectiv)]
incontinuare se fac verificarile adica validarea si solutia....iar dupa ce avem prima solutie, o printam.In continuare revenim la backtrackingul cu o pozitie mai jos
adica k-1, si se atribuie valoarea urmatoare din for, depinzand aici la ce valoare al lui i am ramas...si tot asa


*/