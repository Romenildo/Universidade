#include <stdio.h>
#include <string.h>
#define L_DIC 101//limite tamanho dicionario
#define L_PLVA 31 //limite tamanho da palavra
#define L_FRSE 61//limite tamanho da frase final
#define II 2

/* Aluno: Romenildo do vale Ferreira LabP1 - manhã */

void dicionario(char dic[L_DIC][II][L_PLVA],int q_palavras_dic){
    //preencher o dicionario com as palavras e seus significados (ou criptografias)

    puts("----PREENCHER DICIONARIO----");
    for(int i=0;i<q_palavras_dic;i++){
        printf("%d- Palavra: ",i+1);
        setbuf(stdin,NULL);
        fgets(dic[i][0],L_PLVA,stdin);
        strtok(dic[i][0], "\n");


        printf("   %s = : ",dic[i][0]);
        setbuf(stdin,NULL);
        fgets(dic[i][1],L_PLVA,stdin);
        strtok(dic[i][1], "\n");
    }
    puts("----------------------------");
}


void mensagemFinal(char MSM_final[L_DIC][L_FRSE],int q_mensagens_finais){
    //pedir a quantidade de mensagens que o usuario informou

    for(int i=0;i<q_mensagens_finais;i++){
        printf("Digite a frase criptografada: ");
        setbuf(stdin,NULL);
        gets(MSM_final[i]);
    }
}


limpar(char aux[L_PLVA][L_FRSE],int x, int contar){
    //limpar todos os elementos do vetor auxiliar quando passar de uma frase

    int i,j;
    for(i=0;i<x;i++){
        strcpy(aux[i],"\0");
    }
    for(i=0;i<x;i++){
        for(j=0;j<contar*10;j++){
            aux[i][j]='\0';
        }
    }
}


descriptografar(char dic[L_DIC][II][L_PLVA],char MSM_final[L_DIC][L_FRSE],int q_palavras_dic, int q_mensagens_finais,int rodada){
    char aux[L_PLVA][L_FRSE];
    int i,j=0,indice=0,contar=1,x=0;
    //x = contador para contar o tamanho da string da mensagem
    //contar = numero de palavras(strings) do vetor auxiliar

//------mover a frase separando a cada espaço para mover as palavras(strings) para um vetor aulixiar--------
    for(i=0;MSM_final[rodada][i] != '\0';i++){
            x++;
        if(MSM_final[rodada][i] != ' '){
            aux[j][indice] = MSM_final[rodada][i];
            indice++;
        }else{
            j++;
            aux[j][indice+1]='\0';
            indice = 0;
            contar++;
        }
    }
//-------------------------------------------------------------------------------------------------
//-------fazer a comparação das palavras do dicionario com o auxiliar e trocar pelo signifiado-----
    for(i=0;i<q_palavras_dic;i++){
        for(j=0;j<contar;j++){
            if(strcmp(dic[i][0],aux[j]) == 0){
                strcpy(aux[j],dic[i][1]);
            }
        }
    }
//--------------------------------------------------------------------------------------------------
//      printar a frase ja trocado a palavra pelo seu significado;
        for(i=0;i<contar;i++){
            printf("%s ",aux[i]);
        }
        puts("\n");
//--------------------------------------------------------------------------------------------------
        limpar(aux,x,contar);
}//fim func


main(){

    int i,instancias = 0, q_mensagens_finais=0,q_palavras_dic = 0;
    char dic[L_DIC][II][L_PLVA],MSM_final[L_DIC][L_PLVA];
    system("color 02");

    printf("Digite a quantidade de instancias: ");scanf("%d",&instancias);


    if(instancias > 0){
        while(instancias){
            printf("------ INSTANCIAS = %d ------\n",instancias);//inutil mas...
            printf("Digite a quantidade de palavras do dicionario: ");scanf("%d",&q_palavras_dic);
            if(q_palavras_dic > 0 && q_palavras_dic <= 100){
                  dicionario(dic, q_palavras_dic);//preencher o dicionario

                printf("Digite a quantidade de mensagens criptografadas: ");scanf("%d",&q_mensagens_finais);
                mensagemFinal(MSM_final,q_mensagens_finais);//pedir as frases criptografadas

                for(i=0;i<q_mensagens_finais;i++){
                descriptografar(dic,MSM_final,q_palavras_dic,q_mensagens_finais,i);
                }
            }
        --instancias;
        system("pause");
        system("cls");
        }
    }else
        return ;
}

