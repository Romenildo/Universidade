/*5. Escreva uma função que receba um ano e verifique se é bissexto. Utilize a regra:
Um ano bissexto é divisível por 4, mas não por 100, ou então se é divisível por
400. A função deve retornar 1 caso seja bissexto e 0 caso contrário.*/

#include <stdio.h>

int bissexto(int num){
    if (num%4==0 && num%100!=0)
        return 1;
    return 0;


}


main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);

    if (bissexto(num))
        printf("%d eh um ano bissexto",num);
    else
        printf("%d nao eh bissexto",num);




}
