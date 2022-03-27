#include <stdlib.h>
#include <stdio.h>
#define TAM 4

int valor, valor2, qtde=0, qtde2=0;
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

void moda(Lista *atual, Lista *prox){ 
    if (atual->n == prox->n){
        if (valor == atual->n){
            qtde++;
        } else if(valor2 == atual->n){
            qtde2++;
            if(qtde<qtde2){
                valor = atual->n;
                qtde = qtde2;
            }
        }        
    }
    
}


int main(){
    
    int total = 0;

    Lista *raiz, *atual, *temp;
    raiz = (Lista *)malloc(sizeof(Lista)); 
    scanf("%d", &raiz->n);
    total += raiz->n;
    raiz->prox=0;
    atual = raiz;
    for (int i = 0; i < TAM; i++){
        temp = (Lista *)malloc(sizeof(Lista));
        atual->prox=temp;
        //temp->n=atual->n+1;
        scanf("%d", &temp->n);
        total += temp->n;
        temp->prox=0;
        atual = temp;
    }

    float media =(float)total/TAM+1;

    printf("MEDIA %1.f\n", media);
    imprimir(raiz);
    valor = raiz->n;
    moda(raiz, raiz->prox);

}