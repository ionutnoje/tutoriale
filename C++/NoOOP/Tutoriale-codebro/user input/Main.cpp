#include <iostream>
#include <string>//ca sa putem folosi getline();
using namespace std;

int main()
{

    string name;
    int age;

    cout << "numele tau este(un singur nume): " << endl;
    cin >> name;//cin o sa ne lase sa introducem date de la tastatura
    cout << "salutare " << name << endl;

    //cand folosim cin ca sa introducem mai multe cuvinte de la tastatura o sa asimileze textul pana la primul white-space
    //adica pana la primul space sau enter
    //ca sa introducem mai multe cuvinte si sa le salveze trebuie sa folosim altceva

    cout << "varsta ta este : " << endl;
    cin >> age;
    cout << "te cheama " << name << " si ai " << age << " de ani" << endl;

    getchar();//daca nu folosim asta nu ne lasa sa introducem de la tastatura numele iar(numai in acest caz)
                //elimina whitespace ul din cin ul trecut
                
    cout << "numele tau complet: " << endl;
    getline(cin, name);
    cout << "salut " << name << endl;


    return 0;
}