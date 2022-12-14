#include <iostream>


void print();
struct node *initializare();
struct node *adaugare_inceput();
struct node *adaugare_sfarsit();
struct node *adaugare_poz();
struct node *stergere_primul_nod();
struct node *stergere_ultimul_nod();
struct node *stergere_poz();
void coutare(struct node* head);
void swap();
void sortare_lista();



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

struct node* stergere_primul_nod(struct node* head)
{
    struct node *temp = head;
    head = head->succ;
    free(temp);
    temp = NULL;
    head->pred = NULL;
    
    return head;
}

struct node* stergere_ultimul_nod(struct node* head)
{
    struct node *temp = head;
    struct node *temp2;
    while(temp->succ != NULL)
    {
        temp = temp->succ;
    }
    temp2 = temp->pred;
    temp2->succ = NULL;
    free(temp);

    return head;
}

struct node* stergere_poz(struct node* head)
{   
    int poz;

    if(head == NULL)
    {
        std::cout << "\nlista goala" << std::endl;
    }

    std::cout << "\npozitia: ";
    std::cin >> poz;

    struct node *temp = head;
    struct node *temp2 = NULL;

    if(poz == 1)
    {
        head = stergere_primul_nod(head);
        return head;
    }
    while(poz > 1)
    {
        temp = temp->succ;
        poz--;
    }
    if(temp->succ == NULL)
    {
        head = stergere_ultimul_nod(head);
    }
    else
    {
        temp2 = temp->pred;
        temp2->succ = temp->succ;
        temp->succ->pred = temp2;
        free(temp);
        temp = NULL;
    }

    return head;
}

void cautare(struct node* head)
{
    int val; 

    std::cout << "\nval cautata: ";
    std::cin >> val;

    if(head == NULL)
    {
        std::cout << "\nlista goala" << std::endl;
        
    }

    while(head != NULL)
    {
        if(head->data == val)
        {
            std::cout << "valoarea " << val << " a fost gasita" << std::endl;
            break;
        }
        head = head->succ;
    }
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
  
        while (ptr1->succ != lptr)
        {
            if (ptr1->data > ptr1->succ->data)
            { 
                swap(ptr1, ptr1->succ);
                swapped = 1;
            }
            ptr1 = ptr1->succ;
        }
        lptr = ptr1;
    }
    while (swapped);
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
    head = adaugare_poz(head);
    print(head);
    head = adaugare_poz(head);
    print(head);
    head = adaugare_poz(head);
    print(head);
    head = adaugare_poz(head);
    print(head);

    
    sortare_lista(head);
    print(head);
    


    return 0;
}