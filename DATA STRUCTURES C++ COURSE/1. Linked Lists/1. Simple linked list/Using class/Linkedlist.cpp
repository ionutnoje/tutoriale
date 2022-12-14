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
        void swap(Node*, Node*);

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
    if (head == NULL) {
		std::cout << "Empty List" << std::endl;
        getchar();
        getchar();
		return;
	}
    else
    {
        int data;
        std::cout << "Enter value: ";
        std::cin >> data;

	    Node* newNode = new Node(data);
        
        newNode->next = head;
        head = newNode;
        

    }
}

void Linkedlist::inserare_pozitie()
{
    int data,pos;

    if (head == NULL) {
		std::cout << "Empty List" << std::endl;
        getchar();
        getchar();
		return;
	}
    else
    {
        std::cout << "Enter value: ";
        std::cin >> data;

        std::cout << "Position: ";
        std::cin >> pos;

	    Node* newNode = new Node(data);

    

	    Node* temp = head;
	    if(pos != 1)
        {
            while(pos != 2)
            {
                temp = temp->next;
                pos--;
            }
    
            newNode->next = temp->next;
            temp->next = newNode;
    
        }
        else
        {
            newNode->data = data;
            newNode->next = head;
            head = newNode;
        }
        
    }
}

void Linkedlist::stergere_sfarsit()
{
    if (head == NULL) {
		std::cout << "Empty List" << std::endl;
        getchar();
        getchar();
		return;
	}
    else
    {
        
        Node *temp = head;

        if(temp->next == NULL)
        {
            free(temp);
        }
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;

    }
}

void Linkedlist::stergere_inceput()
{
    if (head == NULL) {
		std::cout << "Empty List" << std::endl;
        getchar();
        getchar();
		return;
	}
    else
    {
        Node* temp = head;
        head = head->next;
        free(temp);
        
    }
}

void Linkedlist::stergere_pozitie()
{
    int pos;
    Node *aux1 = head;
    Node *aux2 = head;

    if (head == NULL) 
    {
		std::cout << "Empty List" << std::endl;
        getchar();
        getchar();
		return;
	}
    else
    {
        std::cout << "\nDelete from pos: ";
        std::cin >> pos;

        if(pos == 1)
        {
            head = aux1->next;
            free(aux1);
            aux1 = NULL;
        }
        else
        {
            if(pos != 1)
            {
                for(int i = 1; i <= pos - 1; i++)
                {
                    aux2 = aux1;
                    aux1 = aux1->next;
                }
                aux2->next = aux1->next;
                free(aux1);
                aux1 = NULL;
            }
        }
    }
}

void Linkedlist::actualizare()
{
    if (head == NULL) 
    {
		std::cout << "Empty List" << std::endl;
        getchar();
        getchar();
		return;
	}
    else
    {
        int pos,val;
        Node* aux = head;

        std::cout << "\nChange value at: " << std::endl;
        std::cin >> pos;

        std::cout << "val: " << std::endl;
        std::cin >> val;

        if(pos != 1)
        {
            for(int i = 1; i < pos; i++)
            {
                aux = aux->next;
            }

            aux->data = val;
        }
        else if(pos == 1)
        {
            head->data = val;
        }
        
    }
}

void Linkedlist::cautare()
{
    int val;

    std::cout << "\nSearch for: " << std::endl;
    std::cin >> val;

    Node* contor = head;

    while(contor != NULL)
    {
        if(contor->data == val)
        {
            std::cout << "\nValue was found:)" << std::endl;
            break;
        }
        else
        {
            contor = contor->next;
        }
    }
}

int Linkedlist::min_lista()
{
    Node* contor = head;
    int min = head->data;

    while(contor != NULL)
    {
        if(contor->data < min)
        {
            min = contor->data;
        }
        contor = contor->next;
    }
    
    return min;
}

int Linkedlist::max_lista()
{
    Node* contor = head;
    int max = head->data;

    while(contor != NULL)
    {
        if(contor->data > max)
        {
            max = contor->data;
        }
        contor = contor->next;
    }
    
    return max;
}

void Linkedlist::swap(Node* val1, Node* val2)
{
    int aux;

    aux = val1->data;
    val1->data = val2->data;
    val2->data = aux;
    
}

void Linkedlist::sortare_lista()
{
    int swapped, i;
    Node *ptr1;
    Node *lptr = NULL;
  
    
    if (head == NULL) 
    {
		std::cout << "Empty List" << std::endl;
        getchar();
        getchar();
		return;
	}
    do
    {
        swapped = 0;
        ptr1 = head;
  
        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            { 
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}