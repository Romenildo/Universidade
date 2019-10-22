//Faça um programa que então leia uma string e a imprima

#include <stdio.h>

main(){
    char nome[20];
    puts("Digite um nome: ");
    gets(nome);//gets mesma coisa do scanf so que somente para funções

    printf("%s",nome);


//ou
 printf("Digite um nome: ");
 scanf("%s",nome);//não se usa o & em scan de srings

 printf("%s",nome);



}
