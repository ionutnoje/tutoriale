#include <iostream>
#include <string>

using namespace std;


class Human
{
    private:
        string name;
        int age;



    public:

        Human()
        {
            name = "noname";
            age = 0;
            cout << "constructor is called when an object of human is created" << endl;
        }

        void display()
        {
            cout << "name: " << name << " age: " << age << endl;
        }


};




int main()
{
    Human human;
    human.display();

    

    return 0;
}