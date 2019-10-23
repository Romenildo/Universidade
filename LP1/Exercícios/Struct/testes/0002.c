#include<stdio.h>
// nomes das estruturas deve ser em maiusculas

struct horario{
    int hora;
    int minutos;
    int segundos;
}HORARIO;

typedef struct data{
    int dia;
    char mes[20];
    int ano;
}DATA;

typedef struct {// certa
    int data;
    int horario;
    char texto[60];
}COMP;

main(){

    scanf("%d",&COMP.data);
    printf("%d",COMP.data);



}
