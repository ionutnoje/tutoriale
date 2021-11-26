#include <iostream>
#include <string>

using namespace std;

class Human{
    private:
        int age;
        string name;




    // Persoana::Persoana(string n, string p, int v):nume(n),prenume(p),varsta(v)      
    //     {
    //         //nu a fost nimic alocat cu new
    //         //nume(n) este echivalent cu this->nume = n;


    //     }


    




    public:
        Human()
        {
            cout << "default constructor" << endl;
            age = 0;
            name = "noname";
        }

        Human(string name)
        {
            cout << "constructor with name as the parameter" << endl;
            age = 0;
            this->name = name;
        }

        Human(int age):age(age)
        {
            cout << "constructor with age as the parameter" << endl;
            //name = "noname";
            //this->age = age;
        }

        // Human(int age, string name)//constructor de tip java
        // {
        //     cout << "constructor with age and name as the parameter" << endl;
        //     this->age = age;
        //     this->name = name;
        // }

        Human(int a, string n):age(a),name(n)//constructor de tip c++
        {
            cout << "constructorul tip c++" << endl;
        }


        void display()
        {
            cout << "name: " << name << " age:" << age << endl;
        }

};


int main()
{
    Human human1;
    human1.display();

    Human human2("ionut");
    human2.display();

    Human human3(20);
    human3.display();

    Human human4(20, "noje");
    human4.display();


    return 0;
}