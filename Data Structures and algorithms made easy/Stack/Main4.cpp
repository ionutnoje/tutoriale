// #include <stdlib.h>
// #include <stdio.h>


//  struct nod
// {
//     int info;
//     struct nod* succesor;
// };

//  struct stack
// {
//     struct nod* top ;
//     struct nod* first;
// };


// struct nod* initializareStiva(struct stack* s, int info)
// {
//     struct nod* nod_nou = (struct nod*)malloc(sizeof(struct nod));
//     nod_nou->info = info;
//     nod_nou->succesor = NULL;

//     s->top = nod_nou;
//     s->top->info = info;

//     return nod_nou;
// }

// struct nod* push(struct nod* list, struct stack* s, int info)
// {
//     if (list == NULL)
//     {
//         printf("\nlista vida!");
//         struct nod* nod_nou = initializareStiva(s, info);
//         list = nod_nou;
//     }
//     else
//     {
//         struct nod* temp = list;
//         while (temp->succesor != NULL) 
//         {
//             temp = temp->succesor; 
//         }
        
//         struct nod* ultim = temp;
//         struct nod* nod_nou = initializareStiva(s, info);
//         ultim->succesor = nod_nou;
//     }
    
    
//     return list;
// }

// int pop(struct nod* list,struct  stack* s)
// {
//     if (list == NULL)
//     {
//         printf("\nlista vida!");
//     }
//     else
//     {
//         int info_sters = s->top->info;
//         struct  nod* tmp = list;
//         while (tmp->succesor->succesor != NULL)
//         {
//             tmp = tmp->succesor;
//         }
//         struct nod* penultim = tmp;
//         struct nod* salv = penultim->succesor;
//         penultim->succesor = NULL;
//         s->top = penultim;
//         free(salv);
      
        
//         return info_sters;
//     }
//     return 0;
// }

// void afisare(struct nod* list, struct stack* s)
// {
//     printf("\n%d\nTop: %d\n", s->first->info, s->top->info);
//     if (list == NULL)
//     {
//         printf("\nLista este vida.");
//     }
//     else
//     {
//         printf("Elemente: ");
//         while (list != NULL)
//         {
//             printf("%d ", list->info);
//             list = list->succesor;
//         }
//     }
//     printf("\n");
// }

// int main()
// {
    


//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
}*top = NULL;


void push(int);
void pop();
void afisare();

int main()
{
    int optiune, val,init = 0,contor = 0;
    

    MENIU:

    printf("\n");

    printf("\n");


    printf("MENIUL Stivei: \n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. afisare\n");
    printf("4.palindrom\n");
    printf("5. iesire\n");
    


    

    printf("\nIntroduceti valoarea pentru actiunea dorita: ");
    scanf("%d",&optiune);
    if(optiune < 1 || optiune > 4)
    {
        printf("ATI INTRODUS O VALOARE GRESITA\n");
        return 0;
        goto MENIU;
    }
    if(optiune == 1)
    {
        printf("\nintroduceti valoarea: ");
        scanf("%d", &val);
        push(val);
        contor = contor + 1;
        goto MENIU;
        
    }
    else if(optiune == 2)
    {
        pop();
        goto MENIU;

    }
    else if(optiune == 3)
    {
        afisare();
        goto MENIU;
    }
    else if(optiune == 4)
    {
        palindrom(contor);
        goto MENIU;
    }
    else if(optiune == 5)
    {
        return 0;
        goto MENIU;
    }
   
    
    



    return 0;
}

void push(int value)
{
    struct Node *nodnou;
    nodnou = (struct Node*)malloc(sizeof(struct Node));
    nodnou->data = value; 
    
    if(top == NULL)
        nodnou->next = NULL;
    else
        nodnou->next = top; 
        top = nodnou;
        printf("nodul a fost adaugat\n\n");
}

void pop()
{
    if(top == NULL)
        printf("\nstiva goala\n");
    else{
        struct Node *temp = top;
        printf("\nelementul sters : %d", temp->data);
        printf("\n");
        top = temp->next; 
        free(temp);
        }
}

void afisare()
{
    if(top == NULL)
        printf("\nstiva goala\n");
    else
    {
        printf("stiva este \n");
        struct Node *temp = top;
            
            while(temp->next != NULL)
            {
                printf("%d->",temp->data);
                temp = temp -> next;
            }
    printf("%d->NULL\n\n",temp->data);

    }
}


int palindrom(contor)
{
    int vector[500];

    printf("sunt %d elemente" ,contor );
    struct Node *temp = top;
            
            while(temp->next != NULL)
            {
                
                printf("%d->",temp->data);
                temp = temp -> next;
            }

}








//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////












