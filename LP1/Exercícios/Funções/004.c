/*4. Escreva uma função que receba um número inteiro positivo e retorne o seu
fatorial.*/

#include <stdio.h>

int fatorial(int num){
    int i,fatorial=1;
    for(i=1;i<=num;i++)
        fatorial *= i;
    return fatorial;


}


main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("fatorial de %d eh %d",num,fatorial(num));



}
