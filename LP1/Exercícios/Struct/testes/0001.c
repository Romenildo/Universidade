#include<stdio.h>


struct aluno{
    float n1,n2;
    char nome[30];
};

main(){
    struct aluno a1={10,9,"maria"};// cria a variavel a1 e adiciona nela os valores nas variaveis struct
    printf("%.1f\n",a1.n1); // para utilizar basta colocar o nome da variavel a1.(nome da v na struct)
    printf("%.1f\n",a1.n2);
    printf("%s\n",a1.nome);
}
