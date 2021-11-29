#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;

    cout << "enter a word to spell" << endl;

    cin >> word;

    for(int i = 0; i <= word.length(); i++)
    {
        cout << word.at(i) << "\t";
    }


    return 0;
}