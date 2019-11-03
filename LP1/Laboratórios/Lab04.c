#include<stdio.h>
#include<string.h>

#define Q_ALN 20     // Caso seja necessario mudar a quntidade de alunos so mudar aqui
#define TAM 16

        /*Aluno:Romenildo do Vale Ferreira*/

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

    printf("\n  SITUACAO FINAL\n");
    puts("|-----------------------|");
    for(int i =0;i<Q_ALN;i++){
        printf("| %s %s\n",nomes[i][0],nomes[i][1]);
    }
    puts("|-----------------------|");
}


void mostrarAP(char nomes[Q_ALN][2][TAM]){
    //mostrar somente os alunos reprovados

    int ok=0;
    puts("  ALUNOS APROVADOS");
    puts("|-----------------------|");
    for(int i =0;i<Q_ALN;i++){
        if(strcmp(nomes[i][1],"APROVADO")==0){
            printf("| %s \n",nomes[i][0]);
            ok=1;
        }
    }
    if(!ok){
        printf("| NAO HA APROVADOS \n");
    }
    puts("|-----------------------|");
}


void mostrarRE(char nomes[Q_ALN][2][TAM]){
    //mostrar somente os alunos reprovados

    int ok=0;
    puts("  ALUNOS REPROVADOS");
    puts("|-----------------------|");
    for(int i =0;i<Q_ALN;i++){
        if(strcmp(nomes[i][1],"REPROVADO")==0){
            printf("| %s \n",nomes[i][0]);
            ok=1;
        }
    }
    if(!ok){
        printf("| NAO HA REPROVADOS \n");
    }
    puts("|-----------------------|");
}


void procurarAluno(char nomes[Q_ALN][2][TAM]){
    // pedir o nome do aluno e procurar se ele esta aprovado ou reprovado

    int ok=0;
    char aluno[TAM];

    setbuf(stdin,NULL);
    puts("|||  VERIFICAR SITUACAO DO ALUNO  |||");
    printf(" DIGITE O NOME DO ALUNO : ");
    strupr(gets(aluno));
    puts("|-----------------------|");
    for(int i=0;i<Q_ALN;i++){
        if(strcmp(nomes[i][0],aluno)== 0){
            printf("| %s %s \n",nomes[i][0],nomes[i][1]);
            ok=1;
        }
    }
    if(!ok){
        printf("| ALUNO NAO ENCONTRADO \n");
    }
    puts("|-----------------------|");
}


void limpar(void){
    //limpar a tela
    system("cls");
}
void pausa(void){
    //pausar para esperar apertar uma tecla
    system("pause");
}


void menuopcao(void){
    // printar menu de opcoes principal

    puts("|-----------------------|");
    puts("|    MENU DE OPCOES     |");
    puts("|                       |");
    puts("|  1- ADICIONAR ALUNOS  |");
    puts("|  2- MOSTRAR ALUNOS    |");
    puts("|  3- PROCURAR ALUNO    |");
    puts("|  0- SAIR              |");
    puts("|-----------------------|");
}


void menuopcao2(void){
    // printar menu de opcoes da opcao de mostrar alunos

    puts("|-----------------------|");
    puts("|    ESCOLHA UMA OPCAO  |");
    puts("|                       |");
    puts("|  1- MOSTRAR APROVADOS |");
    puts("|  2- MOSTRAR REPROVADOS|");
    puts("|  3- MOSTRAR TODOS     |");
    puts("|  0- VOLTAR            |");
    puts("|-----------------------|");

}


main(){
    char nomes[Q_ALN][2][TAM];
    int stop =0,opcao,opcao2,OK=0; // variavel OK so ativa quando adiciona os nomes dos alunos
    system("color 0B");            // senao iria printar os lixo da memoria caso pedisse para mostrar antes de adicionar

    do{
        limpar();
        menuopcao();
        printf("ESCOLHA: ");scanf("%d",&opcao);

        switch(opcao){

        case 1:
            //adicionar alunos

            nomesAlunos(nomes);
            printf("\n\nALUNOS ADICIONADOS COM SUCESSO!\n");
            OK=1;
            pausa();
            break;

        case 2:
            //mostrar alunos

            if(OK){
                    limpar();
                    menuopcao2();
                    printf("ESCOLHA: ");scanf("%d",&opcao2);

                switch(opcao2){
                case 1:
                    //mostrar aprovados
                    mostrarAP(nomes);
                    pausa();
                    break;
                case 2:
                    //mostrar reprovdos
                    mostrarRE(nomes);
                    pausa();
                    break;
                case 3:
                    //mostrar todos
                    mostrar(nomes);//utilização da função pedida
                    pausa();
                    break;
                case 0:
                    //voltar
                    break;
                default:
                    //digitar uma opcao que nao esta no menu
                    printf("OPCAO INVALIDA!!! VOLTANDO... \n");
                    pausa();
                }

            break;
            }else{
                //caso os alunos ainda nao tiverem sido adicionados
                printf("ALUNOS AINDA NAO FORAM ADICIONADOS!!!\n");
                pausa();
                break;
            }

        case 3:
            //procurar alunos

            if(OK){
                limpar();
                procurarAluno(nomes);
                pausa();
                break;

            }else{
                //caso alunos ainda nao tiverem sido adicionado
                printf("ALUNOS AINDA NAO FORAM ADICIONADOS!!!\n");
                pausa();
                break;
            }

        case 0:
            //SAIR do programa

            stop = 1;
            break;

        default:

            printf("OPCAO INVALIDA!!!\n");
            pausa();
            break;
        }
    }while(!stop);
}
