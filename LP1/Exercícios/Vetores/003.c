/*Ler um conjunto de numeros reais, armazenando-o em vetor
 e calcular o quadrado das componentes deste vetor,
 armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>
#define TAM 10
main(){
    float vetor1[TAM],quadrado[TAM];
    int i;

    //criar a lista com valores informados
    for(i=0;i<TAM;i++){
        printf("Digite o valor para a posicao %d: ",i);
        scanf("%f",&vetor1[i]);
    }
    //transportar o quadrado da lista para outra
    for (i=0;i<TAM;i++)
        quadrado[i] = vetor1[i]*vetor1[i];
    //printar o 1 vetor
    for (i=0;i<TAM;i++)
        printf("%.1f ",vetor1[i]);
    printf("\n");

    //printar o resultado ao quadrado
   for(i=0;i<TAM;i++)
    printf("%.1f ",quadrado[i]);

}
