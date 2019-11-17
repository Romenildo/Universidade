#include <stdio.h>
#include <string.h>
#define LIM_AG 2
#define LIM 15


typedef struct{
    //STRUCT PARA OS DADOS DO CONTATO DO USUARIO
    char nome[LIM];
    int numero;
    char grupo[LIM];
    int ativo;
}CONTATO;

CONTATO ag[LIM_AG];


menu(){
    int op,op2,lim=0,on=0;//LIM = CONTADOR DE CONTATOS DA AGENDA/ ON= SE TIVER CONTATO NA AGENDA

    do{
        if(lim==0)
         on = 0;//CONDIÇÃO QUANDO REMOVER TODOS OS CONTATOS ELE VOLTAR A MOSRAR A AGENDA VAZIA
        //--------------------------------------------------------------------
        system("cls");
        puts("|-------------------------------------------------------|");
        puts(" 1-Adicionar contato  |   5-Mostrar contatos por grupo ");
        puts(" 2-Editar contato     |   6-Mostrar todos os contatos  ");
        printf(" 3-Remover contato    |   *Quantidade de contatos = %d/%d\n",lim,LIM_AG);
        puts(" 4-Procurar contato   |   0- Sair                      ");
        puts("|-------------------------------------------------------|");
        scanf("%d",&op);
        setbuf(stdin,NULL);
        switch(op){

            case 1://ADICIONAR CONTATO
                if(lim<LIM_AG){//LIMITTE DE 50 CONTATOS NA AGENDA
                    adicionarContato();
                    lim++;//ADICIONAR MAIS 1 NO TAMANHO DA AGENDA
                    on = 1;//EXISTE AO MENOS 1 CONTATO NA AGENDA
                    if(lim>1){
                        ordenarContatos(&ag,lim);//ORDENAR OS NOMES EM ORDEM ALFABETICA
                    }
                    break;
                }else{//CASO TENHA ATINGIDO O LIMITE NA AGENDA
                    printf("\nAgenda cheia!!\n");
                    system("pause");
                    break;
            }

        case 2://EDITAR CONTATO
            if(on ==1){//SE EXISTIR CONTATO NA AGENDA
            editarContato(&ag);
            break;
            }else{
                puts("\nAGENDA VAZIA");
                system("pause");
                break;
            }

        case 3://REMOVER CONTATO DA AGENDA
            if(on == 1){//SE EXISTIR CONTATO NA AGENDA
                removerContato(&ag,&lim);
                break;

            }else{
                printf("\n AGENDA VAZIA\n");
                system("pause");
                break;
            }

        case 4://PROCURAR CONTATO NA AGENDA
            if(on ==1){
                procurarContato(&ag);
                break;
            }else{
                printf("AGENDA VAZIA\n");
                system("pause");
                break;
            }

        case 5://MOSTRAR CONTATOS POR GRUPO
            if(on == 1){
                system("cls");
                puts("---Grupos---");
                puts("1-FAMILIA  2-AMIGOS 3-TRABALHO");
                puts("4- ESTUDOS 5-COLEGAS 6-OUTROS");
                printf("digite: ");scanf("%d",&op2);
                setbuf(stdin,NULL);
                char aux[15];

                switch(op2){//SWITCH SEGUNDO MENU MOSTRAR POR GRUPOS
                    case 1:
                        printf("---Grupo Familia---\n");
                        strcpy(aux,"FAMILIA");
                        mostrarGrupo(&ag, aux);
                        system("pause");
                        break;

                    case 2:
                        printf("---Grupo Amigos---\n");
                        strcpy(aux,"AMIGOS");
                        mostrarGrupo(&ag, aux);
                        system("pause");
                        break;

                    case 3:
                        printf("---Grupo TRABALHO---\n");
                        strcpy(aux,"TRABALHO");
                        mostrarGrupo(&ag, aux);
                        system("pause");
                        break;

                    case 4:
                        printf("---Grupo ESTUDOS---\n");
                        strcpy(aux,"ESTUDOS");
                        mostrarGrupo(&ag, aux);
                        system("pause");
                        break;

                    case 5:
                        printf("---Grupo colegas---\n");
                        strcpy(aux,"COLEGAS");
                        mostrarGrupo(&ag, aux);
                        system("pause");
                        break;

                    case 6:
                        printf("---Grupo outros---\n");
                        strcpy(aux,"OUTROS");
                        mostrarGrupo(&ag, aux);
                        system("pause");
                        break;

                    default:
                        printf("Escolha Invalida\n");
                        system("pause");
                }


            break;
            }else{
                printf("TODOS OS GRUPOS ESTAO VAZIOS\n\n");
                system("pause");
                break;
            }

        case 6://MOSTRAR TODOS OS CONTATOS
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

void mostrarGrupo(CONTATO *ag, char aux[LIM]){
// MOSTRAR OS CONTATOS A PARTIR DO GRUPO A QUAL ELE PERTENCE
    int x=1;

    system("cls");
    printf("CONTADOS DO GRUPO : %s \n",aux);
    printf("-----------------\n");
    for(int i=0;i<LIM_AG;i++){
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
// VERIFICA EM QUAL GRUPO O CONTATO VAI E NÃO ENCONTRAR NENHUM ELE VAI PARA OUTROS
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
//ADICIONAR CONTATO A AGENDA; PEDE O NUMERO NOME E GRUPO

    char nome[LIM],grupo[LIM];
    int numero;

    system("cls");
    printf("ADICIONAR CONTATO\n");
    printf("NUMERO:");scanf("%d",&numero);
    setbuf(stdin,NULL);
    printf("NOME:");
    gets(nome);
    setbuf(stdin,NULL);
    puts("Grupos: FAMILIA  AMIGOS  TRABALHO\n        ESTUDOS  COLEGAS e OUTROS");
    printf("GRUPO: ");gets(grupo);
    strcpy(grupo,verificarGrupo(grupo));//COMPARAR GRUPOS
    for(int i=0;i<LIM_AG;i++){
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
//ALTERAR OS DADOS DO CONTADO DA AGENDA
    char AuxProcurar[LIM],AuxUpr[LIM],NOME[LIM],GRUPO[LIM];
    int aux=0,x;        // USEI MAIS AUXILIARES PARA PODER MANTER O NOME DE ACORDO COM QUE O USUARIO DIGITOU ONDE TIVER MAIUSCULO CONTINUARÁ MAISCULO

    system("cls");
    printf("EDITAR CONTADO\n");
    printf("Nome:");gets(AuxProcurar);
    for(int i=0;i<LIM_AG;i++){
        if(ag[i].ativo==1){
            strcpy(AuxUpr,ag[i].nome);
            strupr(AuxUpr);
            strupr(AuxProcurar);
            if(strstr(AuxUpr,AuxProcurar)!=NULL){
                printf("Nome: %s => ",ag[i].nome);gets(NOME);//ALTERAR NOME
                setbuf(stdin,NULL);
                printf("N: %d => ",ag[i].numero);scanf("%d",&aux);//ALTERAR NUMERO
                setbuf(stdin,NULL);
                printf("Grupos: FAMILIA  AMIGOS  TRABALHO\n        ESTUDOS  COLEGAS e OUTROS\n");
                printf("Grupo: %s => ",ag[i].grupo);gets(GRUPO);// ALTERAR GRUPO
                strcpy(GRUPO,verificarGrupo(GRUPO));

                strcpy(ag[i].nome,NOME);
                ag[i].numero = aux;     // TROCAR OS VALORES NA STRUCT
                strcpy(ag[i].grupo,GRUPO);
                x=0;
                printf("EDITADO COM SUCESSO!!!\n");
                system("pause");
                break;
            }else
                x=1;//SE NAO ENCONTRAR O NOME INFORMADO
        }else
            break;
    }
    if(x){
        printf("ALUNO NAO ENCONTRADO!!!\n");
        system("pause");
    }
}

removerContato(CONTATO *ag, int *lim){
//PEDIR O NOME AO USUARIO E REMOVE-LO DA AGENDA, SE ESTIVER
    char AuxProcurar[LIM],AuxUpr[LIM];
    int num,aux=100,x=0;

    system("cls");
    printf("REMOVER CONTATO\n");
    printf("Nome:");gets(AuxProcurar);
    for(int i=0;i<LIM_AG;i++){
        if(ag[i].ativo==1){
            strcpy(AuxUpr,ag[i].nome);
            strupr(AuxUpr);
            strupr(AuxProcurar);
            if(strstr(AuxUpr,AuxProcurar)!= NULL){
                aux = i;
                *lim=*lim-1;//PARA DIMINUIR A QUANTIDADE DE NUMEROS DA AGENDA TOTAL
                printf("REMOVIDO COM SUCESSO!!!\n");
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
    ag[aux].ativo=0;//DESATIVA OS DADOS DO NOME DIGITADO
    system("pause");

}

procurarContato(CONTATO *ag){
//PEDIR O NOME AO USUARIO E VERIFICAR SE ESTÁ NA AGENDA; SE SIM MOSTRAR OS DADOS, SENAO MOSTRA NAO ENCONTROU
    char AuxProcurar[LIM],AuxUpr[LIM];
    int num,x=0;

    system("cls");
    printf("PROCURAR CONTATO\n");
    printf("Nome:");gets(AuxProcurar);
    for(int i=0;i<LIM_AG;i++){
        if(ag[i].ativo==1){
            strcpy(AuxUpr,ag[i].nome);
            strupr(AuxUpr);
            strupr(AuxProcurar);
            if(strstr(AuxUpr,AuxProcurar)!= NULL){
                printf("---------------\n");
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
//MOSTRAR TODOS OS CONTATOS JA CADASTRADOS.
    system("cls");
    printf("TODOS OS CONTATOS\n");
    printf("-------------------\n");
    for(int i=0;i<LIM_AG;i++){
        if(ag[i].ativo==1){
            printf("%s\n",ag[i].nome);
            printf("%d\n",ag[i].numero);
            printf("%s\n",ag[i].grupo);
            printf("-----------------\n");
        }
    }
    system("pause");
}
ordenarContatos(CONTATO *ag, int lim){
//ORDENAR AS PALAVRAS DO DICIONARIO EM ORDEM CRESCENTE DE A-Z.
    char AUX[LIM];
    int aux;

    for(int i=1;i<lim;i++){
        if(ag[i].ativo==1){
            for(int j=1;j<lim;j++){
                if(strcmp(ag[j-1].nome,ag[j].nome) > 0){
                    //NOME
                    strcpy(AUX,ag[j-1].nome);
                    strcpy(ag[j-1].nome,ag[j].nome);
                    strcpy(ag[j].nome,AUX);
                    //NUMEROS
                    aux = ag[j-1].numero;
                    ag[j-1].numero = ag[j].numero;
                    ag[j].numero= aux;
                    //GRUPOS
                    strcpy(AUX,ag[j-1].grupo);
                    strcpy(ag[j-1].grupo,ag[j].grupo);
                    strcpy(ag[j].grupo,AUX);
                }
            }
        }
    }
}
main(){

    menu();

}

