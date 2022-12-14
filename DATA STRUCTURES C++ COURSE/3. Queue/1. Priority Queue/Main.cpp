#include <stdio.h>
#include <stdlib.h>
  
struct node {
    int cheie;
    int prioritate;
    struct node* next;
};
  
struct coada {
    struct node *fata;
    struct node *spate;
};
  
struct node* nodnou(int cheie,int val_prioritate)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->cheie = cheie;
    temp->prioritate = val_prioritate;
    temp->next = NULL;
    return temp;
}
  
struct coada* crearecoada()
{
    struct coada* c = (struct coada*)malloc(sizeof(struct coada));
    c->fata = NULL;
    c->spate = NULL;
    return c;
}
  
void inserare(struct coada* c, int cheie, int val_prioritate)
{
    struct node* temp = nodnou(cheie,val_prioritate);
  
    if (c->spate == NULL) {//daca asta este singurul element
        c->fata = c->spate = temp;
    }
  
    //cand deja avem elemente in coada

    c->spate->next = temp;
    c->spate = temp;
}

void inserare_cu_prioritate(struct coada*  c, int cheie,int prioritate)
{
    struct node* temp = nodnou(cheie,prioritate);
  
    if (c->spate == NULL) {//daca asta este singurul element
        c->fata = c->spate = temp;
    }
  
    //cand deja avem elemente in coada

    c->spate->next = temp;
    c->spate = temp;
}
  
void stergere(struct coada* c)
{
    if (c->fata == NULL)//daca primul element nu exista, nu avem ce sterge
        printf("nu se poate efectua stergerea\n");

    struct node* temp = c->fata;
  
    c->fata = c->fata->next;
  
    if (c->fata == NULL)
        c->spate = NULL;
  
    free(temp);
}


void stergere_cu_prioritate(struct coada* c)
{   int index = -1;

    if(c)
    {
        if(c->fata == NULL)
            printf("\ncoada este goala");

        else
        {
            
            for(struct node* p = c->fata; p != NULL; p = p->next)
            {
                if(p->prioritate > 0)
                {
                    index=index+1;
                    // printf("prioritatea este: %d", index);
                    break;

                }
            }
        }  
    }
}



void afisare_coada(struct coada* c)
{
    if(c->fata == NULL)
    {
        printf("coada este goala\n");
    }
    printf("fata : %d \n", c->fata->cheie);
    printf("spate : %d", c->spate->cheie);
    
    
}



void afisare_coada2(struct coada* c)
{   int index = 0;
    if(c->fata == NULL)
    {
        printf("coada este goala\n");
    }
    printf("\nfront(elementul %d) : %d, priotitate: %d ",index, c->fata->cheie,c->fata->prioritate);
    index++;
    while(c->fata->next != c->spate)
    {   
        c->fata = c->fata->next;
        printf("\n      elementul %d  : %d, prioritate: %d",index, c->fata->cheie,c->fata->prioritate);
        index = index + 1;
    }
    printf("\nback (elementul %d) : %d, priotitate: %d",index++, c->spate->cheie,c->fata->prioritate);
    

}

void afisare_coada3(struct coada* c)
{
    if(c)
    {
        if(c->fata == NULL)
            printf("\ncoada este goala");

        else
        {
            int i = 0;
            for(struct node* p = c->fata; p != NULL; p = p->next)
            {
                printf("\nindex %d:  %d, priority: %d", i, p->cheie, p->prioritate);
                i++;
            }
        }    
    }
}
    

void cautare(struct coada *c)
{       
    int prioritate_max = 0;

    if(c)
    {
        if(c->fata == NULL)
            printf("\ncoada este goala");

        else
        {
            
            for(struct node* p = c->fata; p != NULL; p = p->next)
            {
                if(p->prioritate > prioritate_max)
                    prioritate_max = p->prioritate;
                
            }
            printf("cea mai mare prioritate este: %d\n",prioritate_max);
        }  
        for(struct node* p = c->fata; p != NULL; p = p->next)
            {
                if(p->prioritate == prioritate_max)
                    printf("elementul cu prioritatea cea mai mare este: %d",p->cheie);
                
            }  
    }
    
}


int main()
{
    struct coada* c ;
   

    int optiune,init = 0;
    int val,val_prioritate;
    
    MENIU:

    printf("\n");

    printf("\n");


    printf("MENIUL Cozii: \n");
    printf("1. Initializare coada\n");
    printf("2. Inserare valoare cu prioritate 0\n");
    printf("3. Inserare valoare cu prioritate mai mare\n");
    printf("4. Stergere valoare\n");
    printf("5. Stergere valoare cu prioritate\n");
    printf("6. Elementul cu cea mai mare prioritate\n");
    printf("7. Afisare lista\n");
    printf("8. Iesire din program\n");


    

    printf("\nIntroduceti valoarea pentru actiunea dorita: ");
    scanf("%d",&optiune);
    if(optiune < 1 || optiune > 7)
    {
        printf("ATI INTRODUS O VALOARE GRESITA\n");
        return 0;
        goto MENIU;
    }
    if(optiune == 1)
    {
        if(init <= 0)
        {
        c = crearecoada(); 
        printf("\n");
        init = init + 1;
        printf("coada a fost initializata");
        }
        else
        {
            
            printf("coada A FOST DEJA INITIALIZATA\n\n");
        }
        goto MENIU;
        
    }
    else if(optiune == 2)
    {
        printf("introduceti valoarea:");
        scanf("%d", &val);
        inserare(c,val,0);
        printf("\n");
        goto MENIU;

    }
    else if(optiune == 3)
    {
        printf("introduceti valoarea:");
        scanf("%d", &val);
        printf("introduceti valoarea prioritatii:");
        scanf("%d",&val_prioritate);
        inserare(c,val,val_prioritate);
        printf("\n");
        goto MENIU;

    }
    else if(optiune == 4)
    {
        stergere(c);
        printf("\n");
        goto MENIU;
    }
    else if(optiune == 5)
    {
        stergere(c);
        printf("\n");
        goto MENIU;
    }
    else if(optiune == 6)
    {
        cautare(c);
        printf("\n");
        goto MENIU;
    }

    else if(optiune == 7)
    {
        afisare_coada3(c);
        printf("\n");
        goto MENIU;
    }
   
    else if(optiune == 8)
    {
        printf("programul a fost oprit");
        return 0;
    }
    
    


   


    return 0;
}

