#include <stdio.h>

typedef struct{
    char rua[45],num[45],bairro[45],cidade[45];
}ENDER;

typedef struct{
    float n1,n2;
    char nome[30];
    ENDER e; //e é a variavel de outra struct
}ALUNO;

void imprimir(ALUNO a){
    printf("%.1f\n",a.n1);
    printf("%.1f\n",a.n2);
    printf("%s\n",a.nome);
    printf("%s %s - %s %s\n",a.e.rua,a.e.num,a.e.bairro,a.e.cidade);

}

void preencher(ALUNO *a){
    setbuf(stdin,NULL);
    printf("Digite o nome do aluno:");
    gets(a->nome);
    printf("Digite a primeira nota:");
    scanf("%f",&a->n1);
    printf("Digitea segunda nota:");
    scanf("%f",&a->n2);
    setbuf(stdin,NULL);
    printf("Digite a rua: ");
    gets(a->e.rua);
    printf("Digite o numero da  rua: ");
    gets(a->e.num);
    printf("Digite  o bairro: ");
    gets(a->e.bairro);
    printf("Digite a cidade: ");
    gets(a->e.cidade);

}


main(){
    ALUNO a1={10,9,"maria",{"Av.Floriano PEixoto","222","centro","Campine.g"}};
    imprimir(a1);
    preencher(&a1);
    imprimir(a1);

}
