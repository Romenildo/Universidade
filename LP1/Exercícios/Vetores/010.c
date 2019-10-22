/* faça um programa para ler a nota da prova de 15 alunos e armazene num vetor , calcule e imprima a média geral*/

#include <stdio.h>
#define tam 15
main(){
    float notas[tam],count=0,media;
    int i;

    for (i=0;i<tam;i++){
        printf("Digite a nota do %d aluno: ",i+1);
        scanf("%f",&notas[i]);
    }

    for(i=0;i<tam;i++)
        count +=notas[i];

    media = count/tam;

    printf("%.1f eh a media total",media);



}
