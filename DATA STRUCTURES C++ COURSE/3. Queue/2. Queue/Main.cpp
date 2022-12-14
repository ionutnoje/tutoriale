#include <stdio.h>
#include <stdlib.h>
  
struct node {
    int cheie;
    struct node* next;
};
  
struct coada {
    struct node *fata;
    struct node *spate;
};
  
struct node* nodnou(int cheie)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->cheie = cheie;
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
  
void inserare(struct coada* c, int cheie)
{
    struct node* temp = nodnou(cheie);
  
    if (c->spate == NULL) {//daca asta este singurul element
        c->fata = c->spate = temp;
    }
  
    //cand deja avem elemente in coada

    c->spate->next = temp;
    c->spate = temp;
}
  
void stergere(struct coada* c)
{
    // struct node* temp = c->fata;

    // if (c->fata == NULL)//daca primul element nu exista, nu avem ce sterge
    //     {
    //         printf("nu se poate efectua stergerea\n");
    //     }
    
    // if(c->fata->next == NULL)
    // {
    //     free(temp);
    // }
    // else
    // {
    //     c->fata = c->fata->next;
    
    //     free(temp);
    // }


    if (c->fata == NULL)//daca primul element nu exista, nu avem ce sterge
        printf("nu se poate efectua stergerea\n");

    struct node* temp = c->fata;
  
    c->fata = c->fata->next;
  
    if (c->fata == NULL)
        c->spate = NULL;
  
    free(temp);
}

void afisare_coada(struct coada* c)
 {   //int index = 0;
//     if(c->fata == NULL)
//     {
//         printf("coada este goala\n");
//     }
//     printf("\nfront(elementul %d) : %d ",index, c->fata->cheie);
//     index++;
//     while(c->fata->next != c->spate)
//     {   
//         c->fata = c->fata->next;
//         printf("\n      elementul %d  : %d",index, c->fata->cheie);
//         index = index + 1;
//     }
//     printf("\nback (elementul %d) : %d",index++, c->spate->cheie);
    

    if(c->fata == NULL)
    {
        printf("coada este goala\n");
    }
    printf("fata : %d \n", c->fata->cheie);
    printf("spate : %d", c->spate->cheie);

}

void afisare_coada2(struct coada* c)
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
                printf("\nindex %d:  %d", i, p->cheie);
                i++;
            }
        }    
    }
}




int main()
{
    struct coada* c ;
   

    int optiune,init = 0;
    int val;
    
    MENIU:

    printf("\n");

    printf("\n");


    printf("MENIU Cozii: \n");
    printf("1. Initializare coada\n");
    printf("2. Inserare valoare\n");
    printf("3. Stergere valoare\n");
    printf("4. Afisare lista\n");
    printf("5. Iesire din program\n");


    

    printf("\nIntroduceti valoarea pentru actiunea dorita: ");
    scanf("%d",&optiune);
    if(optiune < 1 || optiune > 5)
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
        inserare(c,val);
        printf("\n");
        goto MENIU;

    }
    else if(optiune == 3)
    {
        stergere(c);
        printf("\n");
        goto MENIU;
    }
    else if(optiune == 4)
    {
        afisare_coada2(c);
        printf("\n");
        goto MENIU;
    }
   
    else if(optiune == 5)
    {
        printf("programul a fost oprit");
        return 0;
    }
    
    


   


    return 0;
}



// int main()

// {

// int meniu,submeniu,info_nou;

// nod* LIST; // pointer catre capul listei.

// do

//    {

//    cout<<"0 - Iesire"<<endl;

//    cout<<"1 - Initializare"<<endl;

//    cout<<"2 - Inserare in LSI"<<endl;

//    cout<<"3 - Stergere din LSI"<<endl;

//    cout<<"4 - Actualizare (modificare)"<<endl;

//    cout<<"5 - Afisare"<<endl;

//    cout<<"6 - Cautare"<<endl;

//    cout<<"7 - Eliberare din LSI"<<endl;

//    cin>>meniu;

//        switch(meniu)

//        {

//        case 1:{

//            LIST=NULL;

//            LIST = initializareLSI(LIST);break;}

//        case 2:

//            {

//            cout<<"Instr. de inserare in lista"<<endl;

//            do

//            {

//                cout<<"0. Revenire la meniul principal"<<endl;

//                cout<<"1. Inserare la inceput"<<endl;

//                cout<<"2. Inserare la sfarsit"<<endl;

//                cout<<"3. Inserare la mijloc"<<endl;

//                cout<<"Alegeti varianta dorita (0-3)"<<endl;

//                cin>>submeniu;

//                switch (submeniu)

//                {

//                    case 0:{

//                            cout<<"Revenire la meniul principal";

//                            break;

//                            }

//                    case 1:{

//                            cout<<"Inserare la inceputul listei"<<endl;

//                            cout<<"Introduceti valoare de inserat:"<<endl;

//                            cin>>info_nou;

//                            LIST=inserare_inceputLSI(LIST,info_nou);

//                            break;

//                            }

//                    case 2:{

//                            cout<<"Inserare la sfarsitul listei";

//                            cin>>info_nou;

//                            LIST=inserare_sfarsitLSI(LIST,info_nou);

//                            break;

//                            }

//                    case 3:{

//                            cout<<"Inserare la mijlocul listei";

//                            break;

//                            }

//                    default:{

//                            cout<<"Varianta gresita"<<endl;

//                            }

//                }





//            }

//            while (submeniu!=0);

//            break;

//            }

//        case 3:

//                 {

//                 do{

//                cout<<"0. Revenire la meniul principal"<<endl;

//                cout<<"1. Stergere la inceput"<<endl;

//                cout<<"2. Stergere la sfarsit"<<endl;

//                cout<<"3. Stergere la mijloc"<<endl;

//                cout<<"Alegeti varianta dorita (0-3)"<<endl;

//                cin>>submeniu;

//                switch (submeniu)

//                {

//                    case 0:{

//                            cout<<"Revenire la meniul principal";

//                            break;

//                            }

//                    case 1:{

//                            cout<<"Stergere la inceputul listei";



//                            break;

//                            }

//                    case 2:{

//                            cout<<"Stergere la sfarsitul listei";

//                            LIST=stergere_sfarsitLSI(LIST);