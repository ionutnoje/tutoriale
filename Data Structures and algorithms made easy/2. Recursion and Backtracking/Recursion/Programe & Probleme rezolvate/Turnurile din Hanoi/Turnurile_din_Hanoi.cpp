/*
                              Turnurile din Hanoi 

        Soluție: Turnurile din Hanoi este un puzzle matematic. Este format din trei
tije și un număr de discuri de diferite dimensiuni care pot aluneca
pe orice tijă. Puzzle-ul începe cu discurile de pe o tijă în ordine crescătoare a
marimii, cea mai mică în partea de sus, făcând astfel o formă conică. Obiectivul
puzzle-ul este să mutați întregul teanc într-o altă tijă, respectând următoarele reguli:
• Numai un disc poate fi mutat o dată.
• Fiecare mișcare constă în luarea discului superior de pe una dintre tije și
alunecând-o pe o altă tijă, deasupra celorlalte discuri care s-ar putea deja
fi prezente pe acea tijă.
• Niciun disc nu poate fi plasat deasupra unui disc mai mic.

        Algoritm:
• Mutați discurile de sus n – 1 de la Sursă la Turnul Auxiliar, 
• Mutați discurile n disc de la Turnul Sursă la Turnul Destinație, 
• Mutați cele n – 1 discuri din Turnul auxiliar la turnul de destinație.
• Transferarea celor n – 1 discuri de sus de la Sursă la Turnul Auxiliar poate din nou
fi considerată ca o problemă nouă și poate fi rezolvată în același timp
manieră. Odată ce rezolvăm Towers of Hanoi cu trei discuri, putem
rezolvați-l cu orice număr de discuri cu algoritmul de mai sus

*/


#include <iostream>
using namespace std;

void TowersOfHanoi(int n, char frompeg, char topeg, char auxpeg) {
/*daca avem un singur disc facem miscarea apoi dam return */
    if(n==1) 
    {
        cout << "mutati discul 1 de pe " << frompeg << " pe " << topeg << endl;
        return;
    }
/* Move top n-1 disks from A to B, using C as auxiliary */
    TowersOfHanoi(n-1, frompeg, auxpeg, topeg);
/* Move remaining disks from A to C*/
    cout << "mutati discul "<< n << " de pe " << frompeg << " pe " << topeg << endl;
/* Move n-1 disks from B to C using A as auxiliary */
    TowersOfHanoi(n-1, auxpeg, topeg, frompeg);
}

int main()
{

    int nr_discuri;
    char start,final,auxiliar;
    start = 'A';
    final = 'B';
    auxiliar = 'C';

    cout << "introduceti numarul de discuri cu care sa jucati: " << endl;
    cin >> nr_discuri;

    TowersOfHanoi(nr_discuri, start, final, auxiliar);




    return 0;
}