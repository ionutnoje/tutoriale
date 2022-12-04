#include <iostream>

int main()
{
    int a = 21;
    int *p = &a; //&a == adresa lui a

    std::cout << "valoarea lui a este: " << a << " iar adresa este: " << &a << std::endl;
    std::cout << "valoarea lui p este: " << *p << " iar adresa pe care o stocheaza este: " << p << std::endl;
    std::cout << "adresa proprie a lui p este: " << &p << std::endl;

    //schimbam valoarea lui a prin intermediul pointerului p
    *p = 2121;
    std::cout << "\nvalorile dupa schimbarea valorii lui a" << std::endl;
    std::cout << "\nvaloarea lui a este: " << a << " iar adresa este: " << &a << std::endl;
    std::cout << "valoarea lui p este: " << *p << " iar adresa pe care o stocheaza este: " << p << std::endl;
    std::cout << "adresa proprie a lui p este: " << &p << std::endl;




    //pointer arithmetic
    std::cout << "\nadresa lui p+1 este: " << p+1 << std::endl;




    return 0;
}