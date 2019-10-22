/*escreva um programa que leia 10 numeros inteiros e os armazene em um vetor.
imprima o vetor, o maior elemento e a posição que ele se encontra.*/

#include <stdio.h>
const int tam=10;
main(){
    int i,local,maior,vetor[tam];
    //criar a lista com valores informados
    for(i=0;i<tam;i++){
        printf("Digite o valor para a posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }

    maior = vetor[0];

    for(i=0;i<tam;i++){

        if (vetor[i]>maior){
            maior = vetor[i];
            local = i;
        }
    }

    for(i=0;i<tam;i++)
        printf("%d ",vetor[i]);
    printf("\n");
    printf("maior elemento eh %d e ta na posicao %d",maior,local);


}

