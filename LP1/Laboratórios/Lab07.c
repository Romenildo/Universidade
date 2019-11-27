#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* LABORATORIO 7*/

struct capsula{
    int dado;//valores que ficarao no pino
    struct capsula *proximo;
};
typedef struct capsula CAPS;

struct pilha{
    CAPS *topo;
};
typedef struct pilha PILHA;


PILHA* CriarPilha(){
    //ALOCA O ESPAÇO PARA CRIAR A PILHA
    PILHA *pi = (PILHA*)malloc(sizeof(PILHA));
    if(pi != NULL){
        pi->topo=NULL;
    }
    return pi;//retorna o endereço de momoria de onde foi criado
}

void inserirElemento(PILHA *pi, int elemento){
    //INSERE O ELEMENTO NA PILHA
    if(pi != NULL){
        CAPS *novo = (CAPS*)malloc(sizeof(CAPS));
        if(novo != NULL){
            novo->dado = elemento;
            novo->proximo = pi->topo;
            pi->topo = novo;
        }
    }
}

void removerElemento(PILHA *pi){
    //REMOVE O ELEMENTO DA PILHA(NO CASO DA PILHA SERA SEMPRE O QUE ESTÁ EMCIMA)
    if(pi!= NULL){
        if(pi->topo!=NULL){
            CAPS *removido = pi->topo;
            pi->topo = pi->topo->proximo;
            free(removido);
        }
    }

}
void topo(PILHA *pi){
    //RETORNA O ENDEREÇO DO TOPO DA PILHA
    if(pi!= NULL){
        return pi->topo;
    }
}


int tamanhoPilha(PILHA *pi){
    //MOSTRA O TAMANHO DE UMA PILHA
    if(pi!= NULL){
        CAPS *aux = pi->topo;
        int cont=0;
        if(aux!=NULL){
            while(aux!=NULL){
                cont++;
                aux= aux->proximo;
            }
        }
        return cont;
    }

}

void liberarPilha(PILHA *pi){
    //FUN~]AO PARA LIBERAR O ESPAÇO ALOCADO DE UMA PILHA
    if(pi!= NULL){
        CAPS *removido;
        while(pi->topo!=NULL){
            removido = pi->topo;
            pi->topo = pi->topo->proximo;
            free(removido);
        }
    }


}

//FUNÇÕES DO JOGO--------------
void mover(PILHA *origem, PILHA *destino){
    //MOVER DE UM PINO PARA OUTRO; VERIFICANDO SE ELA PODE IR PARA AQUELE LOCAL OU NAO;
    if(tamanhoPilha(origem) > 0 && (tamanhoPilha(destino) <= 0 || Topo(origem) < Topo(destino))){
        inserirElemento(destino,Topo(origem));
        removerElemento(origem);
        return;
    }
    else {
        printf("MOVIMENTO INVALIDO.\n");
        return;
    }
}

void mostrarPinosABC(PILHA *pinoA, PILHA *pinoB, PILHA *pinoC,int n_discos, int movimentos,int *x){
    //MOSTRAR AS JOGADAS E OS PINOS NA TELA
    *x=pow(2,n_discos)-1;// quantidade de jogadas minimas para completar dado por [(2^t)-1]
    printf("N.Minimo de Jogadas:%d \n",*x);
    printf("   Seus movimentos %d/%d",movimentos,*x);
    printf("\n\n");
    printf("A:");mostrarPino(pinoA,tamanhoPilha(pinoA));printf("\n");
    printf("B:");mostrarPino(pinoB,tamanhoPilha(pinoB));printf("\n");
    printf("C:");mostrarPino(pinoC,tamanhoPilha(pinoC));printf("\n");

}
int Topo(PILHA *pi){
    //RETORNA O VALOR QUE ESTA NO TOPO DA PILHA DOS PINOS
    if(pi!= NULL){
        return pi->topo->dado;
    }
}

void mostrarPino(PILHA *pi,int tam){
    //FUNCAO PARA MOSTRTAR O PINO, ELE INVERTE OS VALORES QUE ESTÃO NA PILHA
    if(pi!= NULL){
        int e[tam],x=0;
        CAPS *elemento = pi->topo;
        if(elemento!=NULL){
            while(elemento != NULL){
                e[x]=elemento->dado;x++;//SALVA OS VALORES DA PILHA EM UM VETOR E DPS PRINTA ELE PELO INVERSO
                elemento = elemento->proximo;
            }
            for(int i=tam-1;i>=0;i--){
                printf("%d ",e[i]);
            }
        }else{
            printf(" ");//se vazia printa espaço em branco
        }
    }
}

charUpper(char *caractere){
// FUNÇÃO PARA COLOCAR O CARACTERE EM MAIUSCULO
    if(*caractere == 'a'){
        *caractere = 'A';
    }
    if(*caractere == 'b'){
        *caractere = 'B';
    }
    if(*caractere == 'c'){
        *caractere = 'C';
    }
}


main(){
    int n_discos=0,i,on=1,movimentos=0;
    int minimo=0;//uqantidade de jogadas minimas dependendo da quantidades de discos
    char origem,destino;
    //alocação e criacao dos pinos----
        PILHA *pinoA=CriarPilha();
        PILHA *pinoB=CriarPilha();
        PILHA *pinoC=CriarPilha();
   //-----------------------------------
        do{
            printf("Digite a quantidade de discos(ENTRE 3 e 8):");
            scanf("%d",&n_discos);fflush(stdin);
        }while(n_discos>8 || n_discos<3);//poder selecionar os discos de somente 3 a 8
    //inicializando os pinos-----------
        for(i=n_discos;i>0;i--){
            inserirElemento(pinoA,i);
        }
    //--------------------------------
        while(on){
            system("cls");

            mostrarPinosABC(pinoA, pinoB, pinoC,n_discos,movimentos,&minimo);

            printf("MOVER(A,B,C):");//1 pede qual ira se mover
            scanf("%c", &origem);fflush(stdin);
            charUpper(&origem);//funcao para caso o usuario digitar 'a' ele transformara em maiuscula

            printf("PARA: ");// e escolhe para onde ele ira se mover
            scanf("%c", &destino);fflush(stdin);
            charUpper(&destino);

            movimentos++;//contador para numero de movimentos feitos pelo usuarioo
            switch(origem){
                case 'A':
                    switch(destino){
                        case 'B':
                            mover(pinoA, pinoB);
                            break;
                        case 'C':
                            mover(pinoA, pinoC);
                            break;
                        default:
                            printf("MOVIMENTO INVALIDO!\n");
                            getchar();
                            break;
                    }
                    break;
                case 'B':
                    switch(destino){
                        case 'A':
                            mover(pinoB, pinoA);
                            break;
                        case 'C':
                            mover(pinoB, pinoC);
                            break;
                        default:
                            printf("MOVIMENTO INVALIDO!\n");
                            getchar();
                            break;
                    }
                    break;
                case 'C':
                    switch(destino){
                        case 'A':
                            mover(pinoC, pinoA);
                            break;
                        case 'B':
                            mover(pinoC, pinoB);
                            break;
                        default:
                            printf("MOVIMENTO INVALIDO!\n");
                            getchar();
                            return;
                        }
                        break;
                default:
                    printf("Movimento invalido!\n");
                    getchar();
                    break;
            }

            //verificação para parada é quando o 3 pino esta do tamanho total de discos
            if(tamanhoPilha(pinoC) == n_discos){
                system("cls");
                mostrarPinosABC(pinoA, pinoB, pinoC,n_discos,movimentos,&minimo);
                if(movimentos == minimo){//condicao para aparecer uma mensagem diferente para quem completa com o minimo de jogadas
                    printf("\n**** PARABENS POR COMPLETAR COM MINIMO DE JOGADAS!!!****\n");
                    getchar();
                }else{
                    printf("\nPARABENS\n");
                    getchar();
                }
                on=0;//termina um jogo
            }
        }
    //desalocando as pilhas dos pinos
        liberarPilha(pinoA);
        liberarPilha(pinoB);
        liberarPilha(pinoC);
    //-------------------------------


}
