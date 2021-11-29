#include <iostream>
#include <string>
#include "stdio.h"

using namespace std;

int main()
{   
    //printf
    // % [flags] [width] [.precision] [lenght] specifier
    //format specifiers: 
    //          %s -> string
    //          %d -> int
    //          %f -> double
    //          %lf -> float
    //          %c -> char

    string make = "Ferrari";
    string model = "458";
    int year = 2013;
    double price = 120000.000000;
    char for_sale = 'Y';


    printf("your car is made by: %s\n", make.c_str());
    printf("your car is a: %s %s\n",make.c_str(),model.c_str());
    printf("your car is a: %d %s %s",year,make.c_str(),model.c_str());
   
   
    printf("the price is: %f\n",price);
    printf("the price is: %.2f\n",price);
    printf("this precedes with blank spaces: %10s\n","Ferrari");
    printf("this precedes with zeros: %010s\n","Ferrari");
    printf("left justify: %-10s%-10s\n","Ferrari","458");

   
   
   
    return 0;
}