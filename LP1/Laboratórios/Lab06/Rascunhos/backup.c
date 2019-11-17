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
    //-----------trnasportar
    matrizY = alocarMatriz(coluna,linha);

    for(i=0;i<coluna;i++){
        for(j=0;j<linha;j++){
            matrizY[i][j] = matrizX[j][i];
        }
    }
    //--------------printar
    puts("Matriz Original");
    printarMatriz(matrizX,linha,coluna);
    puts("matriz transposta");
    printarMatriz(matrizY,coluna,linha);verifica(matrizY);
    //-----liberar
    liberarMatriz(matrizX,linha);
    liberarMatriz(matrizY,coluna);
}

somarMatrizes(int **matrizX,int **matrizY){
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
    //somar
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matrizR[i][j] = matrizX[i][j] + matrizY[i][j];
        }
    }
    //printar------
    printarMatriz(matrizX,linha,coluna);
    for(i=0;i<coluna/2+1;i++){
        printf(" ");
    }
    printf("+\n");
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
matrizOposta(int **matrizX){
    int i,j,linha,coluna;
    printf("Digite a dimensao da matriz:");scanf("%d %d",&linha,&coluna);
    //alocar----
    matrizX = alocarMatriz(linha,coluna);verifica(matrizX);
    //preencher
    preencherMatriz(matrizX,linha,coluna);
    //
    printarMatriz(matrizX,linha,coluna);
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matrizX[i][j] *= (-1);
        }
    }
    puts("Matriz Oposta");
    printarMatriz(matrizX,linha,coluna);
    //liberar
    liberarMatriz(matrizX,linha);

}

main(){

int **matrizA,**matrizB,linha,coluna;

//matrizOposta(matrizA);
produtoMatrizes(matrizA,matrizB);
//matrizXescalar(matrizA);
//subtrairMatrizes(matrizA,matrizB);
//somarMatrizes(matrizA,matrizB);
//matrizTransposta(matrizA,matrizB);
/*printf("tam matriz:");scanf("%d %d",&linha,&coluna);

verifica(matrizA);
preencherMatriz(matrizA,linha,coluna);

printarMatriz(matrizA,linha,coluna);

liberarMatriz(matrizA,linha);*/
}
