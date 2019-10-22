#include <stdio.h>




// fazer verificar se a imagen estar em numeros

main(){

    char TV[20][20],aux;
    int i,j,v,h,DIMx,DIMy,MOVIv=0,MOVIh=0;

// ----------------pedir as dimensoes ----------------------------
    do{
    printf("Digite as dimensoes da TV:");
    scanf("%d %d",&DIMx,&DIMy);
    setbuf(stdin,NULL);
    }while(DIMx > 20 || DIMy > 20 || DIMx < 0 || DIMy < 0);
//---------------criar imagens a b c d. . .---------------------------------------------------

    for(i=0;i<DIMx;i++){
        for(j=0;j<DIMy;j++){
            printf("Digite a imagem da TV da posicao %d %d: ",i,j);
            scanf("%c",&TV[i][j]);
            setbuf(stdin,NULL);
        }
    }
// pedir as movimentações-----------------------------
    while(1){
        printf("Digite as movimentacoes de v e h: ");
        scanf("%d %d",&v,&h);
        if(v ==0 && h == 0){
            break;
        }else{
            MOVIv += v;
            MOVIh += h;
            };
    }//f while
    //vai ser excluido++++++++++++
    printf("v= %d h= %d\n",MOVIv, MOVIh);
    //++++++++++++++++++++++
//movimentação----------------------------------------
// aqui é tipo o 00 = 0 0+1 e quando tiver no tultimo 03 ele recebera o aux  o 00
    if(MOVIv > 0){//cima
        //for para mover 1 pra cima
        for(i=0;i<DIMx;i++){
                aux = TV[i][0];
            for(j=0;j<DIMy;j++){

            if(j == DIMy-1){
                TV[i][j]=aux;
            }else
                TV[i][j]=TV[i][j+1];
            }
        }


    }else{//mover baixo


    }
    if (MOVIh > 0){//direita


    }else{//esquerda


    }

//----------------printar matriz por enquanto-----------------------------------

    for(i=0;i<DIMx;i++){
        for(j=0;j<DIMy;j++){
            printf("%c",TV[i][j]);
        }
        printf("\n");
    }




}//fim do main
