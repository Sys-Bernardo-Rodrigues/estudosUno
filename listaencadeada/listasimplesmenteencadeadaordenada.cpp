#include <stdio.h>
#include <cstdlib>
#define TAM 4
typedef struct strLista{
    int n;
    strLista *prox;
} Lista;

void imprimir(Lista *l){
    if(l){
        printf("Num %d\n",l->n);
        imprimir(l->prox);
    }
}

Lista *ordenar(Lista *p) {

    Lista *axx = p;
    Lista *t;
    int c;

    if (p == NULL || p->prox == NULL)
        return NULL;

    while (axx != NULL) {
        t = axx->prox;
        while (t != NULL) {
            if (axx->n > t->n) {
                c = axx->n;
                axx->n = t->n;
                t->n = c;
            }
            t = t->prox;
        }
        axx = axx->prox;
    }
    return p;
}


int main(){
    Lista *raiz, *atual, *temp;
    raiz = (Lista *)malloc(sizeof(Lista));
    printf("|Digite um n: |\n");
    scanf("%d", &raiz->n);
    raiz->prox = 0;
    atual = raiz;

    for(int i=0; i<TAM;i++){
        temp = (Lista *)malloc(sizeof(Lista));
        atual->prox = temp;
        printf("Digite um valor\n");
        scanf("%d", &temp->n);
        temp->prox = 0;
        atual = temp;
    }
    
      
    printf("----------\n");printf("DADOS ENVIADOS\n");printf("----------\n");
    imprimir(raiz);//imprime a lista
    printf("----------\n");printf("Ordenado\n");printf("----------\n");
    ordenar(raiz);//ordenar a lista
    imprimir(raiz);
}