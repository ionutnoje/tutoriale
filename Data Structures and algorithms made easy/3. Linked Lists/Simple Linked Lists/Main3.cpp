#include <stdio.h>
#include <stdlib.h>


struct node *initializare();
void afisare();
struct node *inserare_la_sfarsit();
struct node *inserare_la_inceput();
struct node *inserare_pe_poz_dorita();
struct node *stergere_la_inceput();
struct node *stergere_la_sfarsit();
struct node *stergere_la_sfarsitM2();
struct node *stergere_la_alegere();
struct node *actualizare();
void cautare();
int min_lista();
int max_lista();
void sortare_lista();
void swap();



struct node
{
    int data;
    struct node *next;
};


struct node* initializare()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    int val;
    printf("introduceti valoarea primului element: ");
    scanf("%d",&val);
    head->data = val;
    head->next = NULL;
    return head;
    
}


void afisare(struct node *head)
{
    if(head == NULL)
    {
        printf("lista este goala");
    }
    struct node *aux = NULL;
    aux = head;
    while(aux != NULL)
    {
        printf("%d ",aux->data);
        aux = aux->next;
    }
}


struct node *inserare_la_sfarsit(struct node *head)
{
    int val;

    struct node *nod_nou;
    struct node *contor;
    contor = head;
    nod_nou = (struct node *)malloc(sizeof(struct node));

    printf("introduceti valoarea nodului: ");
    scanf("%d",&val);
    nod_nou->data = val;
    nod_nou->next = NULL;
    
    while(contor->next != NULL)
    {
        contor = contor->next;

    }
    
    contor->next = nod_nou;
    

    return head;

}


struct node *inserare_la_inceput(struct node *head)
{
    int val;

    struct node *nod_nou;
    nod_nou = (struct node *)malloc(sizeof(struct node));

    printf("introduceti valoarea nodului: ");
    scanf("%d",&val);

    if(head == NULL)
    {
        printf("lista este goala");
        return NULL;

    }
    else
    {
        nod_nou->data = val;
        nod_nou->next = head;
        head = nod_nou;
    }

    return head;
}


struct node *inserare_pe_poz_dorita(struct node *head)
{
    int val,poz;

    struct node *nod_nou;
    struct node *contor = head;

    nod_nou = (struct node *)malloc(sizeof(struct node));

    printf("introduceti valoarea indexului: ");
    scanf("%d", &poz);

    printf("introduceti valoarea nodului: ");
    scanf("%d", &val);

    nod_nou->data = val;
    nod_nou->next = NULL;
    


    poz--;
    while(poz != 1)
    {
        contor = contor->next;
        poz--;
    }
    nod_nou->next = contor->next;
    contor->next = nod_nou;


    return head;

}


struct node *stergere_la_inceput(struct node *head)
{   
    struct node *aux = head;


    if(aux == NULL)
    {
        printf("lista este goala");
    }
    else
    {
        head = head->next;
        free(aux);
    }


    return head;

}


struct node *stergere_la_sfarsit(struct node *head)
{
        struct node *aux ;
        struct node *aux2 ;

    if(head == NULL)
    {
        printf("lista este goala");
    }
    else if(head->next == NULL)
    {
        free(head);
        head == NULL;
    }
    else 
    {
        struct node *aux = head;
        struct node *aux2 = head;

        while(aux->next != NULL)
        {
            aux2 = aux;
            aux = aux->next;

        }
        aux2->next = NULL;
        free(aux);
        aux = NULL;
    }
    
    
    return head;
}


struct node *stergere_la_sfarsitM2(struct node *head)
{
    if(head == NULL)
    {
        printf("lista este goala");
    }
    else if(head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *contor1 = head;
        

        while(contor1->next->next != NULL)
        {
            contor1 = contor1->next;
        }
        
        free(contor1->next);
        contor1->next = NULL;
    
    }

    return head;
}


struct node *stergere_la_alegere(struct node *head)
{
    int pos;
    
    struct node *aux1 = head;
    struct node *aux2 = head;
    printf("introduceti pozitia pe care vreti sa o stergeti: ");
    scanf("%d",&pos);
    if(head == NULL)
    {
        printf("lista este goala");

    }
    else if(pos == 1)
    {
        head = aux1->next;
        free(aux1);
        aux1 = NULL;
    }
    else
    {
        while(pos != 1)
        {
            aux2 = aux1;
            aux1 = aux1->next;
            pos--;
        }
        aux2->next = aux1->next;
        free(aux1);
        aux1 = NULL;
    }

    return head;
}


struct node *actualizare(struct node *head)
{
    int poz,val;
    printf("introduceti pozitia pe care vreti sa schimbati valoarea: \n");
    scanf("%d",&poz);
    printf("introduceti valoarea noua: \n");
    scanf("%d",&val);

    poz--;
    
        if(poz != 1)
        {
             while(poz != 1)
            {
                head = head->next;
                poz--;
            }
            head->next->data = val;

        
        }
        else
        {
            head->next->data = val;

        }

    
    return head;

}


void cautare(struct node *head)
{
    int val;
    printf("valoarea pe care o cautati: ");
    scanf("%d",&val);

    struct node *aux = head;
    
    while(aux != NULL)
    {
        if(aux->data == val)
        {
            printf("valoaera a fast gasita");
            break;
        }
        else{
            aux = aux->next;
        }
    }
    
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


void swap(struct node *a, struct node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}


int max_lista(struct node* head)
{
   
    
    int max ;
    

    if(head == NULL)
    {
        printf("lista este goala");
    }
    else
    {
        max = head->data;
        

        while(head->next != NULL)
        {
            if(head->data >= max)
            {
                max = head->data;
            }
            head = head->next;
        }
    }
    if(head->next == NULL)
    {
        if(head->data >= max)
            {
                max = head->data;
            }
    }
    return max;
}


int min_lista(struct node* head)
{
   
  
    
    int min ;
    

    if(head == NULL)
    {
        printf("lista este goala");
    }
    else
    {
        min = head->data;
        

        while(head->next != NULL)
        {
            if(head->data <= min)
            {
                min = head->data;
            }
            head = head->next;
        }
    }
    if(head->next == NULL)
    {
        if(head->data <= min)
            {
                min = head->data;
            }
    }
    return min;

}



int main()
{
    struct node *var;
    var = NULL;

    int optiune,init = 0,min,max;
    
    MENIU:

    printf("\n");

    printf("\n");


    printf("MENIU LISTE SIMPLU INLANTUITE: \n");
    printf("1. Initializare\n");
    printf("2. Inserare nod la inceput\n");
    printf("3. Inserare nod la sfarsit\n");
    printf("4. Inserare nod pe o pozitie dorita\n");
    printf("5. Stergere nod la inceput\n");
    printf("6. Stergere nod la sfarsit\n");
    printf("7. Stergere nod de pe o pozitie dorita\n");
    printf("8. Cautare\n");
    printf("9. Actualizare\n");
    printf("10. Minimul listei\n");
    printf("11. Maximul listei\n");
    printf("12. Sortare\n");
    printf("13. Afisare lista\n");
    printf("14. Iesire din program\n");


    

    printf("\nIntroduceti valoarea pentru actiunea dorita: ");
    scanf("%d",&optiune);
    if(optiune < 1 || optiune > 14)
    {
        printf("ATI INTRODUS O VALOARE GRESITA\n");
        return 0;
    }


    

    if(optiune == 1)
    {
        if(init <= 0)
        {
        var = initializare(); 
        printf("\n");
        init = init + 1;
        
        }
        else
        {
            
            printf("LISTA A FOST DEJA INITIALIZATA\n\n");
        }
        
    }
    else if(optiune == 2)
    {
        var = inserare_la_inceput(var);
        printf("\n");

    }
    else if(optiune == 3)
    {
        var = inserare_la_sfarsit(var);
        printf("\n");
    }
    else if(optiune == 4)
    {
        var = inserare_pe_poz_dorita(var);
        printf("\n");
    }
    else if(optiune == 5)
    {
        var = stergere_la_inceput(var);
        printf("\n");
    }
    else if(optiune == 6)
    {
        var = stergere_la_sfarsit(var);
        printf("\n");
    }
    else if(optiune == 7)
    {
        var = stergere_la_alegere(var);
        printf("\n");
    }
    else if(optiune == 8)
    {
        cautare(var);
        printf("\n");
    }
    else if(optiune == 9)
    {
        var = actualizare(var);
        printf("\n");
    }
    else if(optiune == 10)
    {
        min = min_lista(var);
        printf("Minimul din lista este: %d\n", min);
        printf("\n");
    }
    else if(optiune == 11)
    {
        max = max_lista(var);
        printf("Maximul listei este: %d\n", max);
        printf("\n");
    }
    else if(optiune == 12)
    {
        sortare_lista(var);
        goto AFISARE;
        printf("\n");
    }
    else if(optiune == 13)
    {   AFISARE:
        afisare(var);
        printf("\n");
    }
    else if(optiune == 14)
    {
        printf("programul a fost oprit");
        return 0;
    }
    
    goto MENIU;


    
    return 0;
}