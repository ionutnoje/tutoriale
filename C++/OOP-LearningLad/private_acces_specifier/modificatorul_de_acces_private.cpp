#include <iostream>
#include <string>

using namespace std;

class Human
{
    private: 
        int age;
        

    public:
        int getAge()
        {
            return age;
        }

        void setAge(int age)
        {
            this->age = age;
        }

};


int main()
{
    Human noje;
    noje.setAge(20);
    cout << noje.getAge() << endl;
   
    return 0;
}