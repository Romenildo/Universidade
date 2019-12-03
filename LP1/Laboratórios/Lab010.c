#include<stdio.h>
#include<stdlib.h>
#define L_ANO 2019//limite do ano até onde está atualmente, para atualizar a cada ano

/*ROMENILDO DO VALE FERREIRA- LABORATORIO 10*/

typedef struct{
    int ano;
    char campeao[40];
    char viceCampeao[40];
    char cidade[20];
}CAMPEONATO;//struct com os dados do campeonato

typedef struct capsula{
    CAMPEONATO camp;
    struct capsula *anterior;
    struct capsula *proximo;
};
typedef struct capsula CAPS;

typedef struct lista{
    CAPS* inicio;
};
typedef struct lista LISTA;

LISTA* criarLista(){
    //aloca o espaco necessario para a lista
    LISTA* li = (LISTA*)malloc(sizeof(LISTA));
    if(li!=NULL){
        li->inicio=NULL;
    }
    return li;
}

void liberarLista(LISTA* li){
    //desaloca o espaço da lista
    if(li!=NULL){
        CAPS* aux;
        while(li->inicio!=NULL){
            aux = li->inicio;
            li->inicio=li->inicio->proximo;
            free(aux);
        }
        free(li);
    }
}

int tamanhoLista(LISTA* li){
    //mostra o tamanho total da lista
    if(li !=NULL){
        int cont=0;
        CAPS* aux=li->inicio;
        while(aux!=NULL){
            cont++;
            aux=aux->proximo;
        }
        return cont;
    }else{
        printf("ERRO DE ALOCACAO!!!\n");
    }
}

void inserir(LISTA* li, CAMPEONATO c){
    //insere os dados dos campeonatos na lista
    if(li==NULL){
        printf("ERRO DE ALOCACAO\n");
    }else{
        CAPS* novo = (CAPS*)malloc(sizeof(CAPS));
        if(novo != NULL){
            novo->camp=c;
            if(li->inicio==NULL){//vazia
                novo->proximo=NULL;
                novo->anterior=NULL;
                li->inicio=novo;
            }else{//nao vazia POR AQUI QUE DEVE MUDAR
                if(li->inicio->camp.ano>novo->camp.ano){//inserir no inicio
                    novo->anterior=NULL;
                    //novo->ant.camp=0
                    //novo->anterior.camp=nenhum
                    novo->proximo=li->inicio;
                    li->inicio->anterior=novo;
                    li->inicio=novo;
                }else{//inserir no meio
                    CAPS *ante;
                    CAPS *aux = li->inicio;
                    while((aux!=NULL)&&(aux->camp.ano<novo->camp.ano)){
                        ante = aux;
                        aux=aux->proximo;
                    }
                    ante->proximo=novo;
                    novo->anterior=ante;
                    novo->proximo=aux;
                    if(aux!=NULL){
                        aux->anterior=novo;
                    }
                }
            }
            //elemento inserido
        }else{
            printf("ERRO DE ALOCACAO!!!n");
        }
    }
}

int posicaoAno(LISTA* li, int ANO){
    //recebe um ano e retorna aonde o valor desse ano se encontra na lista
    if(li !=NULL){
        int pos=0;
        CAPS* aux=li->inicio;
        while(aux!=NULL){
            pos++;
            if(aux->camp.ano==ANO){
                return pos-1;//retorna a posicao do ano na lista
            }
            aux=aux->proximo;
        }
        return pos-1;//X
    }else{
        printf("ERRO DE ALOCACAO!!!\n");
    }
}

void removerAno(LISTA *li, int pos){
    //FUncao de remover da lista duplamente encadeada
    //informa a posicao e ela remove os dados naquela posicao
    //no caso a posicao e onde esta o ano selecionado retornado pela outra função
    if(li==NULL){
        printf("ERRO DE ALOCACAO\n");
    }else{
        if(li->inicio==NULL){
            printf("\nLISTA VAZIA\n");
        }else{
            CAPS* aux=li->inicio;
            int cont= 0;
            if(cont==pos){
                li->inicio=aux->proximo;
                if(aux->proximo!=NULL){
                    aux->proximo->anterior=NULL;
                }
                free(aux);
            }else{
                CAPS *ant;
                while((aux!=NULL)&&(cont!=pos)){
                    ant=aux;
                    aux=aux->proximo;
                    cont++;
                }
                if(aux==NULL){
                    system("cls");
                    printf("\nANO INFORMADO NAO ENCONTRADO\n");
                    getchar();
                    return;//elemento nao encontrado
                }
                ant->proximo=aux->proximo;
                if(aux->proximo!=NULL){
                    aux->proximo->anterior=ant;
                }
                free(aux);
            }
            printf("CAMPEONATO REMOVIDO");
            getchar();
        }
    }
}

void mostrarTodos(LISTA* li){
    //mostrar todos os campeonados cadastrados
    if(li==NULL){
        printf("ERRO DE ALOCACAO!!!\n");
    }else{
        if(li->inicio==NULL){
            printf("LISTA VAZIA\n");
        }else{
            CAPS* aux = li->inicio;
            while(aux!=NULL){
                    system("cls");
                printf("\nMatricula %d",aux->camp.ano);
                printf("\nCampeao: %s",aux->camp.campeao);
                printf("\nVice-Campeao: %s",aux->camp.viceCampeao);
                printf("\nCidade Sede: %s",aux->camp.cidade);
                printf("\n--------------------------------------------\n");

                aux=aux->proximo;
            }
        }
    }
}

void mostrarPesquisando(LISTA* li, int ANO){
    //mostrar os dados do campeonato de determinado ano informado pelo usuario
    if(li !=NULL){
        CAPS* aux=li->inicio;
        while(aux!=NULL){//varre todos da lista
            if(aux->camp.ano==ANO){//se o ano for igual ao ano procurado ele mostra as informações



            }
            aux=aux->proximo;
        }
    }else{
        printf("ERRO DE ALOCACAO!!!\n");
    }
}

int verificarAno(LISTA* li, int ANO){
    //procura se o ano informado esta na lista retorna 1 se sim
    if(li !=NULL){
        int si=0;
        CAPS* aux=li->inicio;
        while(aux!=NULL){
            if(aux->camp.ano==ANO){
                si=1;
            }
            aux=aux->proximo;
        }
        if(si){
            return 1;
        }
        return 0;
    }else{
        printf("ERRO DE ALOCACAO!!!\n");
    }
}

void novoCampeonato(CAMPEONATO *C,LISTA*li){
    //pedir as informaçoes dos campeonatos ao usuario
    system("cls");
    setbuf(stdin,NULL);
//--------------PEDIR ANO--------------
    printf("ESCOLHA O ANO(1968-%d):",L_ANO);
    scanf("%d",&C->ano);

    while((C->ano < 1968)||(C->ano > L_ANO)){//RESTRICAO ANO DEVE ESTAR ENTRE 1968 ATÉ O ANO ATUAL
        printf("\nANO INVALIDO\n");
        printf("ESCOLHA O ANO ENTRE (1968-%d):",L_ANO);
        scanf("%d",&C->ano);
    }
    while(verificarAno(li,C->ano)){//RESTRIÇÃO ANO JA CADASTRADO
        printf("\nJA EXISTE CAMPEONATO CADASTRADO NESTE ANO \n");
        printf("ESCOLHA OUTRO ANO(1968-%d):",L_ANO);
        scanf("%d",&C->ano);
    }
    setbuf(stdin,NULL);
//-------------FIM PEDIR ANO---------------
    printf("\nCAMPEAO: ");gets(C->campeao);//pedir campeao
    printf("\nVICE-CAMPEAO: ");gets(C->viceCampeao);//pedir vice
    printf("\nCIDADE SEDE: ");gets(C->cidade);//pedir cidade
}

main(){
    int on=1,op,op2,buscarAno;

    CAMPEONATO camp;//declarar struct
    LISTA* li=criarLista();//criar lista

    while(on){
        system("cls");
        //menu 1 principal
        printf("1- ADICIONAR CAMPEONATO\n");
        printf("2- REMOVER CAMPEONATO\n");
        printf("3- MOSTRAR CAMPEONATOS\n");
        printf("0- SAIR\n");
        scanf("%d",&op);setbuf(stdin,NULL);
        switch(op){
            case 1:
                novoCampeonato(&camp,li);//pede os dados
                inserir(li,camp);//coloca os dados na lista

                break;
            case 2:
                if(tamanhoLista(li)==0){//caso nao tenha nenhum campeonato cadastrado
                    system("cls");
                    printf("NAO HA CAMPEONATOS CADASTRADOS\n");
                    getchar();//serve para colocar uma pausa
                }else{//se tiver campeonato cadastrado ele mostra todos os cadastrados e pede o ano do qual quer remover
                    system("cls");
                    printf("---CAMPEONATOS CADASTRADOS---\n\n");
                    mostrarTodos(li);
                    printf("DIGITE O ANO QUE DESEJA REMOVER:");
                    scanf("%d",&buscarAno);setbuf(stdin,NULL);
                    if(verificarAno(li,buscarAno)){//verifica se o ano está cadastrado
                        removerAno(li,posicaoAno(li,buscarAno));//remove da lista pela posicao onde está o ano
                    }else{
                        printf("NAO POSSUI CAMPEONATO NESTE ANO!!!\n");
                        getchar();
                    }

                }

                break;
            case 3:
//Case 3 mostrar campeonatos-------------------------------------------
                system("cls");
                //menu2 mostrar campeonatos
                puts("1-MOSTRAR TODOS");
                puts("2-PESQUISAR POR ANO");
                puts("0-VOLTAR");
                scanf("%d",&op2);setbuf(stdin,NULL);
                switch(op2){
                    case 1:
                        if(tamanhoLista(li)==0){//caso nao tenha campeonatos cadastrados
                            system("cls");
                            printf("NAO HA CAMPEONATOS CADASTRADOS\n");
                            getchar();
                        }else{//senao mostra todos os campeonados cadastrados
                            system("cls");
                            printf("-------TODOS OS CAMPEONATOS-------\n\n");
                            mostrarTodos(li);
                            getchar();
                        }
                        break;
                    case 2:
                        if(tamanhoLista(li)==0){//caso nao tenha campeonatos cadastrados
                            system("cls");
                            printf("NAO HA CAMPEONATOS CADASTRADOS\n");
                            getchar();
                        }else{//senao pede o ano que deseja pesquisar o campeonato
                            system("cls");
                            printf("DIGITE O ANO QUE DESEJA PESQUISAR:");
                            scanf("%d",&buscarAno);setbuf(stdin,NULL);
                            if(verificarAno(li,buscarAno)){//verifica se o ano está cadastrado
                                mostrarPesquisando(li,buscarAno);//mostra os dados do campeonato daquele determinado ano
                            }else{
                                printf("NAO POSSUI CAMPEONATO NESTE ANO!!!\n");
                                getchar();
                            }

                        }
                        break;
                    case 0:
                        //voltar
                        break;
                    default:
                        //caso tenha digitado algo diferente das opcoes
                        printf("OPCAO INVALIDA!!!\n");
                        printf("VOLTANDO...");
                        getchar();
                }
                break;
//FIM CASO 3 de mostrar campeonatos-------------------------------------------
            case 0:
                //fechar o programa
                on=0;
                break;
            default:
                //caso tenha digitado algo diferente das opcoes
                printf("\nOPCAO INVALIDA!!!");
                getchar();
                break;
        }
    }
    //liberar o espaço alocado da lista
    liberarLista(li);
}

