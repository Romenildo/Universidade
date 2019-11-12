#include <stdio.h>
#include <string.h>
#define MAX_AL 50
#define LIM 15

typedef struct{
    char nome[LIM];
    int numero;
    char grupo[LIM];
    int ativo;
}CONTATO;
CONTATO ag[MAX_AL];

pausa(){
    system("pause");
}
menu(){
    int op,op2,lim=0,on=0;

    do{
        if(lim==0)
         on = 0;//conição quando remover todos os contados ele voltar a mostrar agenda vazia
        //--------------------------------------------------------------------
        system("cls");
        puts("|-------------------------------------------------------|");
        puts(" 1-Adicionar contato  |   5-Mostrar contatos por grupo ");
        puts(" 2-Editar contato     |   6-Mostrar todos os contatos  ");
        printf(" 3-Remover contato    |   *Quantidade de contatos = %d/50\n",lim);
        puts(" 4-Procurar contato   |   0- Sair                      ");
        puts("|-------------------------------------------------------|");
        scanf("%d",&op);
        setbuf(stdin,NULL);
        switch(op){

            case 1:
                if(lim<=50){
                    adicionarContato();
                    lim++;
                    on = 1;
                    break;
                }else{
                    printf("\nAgenda cheia!!\n");
                    system("pause");
                    break;
            }

        case 2:
            if(on ==1){
            editarContato(&ag);
            break;
            }else{
                puts("\nAGENDA VAZIA");
                system("pause");
                break;
            }
        case 3:
            if(on == 1){
                removerAluno(&ag,&lim);
                break;

            }else{
                printf("\n AGENDA VAZIA");
                system("pause");
            }

        case 4:
            if(on ==1){
                procurarContato(&ag);
                break;
            }else{
                printf("AGENDA VAZIA\n");
                break;
            }

        case 5:
            if(on == 1){
                system("cls");
                puts("---Grupos---");
                puts("1-FAMILIA  2-AMIGOS 3-FAMILIA");
                puts("4- ESTUDOS 5-COLEGAS 6-OUTROS");
                printf("digite: ");scanf("%d",&op2);
                setbuf(stdin,NULL);
                char aux[15];
                switch(op2){
                    case 1:
                        printf("---Grupo Familia---");
                        strcpy(aux,"FAMILIA");
                        mostrarGrupo(&ag, aux);
                        system("pause");
                        break;

                    case 2:

                    case 3:

                    case 4:

                    case 5:

                    case 6:

                    default:
                        printf("Escolha Invalida\n");
                        system("pause");
                }


            break;
            }else{
                printf("Todos os Grupos estao vazios");
                break;
            }
        case 6:
            if(on == 1){
            mostrarTodos(&ag);
            break;
            }else{
                puts("\nAGENDA VAZIA");
                system("pause");
                break;
            }
        case 0:
            puts("\nFINALIZANDO PROGRAMA. . .");
            break;
        default:
            printf("Valor Invalido\n");
            getchar();
            break;


    }
    }while(op!=0);


}

void mostrarGrupo(CONTATO *ag, char aux[15]){
    int x=1;
    for(int i=0;i<MAX_AL;i++){
        if(ag[i].ativo==1){
            if(strstr(ag[i].grupo,aux)!= NULL){
                printf("%s\n",ag[i].nome);
                printf("%d\n",ag[i].numero);
                printf("%s\n",ag[i].grupo);
                printf("-----------------\n");
                x=0;
            }
        }
    }
    if(x){
        printf("NAO HA CONTATOS NESSE GRUPO\n");
    }
}
verificarGrupo(char grupo[LIM]){
    strupr(grupo);
    if(strstr(grupo,"FAMILIA")!=NULL){
        return "FAMILIA";
    }
     if(strstr(grupo,"AMIGOS")!=NULL){
        return "AMIGOS";
    }
     if(strstr(grupo,"TRABALHO")!=NULL){
        return "TRABALHO";
    }
     if(strstr(grupo,"ESTUDOS")!=NULL){
        return "ESTUDOS";
    }
     if(strstr(grupo,"COLEGAS")!=NULL){
        return "COLEGAS";
    }
    else
        return "OUTROS";

}

adicionarContato(){
    char nome[LIM];
    int numero;
    char grupo[LIM];
    system("cls");
    printf("ADICIONAR CONTATO\n");
    printf("Num:");scanf("%d",&numero);
    setbuf(stdin,NULL);
    printf("nome:");
    gets(nome);
    setbuf(stdin,NULL);
    puts("Grupos: FAMILIA  AMIGOS  TRABALHO\n        ESTUDOS  COLEGAS e OUTROS");
    printf("grupo: ");gets(grupo);
    strcpy(grupo,verificarGrupo(grupo));
    //comparar grupos
    for(int i=0;i<MAX_AL;i++){
        if(ag[i].ativo == 0){
        ag[i].numero = numero;
        strcpy(ag[i].nome,nome);
        strcpy(ag[i].grupo,grupo);
        ag[i].ativo = 1;
        break;
        }
    }
    system("cls");
    printf("\n\n\n\t %s ADICIONADO COM SUCESSO!!!\n\n\n",strupr(nome));
    system("pause");
}
editarContato(CONTATO *ag){
    char AuxProcurar[15],AuxUpr[15],NOME[15],GRUPO[15];
    int aux=0,x;
    printf("Editar contato\n");
    printf("Nome:");gets(AuxProcurar);
    for(int i=0;i<MAX_AL;i++){
        if(ag[i].ativo==1){
            strcpy(AuxUpr,ag[i].nome);
            strupr(AuxUpr);
            strupr(AuxProcurar);
            if(strstr(AuxUpr,AuxProcurar)!=NULL){

                printf("Nome: %s => ",ag[i].nome);gets(NOME);
                setbuf(stdin,NULL);
                printf("N: %d => ",ag[i].numero);scanf("%d",&aux);
                setbuf(stdin,NULL);
                printf("Grupos: FAMILIA  AMIGOS  TRABALHO\n        ESTUDOS  COLEGAS e OUTROS\n");
                printf("Grupo: %s => ",ag[i].grupo);gets(GRUPO);
                strcpy(GRUPO,verificarGrupo(GRUPO));

                strcpy(ag[i].nome,NOME);
                ag[i].numero = aux;
                strcpy(ag[i].grupo,GRUPO);
                x=0;
                printf("Editado com Sucesso!!!\n");
                system("pause");
                break;
            }else
                x=1;//se nao encontrar o nome
            }
        else
            break;
    }
    if(x){
        printf("Aluno Nao encontrado");
        system("pause");
    }

}

removerAluno(CONTATO *ag, int *lim){
        char AuxProcurar[15],AuxUpr[15];
    int num,aux=100,x=0;
    printf("remover contato\n");
    printf("Nome:");gets(AuxProcurar);
    for(int i=0;i<MAX_AL;i++){
        if(ag[i].ativo==1){
            strcpy(AuxUpr,ag[i].nome);
            strupr(AuxUpr);
            strupr(AuxProcurar);
            if(strstr(AuxUpr,AuxProcurar)!= NULL){
                aux = i;
                *lim=*lim-1;
                printf("Removido com sucesso\n");
                x=0;
                break;
            }
            else{
                x=1;
            }

       }

    }
    if(x){
        printf("Aluno Nao encontrado\n");
    }
    ag[aux].ativo=0;
    system("pause");

}

procurarContato(CONTATO *ag){
char AuxProcurar[15],AuxUpr[15];
    int num,x=0;
    printf("Procurar contato\n");
    printf("Nome:");gets(AuxProcurar);
    for(int i=0;i<MAX_AL;i++){
        if(ag[i].ativo==1){
            strcpy(AuxUpr,ag[i].nome);
            strupr(AuxUpr);
            strupr(AuxProcurar);
            if(strstr(AuxUpr,AuxProcurar)!= NULL){
                    printf("%s\n",ag[i].nome);
                    printf("%d\n",ag[i].numero);
                    printf("%s\n",ag[i].grupo);
                    x=0;
                    break;
            }else
                x=1;

}
    }
    if(x){
        printf("Aluno nao encontrado");
    }
    system("pause");
}


mostrarTodos(CONTATO *ag){

    for(int i=0;i<MAX_AL;i++){
        if(ag[i].ativo==1){
        printf("%s\n",ag[i].nome);
        printf("%d\n",ag[i].numero);
        printf("%s\n",ag[i].grupo);
        printf("-----------------\n");
        }
    }
    system("pause");

}
main(){

    menu();

}

