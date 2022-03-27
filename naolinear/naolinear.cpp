#include <stdlib.h>
#include <stdio.h>
#define TAM 10
typedef struct strLista{ //struct lista
    int n;
    strLista *prox;
} Lista;

void imprimir(Lista *l){ //imprime a lista
    if (l){
        printf("Numero: %d\n",l->n);
        imprimir(l->prox);
    }   
}


int main(){
    Lista *raiz, *atual, *temp;
    raiz = (Lista *)malloc(sizeof(Lista)); 
    raiz->n=0;
    raiz->prox=0;
    atual = raiz;
    for (int i = 0; i < TAM; i++){
        temp = (Lista *)malloc(sizeof(Lista));
        atual->prox=temp;
        temp->n=atual->n+1;
        temp->prox=0;
        atual = temp;
    }

    imprimir(raiz);

}