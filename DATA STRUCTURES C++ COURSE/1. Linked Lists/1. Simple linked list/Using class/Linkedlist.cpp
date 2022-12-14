#include <iostream>
#pragma once

#include "Node.cpp"

class Linkedlist
{
    public:
        
        Node *head;

        static Linkedlist* getInstance();
        
        

        void afisare();
        void initializare();
        void inserare_sfarsit();
        void inserare_inceput();
        void inserare_pozitie();
        void stergere_sfarsit();
        void stergere_inceput();
        void stergere_pozitie();
        void actualizare();
        void cautare();
        int min_lista();
        int max_lista();
        void sortare_lista();
        void swap();

    private:
        
	    static Linkedlist* instance;

        Linkedlist()
        {
            head = NULL;
        }

};

Linkedlist* Linkedlist::instance = NULL;

Linkedlist* Linkedlist::getInstance()
        {
            // If there is no instance of class
            // then we can create an instance.
            if (instance == NULL)
            {
              // We can access private members
              // within the class.
              instance = new Linkedlist();

              // returning the instance pointer
              return instance;
            }
            else
            {
              // if instancePtr != NULL that means
              // the class already have an instance.
              // So, we are returning that instance
              // and not creating new one.
              return instance;
            }
        }
void Linkedlist::initializare()
{
    int data;
    std::cout << "Enter value: ";
    std::cin >> data;
    Node* newNode = new Node(data);
    head = newNode;

}

void Linkedlist::inserare_sfarsit()
{
    int data;

    if (head == NULL) {
		std::cout << "Empty List" << std::endl;
        getchar();
        getchar();
		return;
	}

    std::cout << "Enter value: ";
    std::cin >> data;

	Node* newNode = new Node(data);

	

	// Traverse till end of list
	Node* temp = head;
	while (temp->next != NULL) {

		temp = temp->next;
	}

	// Insert at the last.
	temp->next = newNode;
}

void Linkedlist::afisare()
{
    if(head == NULL )
    {
        std::cout << "Empty List" << std::endl;
        getchar();
        getchar();
        return;
    }
    else
    {
        struct Node* aux = head;
        std::cout << "\n";
        while(aux != NULL)
        {
            if(aux->next == NULL)
            {
                std::cout << aux->data << " -> NULL";
                aux = aux->next;
            }
            else
            {
                std::cout << aux->data << " -> ";
                aux = aux->next;
            }
        }
    }
}

void Linkedlist::inserare_inceput()
{
    if(head == NULL)
    {
        std::cout << "Empty List" << std::endl;
    }
}