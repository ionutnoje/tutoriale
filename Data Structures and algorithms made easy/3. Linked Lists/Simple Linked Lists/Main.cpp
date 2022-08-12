#include <iostream>

using namespace std;

typedef struct nod {
    int info;               
    nod* succesor = NULL;
}nod;

nod* initializare_lsi(int info_nou)
{
    nod* nod_nou = (nod*)malloc(sizeof(nod) * 1);
    nod_nou->info = info_nou;
    nod_nou->succesor = NULL;

    return nod_nou;
}

nod* inserare_sfarsit_lsi(nod* lista, int info_nou)
{
    if (lista == NULL)
    {
        nod* nod_nou = initializare_lsi(info_nou);
        return nod_nou;
    }
    else {

        nod* tmp = lista;

        while (tmp->succesor != NULL)
        {
            tmp = tmp->succesor;
        }

        nod* nod_nou = initializare_lsi(info_nou);
        tmp->succesor = nod_nou;

        return lista;
    }
}

nod* stergere_sfarsit_lsi(nod* lista)
{
    if (lista == NULL)
    {
        return NULL;
    }
    else
    {
        nod* tmp = lista;

        while (tmp->succesor->succesor != NULL)
        {
            tmp = tmp->succesor;
        }

        tmp->succesor = NULL;

        return lista;
    }
}

nod* cautare_lsi(nod* lista, int info_cautat)
{
    nod* tmp = lista;

    while (tmp->succesor != NULL)
    {
        if (tmp->info == info_cautat)
        {
            return tmp;
        }
        else {
            tmp = tmp->succesor;
        }
    }

    return NULL;
}

void afisare_lsi(nod* lista)
{
    while (lista != NULL)
    {   
        printf("Nod %d\n", lista->info);

        lista = lista->succesor;
    }
    printf("\n");
}

int main()
{
    nod* lista = initializare_lsi(43);
    lista = inserare_sfarsit_lsi(lista, 54);
    lista = inserare_sfarsit_lsi(lista, 62);
    afisare_lsi(lista);

    lista = stergere_sfarsit_lsi(lista);
    afisare_lsi(lista);

    nod* gasit = cautare_lsi(lista, 43);

    if (gasit) {
        printf("Nodul a fost gasit.\n");
    }
    else {
        printf("Nodul nu a fost gasit\n");
    }

    gasit = cautare_lsi(lista, 1);
    if (gasit) {
        printf("Nodul a fost gasit.\n");
    }
    else {
        printf("Nodul nu a fost gasit\n");
    }

    return 0;
}