#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  //necessaria para o malloc
#include <string.h> //necessaria para o strcmp
#include "lse.h"

PtNo* cria_lista(void)
{
       return NULL;
}

PtNo* insere_ord (PtNo* l, int num)
{
       PtNo *novo; //novo elemento
       PtNo *ant = NULL; //ponteiro auxiliar para a posi��o anterior
       PtNo *ptaux = l; //ponteiro auxiliar para percorrer a lista

       /*aloca um novo nodo */
       novo = (PtNo*) malloc(sizeof(PtNo));

       /*procurando a posi��o de inser��o*/
       while (ptaux!=NULL && ptaux->numero == num) //se ptaux.numero == num
       {
             ant = ptaux;
             ptaux = ptaux->prox;
       }

       /*encaeia o elemento*/
       if (ant == NULL) /*o anterior n�o existe, logo o elemento ser� inserido na primeira posi��o*/
       {
             //  puts("inserindo primeiro");
               novo->prox = l;
               l = novo;
       }
       else /*elemento inserido no meio da lista*/
       {
            novo->prox = ant->prox;
            ant->prox = novo;
       }

       return l;
}
