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
    struct node *next;
};


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

struct node* inserare_sfarsit(struct node* head)
{
    int data;

    struct node *nod_nou = new struct node;
    struct node *contor = head;

    std::cout << "\nintroduceti valoarea nodului: " << std::endl;
    std::cin >> data;

    nod_nou->data = data;
    nod_nou->next = NULL;

    while(contor->next != NULL)
    {
        contor = contor->next;
    }

    contor->next = nod_nou;

    return head;

}
struct node* initializare()
{
    int data;
    struct node *head = new struct node;
    std::cout << "introduceti valoarea primului element: ";
    std::cin >> data;
    head->data = data;
    head->next = NULL;

    return head;

}

struct node* inserare_inceput(struct node* head)
{
    int data;
    struct node* nod_nou = new struct node;
    struct node* contor = head;

    if(head == NULL)
    {
        printf("\nlista este goala");
        return NULL;

    }
    else
    {
        std::cout << "\nintroduceti valoarea nodului: ";
        std::cin >> data;

        nod_nou->data = data;
        nod_nou->next = head;
        head = nod_nou;
    }

    return head;

}

struct node* inserare_pozitie(struct node* head)
{
    int data,poz;

    struct node *nod_nou;
    struct node *contor = head;

    nod_nou = new struct node;

    std::cout << "\n introduceti indexul noului nod: ";
    std::cin >> poz;

    std::cout << "\n introduceti valoarea nodului: ";
    std::cin >> data;

    nod_nou->data = data;
    nod_nou->next = NULL;
    
    if(poz != 1)
    {
        for(int i = 1; i <= poz - 2; i++)
        {
        contor = contor->next;
        }

        nod_nou->next = contor->next;
        contor->next = nod_nou;

    }
    else
    {
        nod_nou->data = data;
        nod_nou->next = head;
        head = nod_nou;
    }

    return head;
}

struct node* stergere_sfarsit(struct node* head)
{
    struct node* contor = head;
    
    if(head == NULL)
    {
        std::cout << "\nlista este goala" << std::endl;
    }
    else if(head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        while(contor->next->next != NULL)
        {
            contor = contor->next;
        }
        free(contor->next);
        contor->next = NULL;
    }

    return head;
}

struct node* stergere_inceput(struct node* head)
{
    if(head == NULL)
    {
        std::cout << "lista este goala" << std::endl;
    }
    else
    {
        struct node* aux = head;
        head = head->next;
        free(aux);
    }
    return head;
}

struct node* stergere_pozitie(struct node* head)
{   
    int poz;
    struct node *aux1 = head;
    struct node *aux2 = head;

    if(head == NULL)
    {
        std::cout << "lista este goala" << std::endl;
        return NULL;
    }
    else
    {
        std::cout << "\n introduceti indexul nodului pe care doriti sa il stergeti: ";
        std::cin >> poz;

        if(poz == 1)
        {
            head = aux1->next;
            free(aux1);
            aux1 = NULL;
        }
        else
        {
            if(poz != 1)
            {
                for(int i = 1; i <= poz - 1; i++)
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
    return head;
}   

struct node* actualizare(struct node* head)
{
    if(head == NULL)
    {
        std::cout << "\nlista este goala" << std::endl;
    }
    else
    {
        int poz,val;
        struct node* aux = head;

        std::cout << "\npozitia pe care actualizam valoarea: " << std::endl;
        std::cin >> poz;

        std::cout << "valoarea: " << std::endl;
        std::cin >> val;

        if(poz != 1)
        {
            for(int i = 1; i < poz; i++)
            {
                aux = aux->next;
            }

            aux->data = val;
        }
        else if(poz == 1)
        {
            head->data = val;
        }
        
    }
    return head;
}

void cautare(struct node* head)
{
    int val;



    std::cout << "\nvaloarea pe care o cautati: " << std::endl;
    std::cin >> val;

    struct node* contor = head;

    while(contor != NULL)
    {
        if(contor->data == val)
        {
            std::cout << "\nvaloarea a fost gasita" << std::endl;
            break;
        }
        else
        {
            contor = contor->next;
        }
    }
}

int min_lista(struct node* head)
{
    struct node* contor = head;
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


int max_lista(struct node* head)
{
    struct node* contor = head;
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

void swap(struct node* val1, struct node* val2)
{
    struct node* temp = new struct node;

    temp->data = val1->data;
    val1->data = val2->data;
    val2->data = temp->data;
}

void sortare_lista(struct node *head)
{
    int swapped, i;
    struct node *ptr1;
    struct node *lptr = NULL;
  
    
    if (head == NULL)
        printf("lista este goala");
  
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


int main()
{
    struct node* head;
    head = initializare();

    afisare(head);

    head = inserare_sfarsit(head);

    afisare(head);

    head = inserare_inceput(head);

    afisare(head);

    head = inserare_pozitie(head);

    afisare(head);
    
    head = stergere_pozitie(head);
    afisare(head);

    head = actualizare(head);
    afisare(head);

    cautare(head);

    int min = min_lista(head);
    int max = max_lista(head);
    std::cout << "min lista: " << min << std::endl;
    std::cout << "max lista: " << max << std::endl;

    head = inserare_sfarsit(head);
    head = inserare_sfarsit(head);
    head = inserare_sfarsit(head);
    head = inserare_sfarsit(head);
    head = inserare_sfarsit(head);

    afisare(head);

    sortare_lista(head);
    afisare(head);


    return 0;
}