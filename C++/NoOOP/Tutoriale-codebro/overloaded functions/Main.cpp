#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void bakePizza(string bread) {

    cout << "Here is your ";
    cout << bread << " ";
    cout << "pizza";
}

void bakePizza(string bread, string sauce) {

    cout << "Here is your ";
    cout << bread << " ";
    cout << sauce << " ";
    cout << "pizza";
}

void bakePizza(string bread, string sauce, string cheese) {

    cout << "Here is your ";
    cout << bread << " ";
    cout << sauce << " ";
    cout << cheese << " ";
    cout << "pizza";
}

void bakePizza(string bread,string sauce,string cheese,string topping) {

    cout << "Here is your ";
    cout << bread << " ";
    cout << sauce << " ";
    cout << cheese << " ";
    cout << topping << " ";
    cout << "pizza";
}

int main()
{
    string bread = "thicc crust";
    string sauce = "bbq";
    string cheese = "mozzerella";
    string topping = "chicken";

    bakePizza(bread,sauce,cheese,topping);

    cout << endl;
    return 0;
}