#include <iostream>

void Hello(char *name)
{
    std::cout << "Hello there " << name  << std::endl;
}

int Add(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    int (*p)(int, int);
    p = &Add; // the same as p = Add;

    result = (*p)(2,3); // same as p(2,3);
    std::cout << "result: " << result << std::endl;


    void (*ptr)(char*);
    ptr = &Hello;

    (*ptr)("noje"); 

    return 0;
}