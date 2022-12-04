#include <iostream>

int main()
{   
//         byte 3   byte 2   byte 1   byte 0    
//  1025 = 00000000 00000000 00000100 00000001

    int a = 1025;
    int *p = &a;

    std::cout << "size of integer: " << sizeof(int) << std::endl;
    std::cout << "adress that p stores: " << p << " and value: " << *p << std::endl;
    std::cout << "asress that p+1 stores: " << p+1 << " and value: " << *(p+1) << std::endl;
    std::cout << "adress of variable a: " << &a << std::endl;

    //typecasting---------------------------------------------------------------------------------
    std::cout << "\n\n";
    char *p0;
    p0 = (char*)p;
    std::cout << "size of char: " << sizeof(char) << std::endl;
    std::cout << "adress that p0 stores: " << p0 << " and value: " << (int)*p0 << std::endl;
    std::cout << "asress that p0+1 stores: " << p0+1 << " and value: " << (int)*(p0+1) << std::endl;

    // we get the output 1 because p0 can only store 1 byte of memory, the first byte of variable a
    // which is equal to 1


    //void pointers - generic pointers
    std::cout << "\n\n";

    void *void_pointer;
    void_pointer = p;

    std::cout << "adress that void_pointer stores: " << void_pointer << " and the value can't be accessed, and we can't perform pointer arithmetics on void pointers" << std::endl;
    




    return 0;
}