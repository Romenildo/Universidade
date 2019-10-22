/*6. Escreva uma função que receba uma letra como parâmetro e retorne 1 caso seja
uma vogal e 0 caso seja consoante.*/

#include <stdio.h>

int vogal(char letra){
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        return 1;
    return 0;


}


main(){
    int letra;
    printf("Digite uma letra ");
    scanf("%c",&letra);

    if (vogal(letra))
        printf("%c eh vogal",letra);
    else
        printf("%c eh consoante",letra);




}
