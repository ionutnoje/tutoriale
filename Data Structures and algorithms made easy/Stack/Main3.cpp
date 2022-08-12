#include <stdlib.h>
#include <stdio.h>


 struct nod
{
    int info;
    struct nod* succesor;
};

 struct stack
{
    struct nod* top;
    struct nod* first;
};


struct nod* initializare(struct stack* s, int info)
{
    struct nod* nod_nou = (struct nod*)malloc(sizeof(struct nod));
    nod_nou->info = info;
    nod_nou->succesor = NULL;

    s->top = nod_nou;
    s->top->info = info;


    return nod_nou;
}

struct nod* push(struct nod* list, struct stack* s, int info)
{
    if (list == NULL)
    {
        printf("\nlista goala");
        struct nod* nod_nou = initializare(s, info);
        list = nod_nou;
    }
    else
    {
        struct nod* temp = list;
        while (temp->succesor != NULL) //Cauta ultimul nod
        {
            temp = temp->succesor; 
        }
        
        struct nod* ultim = temp;
        struct nod* nod_nou = initializare(s, info);
        ultim->succesor = nod_nou;
    }
    //printf("\nAdaugare cu succes!");
    
    return list;
}

int pop(struct nod* list, struct stack* s, int lungime)
{
    if (list == NULL)
    {
        printf("\nEroare: lista vida!");
    }
    else
    {
        int info_sters = s->top->info;
        struct nod* tmp = list;
        while (tmp->succesor->succesor != NULL)
        {
            tmp = tmp->succesor;
        }
        struct nod* penultim = tmp;
        struct nod* salv = penultim->succesor;
        penultim->succesor = NULL;
        s->top = penultim;
        free(salv);
        lungime = lungime - 1;
        
        return info_sters;
    }
    return 0;
}

void afisare(struct nod* list,struct stack* s, int* lungime)
{
    printf("\nLungime lista: %d\nFirst: %d\nTop: %d\n", *lungime, s->first->info, s->top->info);
    if (list == NULL)
    {
        printf("\nEroare: Lista este vida.");
    }
    else
    {
        printf("Elemente: ");
        while (list != NULL)
        {
            printf("%d ", list->info);
            list = list->succesor;
        }
    }
    printf("\n");
}

int main()
{
    


    return 0;
}


















// #include <stdio.h>
// #include <stdlib.h>

// typedef struct IntegerLinkedListNode{
//     int value;
//     struct IntegerLinkedListNode* next;
//     struct IntegerLinkedListNode* prev;
// } Node;

// typedef struct IntegerLinkedList{ //Dynamic
//     int numberOfElements;
//     Node* firstNode;
//     Node* lastNode;
// } DynamicStack;


// // Create a new dynamic Stack
// DynamicStack* newStack(){
//     DynamicStack* stack = (DynamicStack*) malloc(sizeof(DynamicStack));
//     stack->firstNode = NULL;
//     stack->lastNode = NULL;
//     stack->numberOfElements = 0;

//     return stack;
// }

// // Create a new node for the stack
// Node* newNode(int value){
//     Node* p = (Node*) malloc(sizeof(Node));
//     p->next = NULL;
//     p->prev = NULL;
//     p->value = value;

//     return p;
// }

// // Verify if the stack is empty
// int EMPTYSTACK(DynamicStack* stack){
//     if(stack){
//         if(stack->firstNode == NULL || stack->numberOfElements == 0)
//             return 1;
        
//         return 0;
//     }

//     return -1; //no stack
// }

// // Display the stack
// void show(DynamicStack* stack){
//     int i = 0;
//     Node* p;
//     if(stack){
//         if(EMPTYSTACK(stack)){
//             printf("\nThe stack is empty!");
//         }else{
//             printf("\nThe stack has %d elements.", stack->numberOfElements);         
//             for(p = stack->firstNode; p != NULL; p = p->next){
//                 printf("\nindex %d (0x%.6x):  0x%.6x  %d  0x%.6x", i, p, p->prev, p->value, p->next);
//                 i++;
//             }
//         }
//     }
// }

// // Display the stack in reverse
// void show_r(DynamicStack* stack){
//     int i = stack->numberOfElements -1;
//     Node* p;
//     if(stack){
//         if(EMPTYSTACK(stack)){
//             printf("\nThe stack is empty!");
//         }else{
//             printf("\nThe stack has %d elements.", stack->numberOfElements);         
//             for(p = stack->lastNode; p != NULL; p = p->prev){
//                 printf("\nindex %d (0x%.6x):  0x%.6x  %d  0x%.6x", i, p, p->prev, p->value, p->next);
//                 i--;
//             }
//         }
//     }
// }

// // Add a new node at the end of the list (top of the stack)
// int PUSH(DynamicStack* stack, int value){
//     Node* p = NULL;
//     p = newNode(value);

//     if(p){
//         //printf("allocation success!");

//         if(stack->firstNode && stack->lastNode){
//             stack->lastNode->next = p;
//             p->prev = stack->lastNode;

//             stack->lastNode = p;
//             stack->numberOfElements ++;

//         }else{
//             stack->firstNode = p;
//             stack->lastNode = p;
//             stack->numberOfElements ++;
//         }
        
//         return 1; //push success
//     }

//     return 0; //push failed
// }

// // Delete the last node (top of the stack)
// int POP(DynamicStack* stack){
//     if(stack){
//         if(stack->firstNode){
//             if(stack->firstNode == stack->lastNode){
//                 free(stack->lastNode);

//                 stack->firstNode = NULL;
//                 stack->lastNode = NULL;
//                 stack->numberOfElements = 0;

//             }else{
//                 stack->lastNode = stack->lastNode->prev;
                
//                 free(stack->lastNode->next);
//                 stack->lastNode->next = NULL;
//                 stack->numberOfElements --;
//             }

//             return 1; //POP success
//         }

//         return 0; //POP failed
//     }

//     return 0; //POP failed
// }

// // Delete the entire stack
// int deleteStack(DynamicStack* stack){
//     if(stack){
//         if(stack->firstNode){
//             Node* p;

//             while(stack->firstNode){
//                 p = stack->firstNode;
//                 stack->firstNode = stack->firstNode->next;

//                 // if(stack->firstNode) //Not necessary bc I delete all the nodes
//                 //     stack->firstNode->prev = NULL;

//                 free(p);
//             }
            
//             stack->numberOfElements = 0;
//             return 1; //Deletion success
//         }

//         return 0; //Deletion failed
//     }

//     return 0; //Deletion failed
// }


// ///////////////////////////////////////////////////////////////////////////////


// int main(){
//     DynamicStack* st = newStack();
//     int ok=1, opt, n, e;

//     while(ok){
//         printf("\n1 - Show stack");
//         printf("\n2 - Show stack - reverse");
//         printf("\n3 - PUSH");
//         printf("\n4 - POP");
//         printf("\n5 - EMPTYSTACK");
//         printf("\n6 - Delete all");  
//         printf("\n0 - EXIT");

//         printf("\n\nOption: ");
//         scanf("%d", &opt);

//         printf("\n");

//         switch(opt){
//             case 1: { //show
//                 show(st);
//             } break;


//             case 2: { //show reverse
//                 show_r(st);
//             } break;


//             case 3: { //push
//                 printf("Enter value: ");
//                 scanf("%d", &n);

//                 e = PUSH(st, n);

//                 if(e)
//                     printf("Push Success!");
//                 else
//                     printf("Push failed!");
//             } break;


//             case 4: { //pop
//                 e = POP(st);

//                 if(e)
//                     printf("Pop Success!");
//                 else
//                     printf("Pop failed!");
//             } break;


//             case 5: { //empty stack
//                 e = EMPTYSTACK(st);

//                 if(e)
//                     printf("Stack empty!");
//                 else
//                     printf("Stack not empty!");
//             } break;


//             case 6: { //delete all
//                 e = deleteStack(st);

//                 if(e)
//                     printf("Deletion success!");
//                 else
//                     printf("Deletion failed!");
//             } break;


//             case 0: { //EXIT
//                 printf("Bye."); 
//                 ok = 0;
//             }break;


//             default: printf("\nInvalid option!");
//         }

//         printf("\n\n");
//     } 
// }