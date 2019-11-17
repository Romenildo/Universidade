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

matrizTransposta(int **matrizX,int **matrizY){

    int i,j,linha,coluna;
    printf("Digite as dimensoes da matriz: ");scanf("%d %d",&linha,&coluna);
    matrizX = alocarMatriz(linha,coluna);verifica(matrizX);
    preencherMatriz(matrizX,linha,coluna);
    //-----------
    matrizY = alocarMatriz(coluna,linha);

    for(i=0;i<coluna;i++){
        for(j=0;j<linha;j++){
            matrizY[i][j] = matrizX[j][i];
        }
    }
    //--------------
    puts("Matriz Original");
    printarMatriz(matrizX,linha,coluna);
    puts("matriz transposta");
    printarMatriz(matrizY,coluna,linha);verifica(matrizY);
    //-----liberar
    liberarMatriz(matrizX,linha);
    liberarMatriz(matrizY,coluna);
}

main(){

int **matrizA,**matrizB,linha,coluna;



matrizTransposta(matrizA,matrizB);
}
