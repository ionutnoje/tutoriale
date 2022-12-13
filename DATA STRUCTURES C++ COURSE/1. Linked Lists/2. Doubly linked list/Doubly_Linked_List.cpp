#include <iostream>


void print();
struct node *initializare();
struct node *adaugare_inceput();
struct node *adaugare_sfarsit();
struct node *adaugare_poz();
struct node *crearea_lista_full();
struct node *stergere_primul_nod();
struct node *stergere_ultimul_nod();
struct node *stergere_poz();



struct node{
    struct node* pred;
    int data;
    struct node* succ;
};

void print(struct node* head)
{
    if(head == NULL)
    {
        std::cout << "lista este goala" << std::endl;
    }
    else
    {
        struct node* contor = head;
        std::cout << "\n";
        while(contor != NULL)
        {
            if(contor->pred == NULL)
                std::cout << " NULL";
            std::cout << " -> " << contor->data;
            if(contor->succ == NULL)
                std::cout << " -> NULL ";
            contor = contor->succ;
        }
    }
}

struct node *initializare()
{
    int data;
    struct node* head = new struct node;

    std::cout << "valoarea nodului: ";
    std::cin >> data;

    head->pred = NULL;
    head->data = data;
    head->succ = NULL;

    return head;
}


struct node* adaugare_sfarsit(struct node* head)
{
    if(head == NULL)
    {
        std::cout << "\nlista este goala" << std::endl;
        return NULL;
    }
    else
    {
        struct node* nod_nou = new struct node;
        int data;

        std::cout << "\nvaloarea nodului: ";
        std::cin >> data;

        nod_nou->pred = NULL;
        nod_nou->data = data;
        nod_nou->succ = NULL;

        struct node* contor = head;

        while(contor->succ != NULL)
        {
            contor = contor->succ;
        }
        contor->succ = nod_nou;
        nod_nou->pred = contor;
    }
    return head;
}

struct node* adaugare_inceput(struct node* head)
{
    if(head == NULL)
    {
        std::cout << "\nlista este goala" << std::endl;
        return NULL;
    }
    else
    {
        struct node* nod_nou = new struct node;
        int data;

        std::cout << "\nvaloarea nodului: ";
        std::cin >> data;

        nod_nou->pred = NULL;
        nod_nou->data = data;
        nod_nou->succ = head;
        head->pred = nod_nou;
        head = nod_nou;
    }
    return head;
}

struct node* adaugare_poz(struct node* head)
{
    if(head == NULL)
    {
        std::cout << "\nlista este goala" << std::endl;
        return NULL;
    }
    else
    {
        
        int data,poz;
        struct node* contor = head;
        struct node* temp2 = NULL;
        struct node* nod_nou = new struct node;

        std::cout << "\npozitia nodului: ";
        std::cin >> poz;

        std::cout << "\nvaloarea nodului: ";
        std::cin >> data;

        nod_nou->succ = NULL;
        nod_nou->pred = NULL;
        nod_nou->data = data;

        if(poz == 1)
        {
            nod_nou->pred = NULL;
            nod_nou->data = data;
            nod_nou->succ = head;
            head->pred = nod_nou;
            head = nod_nou;
        }
        else
        {
            poz--;
            while(poz != 1)
            {
                contor = contor->succ;
                poz--;
            }
            if(contor->succ == NULL)
            {
                contor->succ = nod_nou;
                nod_nou->pred = contor;
            }
            else
            {
                temp2 = contor->succ;
                nod_nou->pred = contor;
                nod_nou->succ = temp2;
                contor->succ = nod_nou;
                temp2->pred = nod_nou;
            }
        
        }
        
        


    }
    return head;

}

int main()
{
    struct node* head;
    
    head = initializare();
    print(head);

    head = adaugare_sfarsit(head);
    print(head);

    head = adaugare_inceput(head);
    print(head);

    head = adaugare_poz(head);
    print(head);

    


    return 0;
}