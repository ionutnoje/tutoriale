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
    HumanBeing humanBeing;
    humanBeing.display();
    cout << endl;
    cout << "numele: " << humanBeing.nume << endl;
    cout << "varsta: " <<humanBeing.nr << endl;
    cout << "mesaj privat din clasa human(luat cu getter) este: " << humanBeing.getMesaj() << endl;
    cout << "variabila privata din clasa human(luat cu getter) este: " << humanBeing.getVariabila() << endl;

    humanBeing.setVariabila(6);
    cout << "variabila privata din clasa human dupa setare cu setter este: " << humanBeing.getVariabila() << endl;

    humanBeing.setMesaj("ionut este cel mai tare din parcare");
    cout << "mesajul privat din clasa human dupa setarea cu setter este: " << humanBeing.getMesaj() << endl;

    
    return 0;
}