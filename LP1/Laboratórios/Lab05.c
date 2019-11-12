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

menu(){
    int op,lim=0,on=0;
    do{
    system("cls");
    puts("|-------------------------------------------------------|");
    puts(" 1-Adicionar contato  |   5-Mostrar contatos por grupo ");
    puts(" 2-Editar contato     |   6-Mostrar todos os contatos  ");
    printf(" 3-Remover contato    |   7-Quantidade de contatos = %d \n",lim);
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
                removerAluno(&ag);
                lim--;
                break;

            }else{
                printf("\n AGENDA VAZIA");
                system("pause");
            }
            
        case 4:
            if(on ==1){
                procurarContato(&ag);
            }else{
                printf("AGENDA VAZIA\n");
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
    strupr(grupo);
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
}
editarContato(CONTATO *ag){
    char AuxProcurar[15],AuxUpr[15],aux[2][15];
    int num;
    printf("Editar contato\n");
    printf("Nome:");gets(AuxProcurar);
    for(int i=0;i<MAX_AL;i++){
        if(ag[i].ativo==1){
            strcpy(AuxUpr,ag[i].nome);
            strupr(AuxUpr);
            strupr(AuxProcurar);
            if(strcmp(AuxUpr,AuxProcurar)==0){

                printf("%s : = ",ag[i].nome);gets(aux[0]);
                setbuf(stdin,NULL);
                printf("%d : = ",ag[i].numero);scanf("%d",num);
                setbuf(stdin,NULL);
                puts("Grupos: FAMILIA  AMIGOS  TRABALHO\n        ESTUDOS  COLEGAS e OUTROS");
                printf("%s : = ",ag[i].grupo);gets(aux[1]);strupr(aux[1]);

                strcpy(ag[i].nome,aux[0]);
                ag[i].numero = num;
                strcpy(ag[i].grupo,aux[1]);

            }else{
                printf("Nome não Encontrado na agenda\n");
                system("pause");
                break;
            }
        }else
            break;
    }

}

removerAluno(CONTATO *ag){
        char AuxProcurar[15],AuxUpr[15];
    int num,aux=100;
    printf("remover contato\n");
    printf("Nome:");gets(AuxProcurar);
    for(int i=0;i<MAX_AL;i++){
        if(ag[i].ativo==1){
            strcpy(AuxUpr,ag[i].nome);
            strupr(AuxUpr);
            strupr(AuxProcurar);
            if(strcmp(AuxUpr,AuxProcurar)== 0){
                aux = i;
                break;
            }
            else{
                printf("Aluno Não Encontrado!!!");
                break;
            }


       }
    }
    ag[aux].ativo=0;
}

procurarContato(CONTATO *ag){
char AuxProcurar[15],AuxUpr[15];
    int num,aux=100;
    printf("Procurar contato\n");
    printf("Nome:");gets(AuxProcurar);
    for(int i=0;i<MAX_AL;i++){
        if(ag[i].ativo==1){
            strcpy(AuxUpr,ag[i].nome);
            strupr(AuxUpr);
            strupr(AuxProcurar);
            if(strcmp(AuxUpr,AuxProcurar)== 0){
                        printf("%s\n",ag[i].nome);
                    printf("%d\n",ag[i].numero);
                    printf("%s\n",ag[i].grupo);

            }else{
                printf("COntato nao Enncontrado");
            }



}
    }
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

