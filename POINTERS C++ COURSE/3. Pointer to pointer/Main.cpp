#include <iostream>

int main()
{
    int x = 5;

    int *p;
    p = &x;

    //std::cout << "value of x: " << x << std::endl;
    //std::cout << "adress of x: " << &x << std::endl;
    //std::cout << "adress that p stores (adress of x): " << p << std::endl;
    //std::cout << "adress of p: " << &p << std::endl;
    //std::cout << "dereferenced p (value of x): " << *p << "\n" << std::endl;
    
    *p = 6;
    //std::cout << "apply *p = 6" << std::endl;
    //std::cout << "value of x: " << x << std::endl;
    //std::cout << "adress of x: " << &x << std::endl;
    //std::cout << "adress that p stores (adress of x): " << p << std::endl;
    //std::cout << "adress of p: " << &p << std::endl;
    //std::cout << "dereferenced p (value of x): " << *p << std::endl;


    //pointer to pointer
    int **q;
    q = &p;

    //std::cout << "\nvalue of x: " << x << std::endl;
    //std::cout << "adress of x: " << &x << std::endl;

    //std::cout << "value of p (adress of x): " << p << std::endl;
    //std::cout << "dereferenced p: " << *p << std::endl;
    //std::cout << "adress of p: " << &p << std::endl;
    
    //std::cout << "adress that q stores (adress of p): " << q << std::endl;
    //std::cout << "dereferenced q (adress of x): " << *q << std::endl;
    //std::cout << "double dereferenced q (value of x): " << **q << std::endl;

    /*
        value of x: 5
        adress of x: 0x61fe14
        adress that p stores (adress of x): 0x61fe14
        adress of p: 0x61fe08
        dereferenced p (value of x): 5

        apply *p = 6

        value of x: 6
        adress of x: 0x61fe14
        adress that p stores (adress of x): 0x61fe14
        adress of p: 0x61fe08
        dereferenced p (value of x): 6

        value of x: 6
        adress of x: 0x61fe14
        value of p (adress of x): 0x61fe14
        dereferenced p: 6
        adress of p: 0x61fe08
        adress that q stores (adress of p): 0x61fe08
        dereferenced q (adress of x): 0x61fe14
        double dereferenced q (value of x): 6
    

    */


   //play with this pointers:))

    std::cout << "\n\n\n";
    std::cout << "value of x: " << x << std::endl;

    *(*q) = *p + 10;
    std::cout << "*(*q) = *p + 10 -> value of x: " << x << std::endl;

    *p = x + *(*q) - 1 + *p;
    std::cout << "*p = x + *(*q) - 1 + *p -> value of x: " << x << std::endl;


    

    return 0;
}