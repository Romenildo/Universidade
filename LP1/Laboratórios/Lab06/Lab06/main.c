#include <stdio.h>
#include <stdlib.h>
#include "matrizes.h"



void menu(){
puts("---------MENU-----------");
puts("1 - MATRIZ TRANSPOSTA");
puts("2 - ADICAO ENTRE MATRIZES");
puts("3 - SUBTRACAO ENTRE MATRIZES");
puts("4 - PRODUTO MATRIZ X ESCALAR");
puts("5 - PRODUTO ENTRE MATRIZES");
puts("6 - MATRIZ OPOSTA");
puts("7 - DETERMINANTE DA MATRIZ");
puts("0 - SAIR");
}

int main(){
    int **matrizA,**matrizB;
    int op,on=1;

    while(on){
        system("cls");
        menu();
        printf("ESCOLHA: ");scanf("%d",&op);
        setbuf(stdin,NULL);
        switch(op){
            case 1:
                system("cls");
                printf("---MATRIZ TRANSPOSTA---\n");
                matrizTransposta(matrizA, matrizB);
                system("pause");

                break;
            case 2:
                system("cls");
                printf("---ADICAO ENTRE MATRIZES---\n");
                somarMatrizes(matrizA,matrizB);
                system("pause");

                break;

            case 3:
                system("cls");
                printf("---SUBTRACAO ENTRE MATRIZES---\n");
                subtrairMatrizes(matrizA,matrizB);
                system("pause");

                break;

            case 4:
                system("cls");
                printf("---PRODUTO MATRIZ X ESCALAR---\n");
                matrizXescalar(matrizA);
                system("pause");

                break;

            case 5:
                system("cls");
                printf("---PRODUTO ENTRE MATRIZES---\n");
                produtoMatrizes(matrizA,matrizB);
                system("pause");

                break;
            case 6:
                system("cls");
                printf("---MATRIZ OPOSTA---\n");
                matrizOposta(matrizA);
                system("pause");

                break;
            case 7:
                system("cls");
                printf("---DETERMINANTE DA MATRIZ---\n");
                determinanteMatriz(matrizA);
                system("pause");

                break;
            case 0:

                printf("FINALIZANDO PROGRAMA. . .\n");
                system("pause");
                system("cls");
                on = 0;
                break;
            default:
                printf("OPCAO INVALIDA\n");
                system("pause");
                system("cls");
                break;
        }
    }
}
