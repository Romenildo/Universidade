/*crie um programa que lê 6 valores inteiros e,
em seguida mostre na tela os valores lidos na ordem inversa*/

#include <stdio.h>
const int tam=8;
main(){
    int i,vetor[tam];
    //criar a lista com valores informados
    for(i=0;i<tam;i++){
        printf("Digite o valor para a posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }
    // for começa do final da lista e vai diminuindo 1 em 1
    for(i=tam-1;i>=0;i--){
        printf("%d ",vetor[i]);
    }

}

