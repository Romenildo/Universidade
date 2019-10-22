/*2. Escreva uma função que receba um número e calcule o seu dobro.*/

#include <stdio.h>

int dobro(int num){

    return num*2;
}


main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("o dobro de %d eh %d",num,dobro(num));

} 
