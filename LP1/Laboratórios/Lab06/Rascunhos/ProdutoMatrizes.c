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

produtoMatrizes(int **matrizX, int **matrizY){
    int **matrizR;
    int i,j,k,linha1,coluna1,linha2,coluna2,aux;
    printf("Digite as dimensoes da matriz 1:");scanf("%d %d",&linha1,&coluna1);
    printf("Digite as dimensoes da matriz 2:");scanf("%d %d",&linha2,&coluna2);
    if(coluna1 != linha2){
        system("cls");
        printf("NAO EH POSSIVEL REALIZAR A OPERACAO COM ESSAS DIMENSOES DE MATRIZES\n");
        getchar();
    }else{
    //alocar----
    matrizX = alocarMatriz(linha1,coluna1);verifica(matrizX);
    matrizY = alocarMatriz(linha2,coluna2);verifica(matrizY);
    matrizR = alocarMatriz(linha1,coluna2);verifica(matrizR);
    //preencher
    printf("MATRIZ 1\n");
    preencherMatriz(matrizX,linha1,coluna1);
    printf("MATRIZ 2\n");
    preencherMatriz(matrizY,linha2,coluna2);
    // multiplicar


     for(i=0;i<linha1;i++){
        for(j=0;j<coluna2;j++){
            aux=0;
            for(k=0;k<linha1;k++)
            aux += (matrizX[i][k] * matrizY[k][j] );
            matrizR[i][j]=aux;
        }
    }

    //printar
    puts("MATRIZES");
    printarMatriz(matrizX,linha1,coluna1);
    for(i=0;i<coluna1/2+1;i++){
        printf(" ");
    }
    printf("x\n");
    printarMatriz(matrizY,linha2,coluna2);
    for(i=0;i<coluna2/2+1;i++){
        printf(" ");
    }
    printf("=\n");

    printarMatriz(matrizR,linha1,coluna2);

    //liberar

    liberarMatriz(matrizX,linha1);
    liberarMatriz(matrizY,linha2);
    liberarMatriz(matrizR,linha1);

    }
}

main(){

int **matrizA,**matrizB,linha,coluna;

produtoMatrizes(matrizA,matrizB);

}
