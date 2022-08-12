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
    int optiune, val,init = 0;
    

    MENIU:

    printf("\n");

    printf("\n");


    printf("MENIU Cozii: \n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. afisare\n");
    printf("4. iesire\n");
    


    

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
        return 0;
        goto MENIU;
    }
   
    
    



    return 0;
}

void push(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value; 
    
    if(top == NULL)
        newNode->next = NULL;
    else
        newNode->next = top; 
        top = newNode;
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
                printf("%d--->",temp->data);
                temp = temp -> next;
            }
    printf("%d--->NULL\n\n",temp->data);

    }
}











// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node* next;
// };
// struct node* top = NULL;

// void push(int x)
// {
//     struct node* temp = (struct node *)malloc(sizeof(struct node*));
//     temp->data = x;
//     temp->next = top;
//     top = temp;
// }

// void pop()
// {
//     struct node* temp;
//     if(top == NULL) 
//         return 0;

//     temp = top;
//     top = top->next;
//     free(temp);    
// }



// int main()
// {

//     return 0;
// }




















