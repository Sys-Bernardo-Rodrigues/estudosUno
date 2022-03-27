#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


/*Desenvolver um algoritimo que crie um vetor de 5 posições
no main e passe como parâmetro para uma função que receba e 
insira valores no vetor, depois no main imprema os 
valores OBS.: Não usar return */


using namespace std;
#define TAM 5

void leitura(int * z){ //reecbe vetor como ponteiro
    int i=0;
    while(i<TAM){
        scanf("%d",z);//le valores e insere no vetor
        z++;//incrementa indice de memoria
        i++;//incrementa indice de controle
    }
}
int main(){
    int vt[TAM];
    leitura(&vt[0]);
    for(int i=0; i<TAM; i++){ //passa primeira posição do vetor para a função como ponteiro
        printf("%d ",vt[i]);
    }
    return 0;
}