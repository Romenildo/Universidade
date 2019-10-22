/*crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos*/

#include <stdio.h>

main(){
    int i,A[6];

    //criar a lista com valores informados
    for(i=0;i<6;i++){
        printf("Digite o valor para a posicao %d: ",i);
        scanf("%d",&A[i]);
    }
    //printar a lista
   for (i=0;i<6;i++)
    printf("%d ",A[i]);

}
