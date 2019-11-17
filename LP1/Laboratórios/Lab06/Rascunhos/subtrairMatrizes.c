#include<stdio.h>
#include<stdlib.h>

alocarMatriz(int linha, int coluna){
    int **matrizX;

    matrizX = (int **)malloc(linha * sizeof(int));
    for(int i=0;i<linha;i++){
        matrizX[i] = (int *)malloc(coluna * sizeof(int));
    }
    return matrizX;
}

preencherMatriz(int **matrizX, int linha, int coluna){

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Matriz[%d][%d]:",i,j);
            scanf("%d",&matrizX[i][j]);
        }
    }

}


printarMatriz(int **matrizX, int linha, int coluna){

for(int i=0;i<linha;i++){
    for(int j=0;j<coluna;j++){
        printf("%d ",matrizX[i][j]);
    }
    printf("\n");
}


}

liberarMatriz(int **matrizX,int linha){
        int i;
        for(i=0;i<linha;i++){
            free(matrizX[i]);
        }
        free(matrizX);
}

verifica(int **matrizX){

    if(matrizX==NULL){
        printf("ERRO: Sem Espaço para alocar");
        exit(1);
    }
}

subtrairMatrizes(int **matrizX,int **matrizY){
    int **matrizR;
    int i,j,linha,coluna;
    printf("Digite as dimensoes das matrizes:");scanf("%d %d",&linha,&coluna);
    //alocar----
    matrizX = alocarMatriz(linha,coluna);verifica(matrizX);
    matrizY = alocarMatriz(linha,coluna);verifica(matrizY);
    matrizR = alocarMatriz(linha,coluna);verifica(matrizR);
    //preencher --------
    puts("1 MATRIZ");
    preencherMatriz(matrizX,linha,coluna);
    puts("2 MATRIZ");
    preencherMatriz(matrizY,linha,coluna);
    //subtrair
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matrizR[i][j] = matrizX[i][j] - matrizY[i][j];
        }
    }
    //printar------
    printarMatriz(matrizX,linha,coluna);
    for(i=0;i<coluna/2+1;i++){
        printf(" ");
    }
    printf("-\n");
    printarMatriz(matrizY,linha,coluna);
    for(i=0;i<coluna/2+1;i++){
        printf(" ");
    }
    printf("%c\n",61);//bem que poderia ter um igual pra baixo

    printarMatriz(matrizR,linha,coluna);
    //liberar
    liberarMatriz(matrizX,linha);
    liberarMatriz(matrizY,linha);
    liberarMatriz(matrizR,linha);
}

main(){

int **matrizA,**matrizB,linha,coluna;

subtrairMatrizes(matrizA,matrizB);
}
