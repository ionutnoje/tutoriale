#include <iostream>
#include <string>

using namespace std;


//operatorul :: este folosit ca sa implementam 
//              body ul unei metode inafara clasei din care face parte




class HumanBeing
{
    public :
        string name;

        void introduce();
        

};

void HumanBeing :: introduce()
{
    cout << HumanBeing :: name << endl;
}

int main()
{
   
   HumanBeing humanBeing;
   humanBeing.name = "ionut";
   humanBeing.introduce();
    
    return 0;
}