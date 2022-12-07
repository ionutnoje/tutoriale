#include <iostream>

void print(char *vector)
{
    std::cout << "Print function: " << std::endl;

    while(*vector != '\0')
    {
        std::cout << *vector << std::endl;
        vector++;
    }
}


int main()
{
    //char vector[10] = {'h','e','l','l','o'};
    //char vector[10] = "HELLO";

    char vector[10];

    for(int i = 0; i < 9; i++)
    {
        std::cin >> vector[i];
    }

    print(vector);

    return 0;
}