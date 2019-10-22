/*3. Escreva uma função que receba um número inteiro positivo e verifique se é par.
A função deve retornar 1 caso seja par e 0 caso contrário.*/

#include <stdio.h>

int verificar(int num){
    if (num %2 == 0)
        return 1;
    return 0;
}


main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);

    if(verificar(num))
        printf("%d eh par",num);
    else
        printf("%d eh impar",num);

}
