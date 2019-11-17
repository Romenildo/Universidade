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


matrizXescalar(int **matrizX){
    int i,j,linha,coluna,escalar;
    printf("Digite a dimensao da matriz:");scanf("%d %d",&linha,&coluna);
    //alocar----
    matrizX = alocarMatriz(linha,coluna);verifica(matrizX);
    //preencher
    preencherMatriz(matrizX,linha,coluna);
    //
    printf("Digite o escalar: ");scanf("%d",&escalar);
    printarMatriz(matrizX,linha,coluna);
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matrizX[i][j] *= escalar;
        }
    }
    printf("\n  x %d\n",escalar);
    puts("   =\n");
    printarMatriz(matrizX,linha,coluna);
    //liberar
    liberarMatriz(matrizX,linha);

}


main(){

int **matrizA,**matrizB,linha,coluna;

matrizXescalar(matrizA);

}
