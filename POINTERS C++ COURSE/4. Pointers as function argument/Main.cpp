#include <iostream>

//DEMONSTRATION OF CALLING BY VALUE

/*
    void increment(int a)
{
    a = a + 1;

    std::cout << "value of a from increment method after incrementation: " << a << std::endl;
    std::cout << "adress of a from increment method: " << &a << std::endl;
    std::cout << "\n";
}

int increment1(int a)
{
    a = a + 1;

    std::cout << "value of a from increment1 method after incrementation: " << a << std::endl;
    std::cout << "adress of a from increment1 method: " << &a << std::endl;
    std::cout << "\n";

    return a;
}

int main()
{
    int a = 10;
    std::cout << "value of a: " << a << std::endl;

    //calling the method
    increment(a);

    std::cout << "value of a from main method after incrementation: " << a << std::endl;
    std::cout << "adress of a from main method: " << &a << std::endl;
    std::cout << "\n";

    a = increment1(a);

    std::cout << "value of a from main method after incrementation1: " << a << std::endl;
    std::cout << "adress of a from main method: " << &a << std::endl;
    std::cout << "\n";
    

    return 0;
}


//    EXPLANATION:
//        - our a from the main method and from the increment function are local variables, each in it's function
//        - so both are different a-s, both have different adresses
//        - when we call the increment function we pass only the value of our variable and not the reference
//        - the a from the increment function will be 11 but the a in the main function will remain 10
//
//        - a quick fix to this situation is to create a function in which we return the value of a
//            - or we can create a function which expects the adress of our variable


*/



//--------------------------------------------------------------------------------------------------


//DEMONSTRATION OF CALLING BY REFERENCE

//int *a1 = &a;

void increment(int *a)
{
    *a = *a + 1;

    std::cout << "value of a from increment method after incrementation: " << *a << std::endl;
    std::cout << "adress of a from main method: " << a << std::endl;
    std::cout << "adress of a from increment method: " << &a << std::endl;
    std::cout << "\n";
}


int main()
{
    int a = 10;
    std::cout << "value of a: " << a << std::endl;

    //calling the method
    increment(&a);

    std::cout << "value of a from main method after incrementation: " << a << std::endl;
    std::cout << "adress of a from main method: " << &a << std::endl;
    std::cout << "\n";

    

    return 0;
}


/*  
    EXPLANATION:
        - increment function is expecting the adress of our variable from main method
        - when we call the increment method the local variable *a from the increment method receives the 
            adress of a from the main method
        - in short this is what happends when we call the function increment: int *a = &a;
        - so now our local variable *a stores the adress of a from main method
        - now we can perform any changes to our variable


    - cand apelam functia din main se intampla asta in functia increment: int *a = &a;
      acum in functia increment putem sa lucram cu variabila noastra si putem sa facem incrementarea
      
*/