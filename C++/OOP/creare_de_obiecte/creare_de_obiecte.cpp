#include <iostream>
#include <string>

using namespace std;

class HumanBeing
{
    public :
        void display()
        {
            cout << "hello i am a human being";
        }
        int nr = 5;
        string nume = "ionut";
        int getVariabila()
        {
            return variabila_privata;
        }

        string getMesaj()
        {
            return mesaj_privat;
        }

        void setVariabila(int valoare)
        {
            this->variabila_privata = valoare;
        }

        void setMesaj(string mesaj)
        {
            this->mesaj_privat = mesaj;
        }




    private: 
        int variabila_privata = 123;
        string mesaj_privat = "mesaj privat din clasa human";

            
};


int main()
{
    HumanBeing humanBeing; //primul mod de a initialica un obiect
    //este initializat static, si memoria este alocata in stiva

    HumanBeing *humanBeing2 = new HumanBeing(); //metoda 2 de a initializa un obiect
    //este initializat dinamic, si memoria este alocata in heap

    cout << "primul obiect:" << endl;

    humanBeing.display();

    cout << endl;

    cout << "al doilea obiect: " << endl;

    humanBeing2->display();
    cout << endl;
    


    humanBeing.nume = "noje";
    humanBeing2->nume = "ionut";

    cout << humanBeing.nume << endl;
    cout << humanBeing2->nume << endl;

    
    return 0;
}