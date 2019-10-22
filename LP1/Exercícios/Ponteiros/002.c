#include <stdio.h>

area_comp(float raio,float *comp,float *area){
    float pi=3.14;
    *area = pi*(raio * raio);
    *comp =2 * pi * raio;

}

main(){
float raio,area,comp;

printf("Digite o raio da circunferencia: ");
scanf("%f",&raio);

area_comp(raio,&comp,&area);

printf("Area = %.2f\n",area);
printf("comprimento = %.2f",comp);



}
