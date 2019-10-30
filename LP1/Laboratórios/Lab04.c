#include<stdio.h>
#include<string.h>
#define Q_ALN 3
#define TAM 16

char *alunoSituacao(char nome[TAM]){
    float media=0,nota,aux=0;

    for(int i=0;i<4;i++){

        printf("NOTA %d ",i+1);scanf("%f",&nota);
        aux += nota;
    }
    media = aux/4;
    printf("\n>>>>MEDIA DE %s: %.2f\n\n",nome,media);
    if(media>= 7)
        return "APROVADO";
    else
        return "REPROVADO";

}

void nomesAlunos(char nomes[Q_ALN][2][16]){

    puts(">>>> INSIRA OS DADOS DOS ALUNOS");
    for(int i=0;i<Q_ALN;i++){
        setbuf(stdin,NULL);
        printf("NOME ");gets(nomes[i][0]);
        strupr(nomes[i][0]);
        strcpy(nomes[i][1],alunoSituacao(nomes[i][0]));
        }


}

void mostrar(char nomes[Q_ALN][2][TAM]){

    printf("\n>>>> SITUACAO FINAL\n");
    for(int i =0;i<Q_ALN;i++){
        printf("%s %s\n",nomes[i][0],nomes[i][1]);
    }


}



main(){
    char nomes[Q_ALN][2][TAM];
    nomesAlunos(nomes);
    mostrar(nomes);

}
