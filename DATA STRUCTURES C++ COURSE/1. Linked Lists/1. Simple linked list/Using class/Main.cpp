#include <iostream>
using namespace std;

#include "Node.cpp"
#include "Linkedlist.cpp"




// Driver Code
int main()
{
	
    int option;
    bool initialized = false;
    Linkedlist* list ;
    int min, max;


	do{
        system("CLS");
        std::cout << "\n\nMenu - Simple Linked List\n";
        std::cout << "1. Initialize\n";
        std::cout << "2. Add to end\n";
        std::cout << "3. Add to start\n";
        std::cout << "4. Add to position\n";
        std::cout << "5. Delete from end\n";
        std::cout << "6. Delete from start\n";
        std::cout << "7. Delete from position\n";
        std::cout << "8. Change value\n";
        std::cout << "9. Search\n";
        std::cout << "10. Find min\n";
        std::cout << "11. Find max\n";
        std::cout << "12. Sort\n";
        std::cout << "13. Print\n";
        std::cout << "0. Exit\n";


        std::cout << "\n Enter your option: " << std::endl;
        std::cin >> option;

        switch(option)
        {
            case 1:
                if(initialized == false){
                    list= Linkedlist::getInstance();
                    list->initializare();
                    initialized = true;
                }
                else{
                    std::cout << "Already initialized list" << std::endl;
                    getchar();
                    getchar();
                }
                

                break;

            case 2:
                list->inserare_sfarsit();
                break;
            
            case 3:
                list->inserare_inceput();
                break;
            
            case 4:
                list->inserare_pozitie();
                break;
            
            case 5:
                list->stergere_sfarsit();
                break;
            
            case 6:
                list->stergere_inceput();
                break;
            
            case 7:
                list->stergere_pozitie();
                break;
            
            case 8:
                list->actualizare();
                break;

            case 9:
                list->cautare();
                break;

            case 10:
                min = list->min_lista();
                std::cout << "Minimum: " << min << std::endl;
                getchar();
                getchar();
                break;

            case 11:
                max = list->max_lista();
                std::cout << "Maximum: " << max << std::endl;
                getchar();
                getchar();
                break;

            case 12:
                list->sortare_lista();
                break;

            case 13:
                if(initialized == true)
                {
                    list->afisare();    
                }
                else
                {
                    std::cout << "Uninitialized list" << std::endl;
                }
                
                getchar();
                getchar();
                break;
            
            case 0:
                option = 0;
                break;
            

        }

    }
    while(option != 0);

	
	return 0;
}
