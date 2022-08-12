#include <stdio.h>
#include <stdlib.h>


void afisare();
void initializare();
struct node *adaugare_element_in_lista_goala();
struct node *adaugare_element_la_inceput();
struct node *adaugare_element_la_sfarsit();
struct node *adaugare_element_dupa_poz_dorita();
struct node *adaugare_element_inainte_de_poz_dorita();
struct node *crearea_unei_intregi_liste_dublu_inlantuite();
struct node *stergere_primul_nod();
struct node *stergere_ultimul_nod();
struct node *stergere_element_ales();
void search_element();
void sortare();
void cautare();
void actualizare();





struct node
{
    struct node* prev;
    int data;
    struct node* next;

};


  



void afisare(struct node *head)
{   
    struct node *ptr = head;

    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void initializare()
{
    //crearea unui nod
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 10;
    head->next = NULL;
}


struct node* adaugare_element_in_lista_goala(struct node* head, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}


struct node *adaugare_element_la_inceput(struct node* head, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}



struct node *adaugare_element_la_sfarsit(struct node* head, int data)
{
    struct node* temp,*tp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    tp = head;
    while(tp->next != NULL)
    {
        tp = tp->next;

    }
    tp->next = temp;
    temp->prev = tp;
    return head;
}


struct node *adaugare_element_pe_poz_dorita(struct node *head, int data , int position)
{
    struct node *newp = NULL;
    struct node *temp = head;
    struct node *temp2 = NULL;
    newp = adaugare_element_in_lista_goala(newp,data);

    while(position != 1)
    {
        temp = temp->next;
        position--;
    }
    if(temp->next == NULL)
    {
        temp->next = newp;
        newp->prev = temp;
    }
    else
    {
        temp2 = temp->next;
        temp->next = newp;
        temp2->prev = newp;
        newp->next = temp2;
        newp->prev = temp;
    
    }
    return head;
}

void cautare(struct node *head, int val_cautata ) {
   int pos = 0;
   struct node *current = NULL;
   
   if(head == NULL) {
      printf("lista nu exista");
      
   } 

   current = head;
   while(current!=NULL) {
      pos++;
      
      if(current->data == val_cautata) {
         printf("elementul a fost gasit in lista");
         
      }

      if(current->next != NULL)
         current = current->next;
      else
         break;
   }
   printf("valoarea cautata nu exista in lista");
}




void actualizare(struct node *head, int val_veche, int val_noua) {
   int pos = 0;
   struct node *current = NULL;
   
   if(head == NULL) {
      printf("lista nu exista");
      
   } 

   current = head;
   while(current!=NULL) {
      pos++;
      
      if(current->data == val_veche) {
         current->data = val_noua;
         
      }

      if(current->next != NULL)
         current = current->next;
      else
         break;
   }
   printf("valoarea cautata nu exista in lista");
}



struct node *adaugare_element_inainte_de_poz_dorita(struct node *head, int data, int position)
{
    struct node *newp = NULL;
    struct node *temp = head;
    struct node *temp2 = NULL;
    newp = adaugare_element_in_lista_goala(newp,data);
    int pos = position;

    while(pos > 2)
    {
        temp = temp->next;
        pos--;
    }

    if(position == 1)
    {
        head = adaugare_element_la_inceput(head,data);
    }
    temp2 = temp->next;
    temp->next = newp;
    temp2->prev = newp;
    newp->next = temp2;
    newp->prev = temp;

    return head;
    
}

struct node *stergere_primul_nod(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(temp);
    temp = NULL;
    head->prev = NULL;
    
    
    
    return head;


}


struct node *stergere_ultimul_nod(struct node *head)
{
    struct node *temp = head;
    struct node *temp2;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);

    return head;
}

struct node *stergere_element_ales(struct node *head, int position)
{
    struct node *temp = head;
    struct node *temp2 = NULL;

    if(position == 1)
    {
        head = stergere_primul_nod(head);
        return head;
    }
    while(position > 1)
    {
        temp = temp->next;
        position--;
    }
    if(temp->next == NULL)
    {
        head = stergere_ultimul_nod(head);
    }
    else
    {
        temp2 = temp->prev;
        temp2->next = temp->next;
        temp->next->prev = temp2;
        free(temp);
        temp = NULL;
    }

    return head;
}


void sortare(struct node *start)
{
    int ok, i;
    struct node *aux;
    struct node *laux = NULL;
  
    if (start == NULL)
        return;
  
    do
    {
        ok = 0;
        aux = start;
  
        while (aux->next != laux)
        {
            if (aux->data > aux->next->data)
            {
                swap(aux->data, aux->next->data);
                ok = 1;
            }
            aux = laux->next;
        }
        laux = aux;
    }
    while (ok);
}



struct node *crearea_unei_intregi_liste_dublu_inlantuite(struct node *head)
{
    int n, data, i;
    printf("introduceti numarul dorit de noduri: ");
    scanf("%d",&n);

    if(n == 0)
    {
        return head;

    }
    printf("introduceti valoarea pentru nodul 1: ");
    scanf("%d",&data);
    head = adaugare_element_in_lista_goala(head,data);

    for(i = 1; i < n; i++)
    {
        printf("introduceti valoarea pentru nodul %d: ", i+1);
        scanf("%d",&data);
        head = adaugare_element_la_sfarsit(head,data);
    }

    return head;
}





int main()
{   
    struct node* head = NULL;
    struct node* ptr;

    // head = adaugare_element_in_lista_goala(head,45);
    // printf("%d\n",head->data);
    // head = adaugare_element_la_inceput(head,34);
    // head = adaugare_element_la_sfarsit(head,21);
    // head = adaugare_element_pe_poz_dorita(head, 458, 2);
    //ptr = head;
    head = crearea_unei_intregi_liste_dublu_inlantuite(head);
//     ptr = head;
// //    while(ptr != NULL)
// //     {
// //         printf("%d ",ptr->data);
// //         ptr = ptr->next;
// //     }
//     printf("\nlista inainte de stergerea primului element\n");
//     afisare(head);
//     head = stergere_primul_nod(head);
//     ptr = head;
//     // while(ptr != NULL)
//     // {
//     //     printf("%d ",ptr->data);
//     //     ptr = ptr->next;
//     // }
//     printf("\nlista dupa stergerea primului element\n");
//     afisare(head);

//     head = stergere_element_ales(head,2);

//     printf("\nlista dupa stergerea unui element ales\n");
//     afisare(head);



    

    


    return 0;
}