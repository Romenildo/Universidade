#include <stdio.h>


main(){

    int opcao_menu,continuar = 1;

    system("color 70");

    while(continuar){

        printf("\n LABORATORIO 1 - Disciplina de laboratorio de programacao 1 (LabP1) \n \t\t\t ALUNO: Romenildo do Vale Ferreira \n\n");
        printf(" \n\t1 - Sequencia de Fibonacci \n \t2 - Sequencia de Termos \n \t3 - Operacoes Aritmetica \n \t4 - Dobras \n \t5 - Sair do programa\n\n");
        printf("DIGITE AQUI: ");scanf("%d",&opcao_menu);
        system("cls");

        switch(opcao_menu){

        case 1 :{
        printf("--- SEQUENCIA DE FIBONACCI ---\n\n");
        int i,parada,anterior=0,proximo=1,resul_fib=0;

        printf("Digite um numero: >>> ");scanf("%d",&parada);
        if(parada<0)//condi��o de numero negativo
            printf("Valor invalido");
        else{
        for(i=0;i<=parada;i++){

            printf("%d ",resul_fib);
            if (anterior == 0)
                printf("1 ");

            resul_fib = anterior + proximo;
            anterior = proximo;
            proximo = resul_fib;

            if (resul_fib > parada){
                printf("%d",resul_fib);
                break;
            }
        }//f-for
        }//f-condi��o
            printf("\n\n");//so pra n�o ficar feio
            system("pause");
            system("cls");
            break;
        }//f-case1
        case 2 :{

            printf("--- SEQUENCIA DE TERMOS --- \n\n");

            int n_sequencia;
            printf("Digite um numero: ");scanf("%d",&n_sequencia);
            if (n_sequencia<=0)
                printf("Valor invalido");
            else{
                while(1){
                    if (n_sequencia % 2 != 0)
                        n_sequencia = n_sequencia*3 + 1;

                    else if(n_sequencia % 2 == 0)
                        n_sequencia = n_sequencia/2;


                    if (n_sequencia == 1){
                        printf("1");
                        break;}
                printf("%d -> ",n_sequencia);
                }//f_while
          }//f-condicao

            printf("\n\n");//so pra n�o ficar feio2
            system("pause");
            system("cls");
            break;
            }//f_case2
        case 3: {
           printf("--- OPERACOES ARITMETICAS ---\n\n");
           float num1,num2,resultado = 0;
           char equacao;

           printf("Digite a operacao que deseja realizar: \n");scanf("%f %c %f",&num1,&equacao,&num2);

            switch(equacao){

            case '+':
                resultado = num1 + num2;
                break;

            case '-':
                resultado = num1 - num2;
                break;

            case '*':
                resultado = num1 * num2;
                break;

            case '/':
                resultado = num1/num2;
                break;

            }
            if(equacao == '/')// so caso queira que seja uma divis�o exata
            printf("RESULTADO: %.0f %c %.0f = %.1f \n\n\n",num1,equacao,num2,resultado);

            else
            printf("RESULTADO: %.0f %c %.0f = %.0f \n\n\n",num1,equacao,num2,resultado);

            system("pause");
            system("cls");
            break;


        }
        case 4: {
            printf("Dobras aqui;");
            break;



        }
        case 5:{
            printf("\n. . . PROGRAMA FINALIZADO . . .\n\n\n\n");
            continuar = 0;
            break;


        }


        }
    }

}
