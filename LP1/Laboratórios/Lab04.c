#include<stdio.h>
#include<string.h>

#define Q_ALN 20     // Caso seja necessario mudar a quntidade de alunos so mudar aqui
#define TAM 16

char *alunoSituacao(char *nome[TAM]){
    // pede as notas e verifica a situacao do aluno se APROVADO( >7) ou REPROVADO(<7)

    float media=0,nota,aux=0;

    for(int i=0;i<4;i++){

        printf("NOTA %d ",i+1);scanf("%f",&nota);
        while(nota > 10 || nota < 0){//tratamento para nota ficar entre 0 à 10;
            printf("VALOR DA NOTA INVALIDA!! DIGITE NOVAMENTE!!! \n");
            printf("NOTA %d ",i+1);scanf("%f",&nota);
        }
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
    // pedir o nome dos alunos e chamar outra funcao para situacao do aluno

    puts(">>>> INSIRA OS DADOS DOS ALUNOS");
    for(int i=0;i<Q_ALN;i++){
        setbuf(stdin,NULL);
        printf("NOME ");
        strupr(gets(nomes[i][0]));
        strcpy(nomes[i][1],alunoSituacao(&nomes[i][0]));
        }


}

void mostrar(char nomes[Q_ALN][2][TAM]){
    //printar nome e situação de todos os alunos

    printf("\n>>>> SITUACAO FINAL\n");
    for(int i =0;i<Q_ALN;i++){
        printf("%s %s\n",nomes[i][0],nomes[i][1]);
    }
}



main(){
    char nomes[Q_ALN][2][TAM];
    int stop =0,opcao,OKmostrar=0;
    system("color 0B");

    do{
        system("cls");
        puts("|-----------------------|");
        puts("|    MENU DE OPCOES     |");
        puts("|                       |");
        puts("|  1- ADICIONAR ALUNOS  |");
        puts("|  2- MOSTRAR ALUNOS    |");
        puts("|  3- SAIR              |");
        puts("|-----------------------|");
        printf("ESCOLHA: ");scanf("%d",&opcao);

        switch(opcao){

        case 1:
            nomesAlunos(nomes);
            printf("\n\nALUNOS ADICIONADOS COM SUCESSO!\n");
            OKmostrar=1;
            system("pause");
            break;

        case 2:
            if(OKmostrar){
            mostrar(nomes);
            system("pause");
            break;
            }else{
                printf("ALUNOS AINDA NAO FORAM ADICIONADOS!!!\n");
                system("pause");
                break;
            }

        case 3:
            stop = 1;
            break;

        default:
            printf("OPCAO INVALIDA!!!\n");
            system("pause");
            break;
        }



    }while(!stop);
}
