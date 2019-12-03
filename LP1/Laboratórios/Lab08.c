#include <stdio.h>
#include <stdlib.h>

/*ROMENILDO DO VALE FERREIRA - LABORATORIO 08*/

struct capsula{
    int dado;//valores que ficarao no pino
    struct capsula *proximo;
};
typedef struct capsula CAPS;

struct fila{
    CAPS *inicio;
    CAPS *fim;
};
typedef struct fila FILA;

FILA* criarFila(){
    //alloca o espaço para criacao da fila
    FILA* fi = (FILA*)malloc(sizeof(FILA));
    if(fi!= NULL){
        fi->inicio=NULL;
        fi->fim=NULL;
    }
    return fi;//returna o endereço de memoria
}

void liberarFila(FILA *fi){
    //libera o espaço alocado da fila
    if(fi != NULL){
        CAPS *aux;
        while(fi->inicio != NULL){
            aux = fi->inicio;
            fi->inicio = fi->inicio->proximo;
            free(aux);
        }
        free(fi);
    }
}

int tamanhoFila(FILA *fi){
    //returna a quantidade de elementos que tem na pilha
    if(fi == NULL){
        return -1;//se nao tiver aalocado
    }
    int cont=0;
    CAPS *aux=fi->inicio;
    while(aux!=NULL){
        cont++;
        aux= aux->proximo;
    }
    return cont;
}

void inserir(FILA *fi,int num){
    //insere um elemento na fila
    if(fi==NULL){
        printf("ERRO DE ALOCACAO\n");
    }else{
        CAPS* aux = (CAPS*)malloc(sizeof(CAPS));
        if(aux != NULL){
            aux->dado = num;
            aux->proximo = NULL;
            if(fi->fim==NULL){
                fi->inicio=aux;
            }else{
                fi->fim->proximo=aux;
            }
            fi->fim=aux;
        }else{
            printf("ERRO DE ALOCACAO!!!\n");
        }
    }
}

void remover(FILA *fi){
    if(fi==NULL){
        printf("ERRO DE ALOCACAO!!!\n");
    }else{
        if(fi->inicio==NULL){
            printf("FILA VAZIA\n");
        }else{
            CAPS* aux = fi->inicio;
            fi->inicio = fi->inicio->proximo;
            if(fi->inicio == NULL){
                fi->fim = NULL;
            }
            free(aux);
        }
    }
}

int mostrar(FILA *fi){
    //mostra o 1 elemento da fila
    if(fi == NULL){
        printf("ERRO DE ALOCACAO!!/n");
    }else{
        if(fi->inicio==NULL){
            printf("FILA VAZIA");
        }else{
            CAPS *aux = fi->inicio;
             return aux->dado;
        }
    }
}

menuPrincipal(){
    printf("     ***ATENDIMENTO PAINEL ELETRONICO***\n");
    printf(" *******************************************\n");
    printf(" ***  1-PEDIR SENHA     2-CHAMAR SENHA   ***\n");
    printf(" ***\t   0-FECHAR PROGRAMA             ***\n");
    printf(" ***                                     ***\n");
    printf(" *******************************************\n");
}
menuPedirSenha(){
    printf("     ***ATENDIMENTO PAINEL ELETRONICO***\n");
    printf(" *******************************************\n");
    printf(" ***      1-COMUM     2-PREFERENCIAL     ***\n");
    printf(" ***\t        0-VOLTAR                 ***\n");
    printf(" ***                                     ***\n");
    printf(" *******************************************\n");
}

main(){
    int senha = 1,on=1,on2=1,op,op2;
    //a senha começado 1 e vai até onde der
    // sendo os preferencias tem mais prioridades que o comum

    FILA* Fcomum = criarFila();//cria fila comum
    FILA* Fpreferencial = criarFila();//cria fila preferencial
    while(on){
        system("cls");
        menuPrincipal();
        scanf("%d",&op);setbuf(stdin,NULL);
        switch(op){
            case 1:
                on2=1;
                while(on2){
                    system("cls");//menu de pedir senha e escolher qual o tipo
                    menuPedirSenha();
                    scanf("%d",&op2);setbuf(stdin,NULL);
                    switch(op2){
                        case 1:
                        //adicionar a senha na fila comum e mostrar qual senha da pessoa
                            system("cls");
                            inserir(Fcomum,senha);//mostra qual tipo de senha e a senha da pessoa comum
                            printf("*************************\n");
                            printf(" *** SENHA COMUM      ***\n");
                            printf(" ***      %d           ***\n",senha);
                            printf("*************************\n");
                            senha++;
                            getchar();
                            break;
                        case 2:
                            //adicionar a senha na fila preferencial  e mostrar qual senha da pessoa
                            system("cls");
                            inserir(Fpreferencial,senha);//mostra o tipo da senha e qual senha a pessoa irá receber
                            printf("*****************************\n");
                            printf(" *** SENHA PREFERENCIAL  ***\n");
                            printf(" ***        %d            ***\n",senha);
                            printf("*****************************\n");
                            senha++;
                            getchar();
                            break;
                        case 0:
                            on2=0;
                            break;
                        default:
                            printf("OPCAO INVALIDA!!!\n");
                            getchar();
                    }
                }
                break;
            case 2:
                //caso de mostrar senha
                on2=1;
                while(on2){
                    system("cls");
                    if(tamanhoFila(Fcomum)<=0 && tamanhoFila(Fpreferencial)<=0){
                //CASO AS FILAS ESTEJAM FAZIAS DEVE-SE PRIMEIRO PEDILAS
                        printf("********************************************\n");
                        printf("***     FILA VAZIA\n*** PRIMEIRO DEVE-SE CHAMAR UMA SENHA\n");
                        printf("********************************************\n");
                        getchar();on2=0;
                    }else{
                        if(tamanhoFila(Fpreferencial)>0){
                            //enquanto tiver senha na preferencia ele ficara chamando primeiro antes da comum
                            printf("*****************************\n");
                            printf(" *** SENHA PREFERENCIAL  ***\n");
                            printf(" ***        %d            ***\n",mostrar(Fpreferencial));
                            printf("*****************************\n");
                            remover(Fpreferencial);
                        }else{//a comum so ativa se nao tiver ninguem na preferencial
                            printf("*************************\n");
                            printf(" *** SENHA COMUM      ***\n");
                            printf(" ***      %d           ***\n",mostrar(Fcomum));
                            printf("*************************\n");
                            remover(Fcomum);
                        }
                        printf("   1-PROXIMO      0-VOLTAR\n");//opçao para continuar chamando PROXIMOO
                        scanf("%d",&op2);setbuf(stdin,NULL);
                        if(op2==1){
                            on2=1;//X
                        }else{
                            printf("VOLTANDO...\n");
                            on2=0;
                        }
                    }
                }
                break;
            case 0:
                //caso queira fechar o programa
                on = 0;
                break;
            default:
                printf("OPCAO INVALIDA\n");
                getchar();
        }
    }
    //liberacao do espaço alocado das filas
    liberarFila(Fcomum);
    liberarFila(Fpreferencial);
}



