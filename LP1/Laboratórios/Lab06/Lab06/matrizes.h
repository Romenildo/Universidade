#ifndef MATRIZES_H_INCLUDED
#define MATRIZES_H_INCLUDED


int alocarMatriz(int linha, int coluna);
void preencherMatriz(int **matrizX, int linha, int coluna);
void printarMatriz(int **matrizX, int linha, int coluna);
void liberarMatriz(int **matrizX,int linha);
void verifica(int **matrizX);
//--------------------------------------------------
void matrizTransposta(int **matrizX, int **matrizY);
void somarMatrizes(int **matrizX,int **matrizY);
void subtrairMatrizes(int **matrizX,int **matrizY);
void matrizXescalar(int **matrizX);
void produtoMatrizes(int **matrizX, int **matrizY);
void matrizOposta(int **matrizX);
void determinanteMatriz(int **matrizX);

#endif // MATRIZES_H_INCLUDED
