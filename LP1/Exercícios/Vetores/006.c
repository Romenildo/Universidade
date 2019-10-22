/*faça um programa que receba do usuario um vetor com 10 posições.
em seguida devera ser impresso o maior e omenor elemento do vetor.*/

#include <stdio.h>
const int tam=10;
main(){
    int i,menor,maior,vetor[tam];
    //criar a lista com valores informados
    for(i=0;i<tam;i++){
        printf("Digite o valor para a posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }

    menor = vetor[0]; // definir logo os menores e maiores.OBS fora do laço. . .
    maior = vetor[0];

    for(i=0;i<tam;i++){
            // verifica se o 1 elemento e menor do que os demais, se nao for o ele recebera o menor
        if(vetor[i]<menor)
            menor = vetor[i];

            // mesmo do de cima
        if (vetor[i]>maior)
            maior = vetor[i];
    }

    printf("%d eh o menor e %d o maior ",menor, maior);


}

