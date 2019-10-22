/*Faça um programa que leia um vetor de 8 posições e em seguida leia tambem dois valores x e y
quaisquer correspondentes a duas posições no vetor. ao final seu programa deverá escrever
a soma dos valores encontrados nas respectivas posições x e y*/

#include <stdio.h>
const int tam=8;
main(){
    int i,x,y,vetor[tam];
    //criar a lista com valores informados
    for(i=0;i<tam;i++){
        printf("Digite o valor para a posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }
    // ler 2 valores
    printf("Digite os valores de X e Y: ");
    scanf("%d %d",&x,&y);

        //printar os valores das posições informadas
    printf("%d e %d",vetor[x],vetor[y]);
}
