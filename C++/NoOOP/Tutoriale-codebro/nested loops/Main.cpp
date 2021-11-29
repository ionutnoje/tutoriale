#include <iostream>
#include <string>

using namespace std;

int main()
{
    char symbol;
    int width;
    int hight;

    cout << "simbolul: " << endl;
    cin >> symbol;

    cout << "width: " << endl;
    cin >> width;

    cout << "hight: " << endl;
    cin >> hight;

    for(int i = 0; i < hight; i++)
    {
        for(int j = 0; j < width; j++)
        {
            cout << symbol << " ";
        }
        cout << endl;
    }

    return 0;
}