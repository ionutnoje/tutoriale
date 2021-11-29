#include <iostream>
#include <string>

using namespace std;

void salutare(string name, int age)
{
    cout << "salut, "<< name <<" din functia salutare" << endl;
    cout << "te cheama " << name << " si ai: " << age << " ani" << endl;
}

int adunare(int a, int b)
{
    return a + b;
}

int main()
{   
    string name;
    int age;

    cout << "enter your name: " << endl;
    getline(cin,name);

    cout << "enter your age: " << endl;
    cin >> age;

    salutare(name,age);

    int nr1,nr2;
    cout << "nr1= " << endl;
    cin >> nr1;
    cout << "nr2= " << endl;
    cin >> nr2;
    cout << "\nrezultatu adunarii este: " << adunare(nr1,nr2);



    return 0;
}