#include <iostream>

void afisare();
struct node* initializare();
struct node* inserare_sfarsit();
struct node* inserare_inceput();
struct node* inserare_pozitie();
struct node* stergere_sfarsit();
struct node* stergere_inceput();
struct node* stergere_pozitie();
struct node* actualizare();
void cautare();
int min_lista();
int max_lista();
void sortare_lista();
void swap();





struct node{
    int data;
    struct node* prev;
    struct node* next;
};


struct node* initializare()
{
    int val;

    std::cout << "valoarea nodului: ";
    std::cin >> val;

    struct node* head = new struct node;
    head->data = val;
    head->next = NULL;
    head->prev = NULL;

    return head;
}

    
void afisare(struct node* head)
{
    if(head == NULL)
    {
        std::cout << "lista este goala" << std::endl;
    }
    else
    {
        struct node* aux = head;
        std::cout << "\n";
        while(aux != NULL)
        {
            if(aux->next == NULL)
            {
                std::cout <<"NULL -> " << aux->data << " -> NULL";
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



int main()
{
    struct node* head;

    head = initializare();
    afisare(head);

    return 0;
}