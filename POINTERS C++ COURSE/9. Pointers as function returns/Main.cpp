#include <iostream>

//int *ptr = &var;


int *Add(int *a, int *b) //with pointers
{
    static int sum = *a + *b;
    return &sum;
}

int *Add1(int &a, int &b) //with references
{
    static int sum = a + b;
    return &sum;
}

int *Add3(int *a, int *b)
{  // the memory will be allocated on the heap, that memory needs to be manually dealocated
    int *sum = new int[1];
    *sum = *a + *b;
    return sum;
}


int main()
{

    int a,b;

    std::cout << "a: ";
    std::cin >> a;

    std::cout << "b: ";
    std::cin >> b;

    int *sum = Add(&a,&b);
    std::cout << "1. the sum of a and b: " << *sum << std::endl;

    int *sum1 = Add1(a,b);
    std::cout << "2. the sum of a and b: " << *sum1 << std::endl;

    int *sum2 = Add1(a,b);
    std::cout << "3. the sum of a and b: " << *sum2 << std::endl;



    return 0;
}



// the variable sum in Add method needs to be static because the memory allocated for the Add function id 
// freed after the execution of the method is finished, so we will have no adress to return

// int timpul rularii programului, metoda main o sa aiba memorie alocata pe stack pentru fiecare variabila
// pentru metodele create memoria este alocata tot pe stack, dar dupa ce executia lor se sfarseste,
// si memoria care le-a fost alocata, este dealocata

//in cazul in care dorim sa returnam un pointer din functiile respective, avem 2 variante
// 1. sa definim variabila la care dorim sa returnam adresa ca statica, in acest fel memoria este salvata
// 2. sa alocam memorie dinamic direct in functie, aceasta memorie este alocate in heap, 
//      in heam noi trebuie sa dealocam memoria manual, deci o sa ramana intacta si dupa finalizarea executiei metodei

