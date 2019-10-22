#include <stdio.h>




void criar_imagem(char TV[20][20],int DIMx,int DIMy){
        int i,j;
        for(i=0;i<DIMx;i++){
            for(j=0;j<DIMy;j++){
                printf("Digite a imagem da TV da posicao [%d][%d]",i,j);
                scanf("%c",&TV[i][j]);
                setbuf(stdin,NULL);}
        }

}


void printar_TV(char TV[20][20],int DIMx,int DIMy){
        int i,j;
        for(i=0;i<DIMx;i++){
        for(j=0;j<DIMy;j++){
            printf("%c",TV[i][j]);
        }
        printf("\n");
    }


}

void mover_aux(char TV[20][20],char TV2[20][20],int DIMx,int DIMy){
    /* usado para retornar com valores das auxiliares para a matriz principal*/
    int i,j;
    for(i=0;i<DIMx;i++){
        for(j=0;j<DIMy;j++){
            TV[i][j]=TV2[i][j];
        }
    }
}

void mover_cima(char TV[20][20],int DIMx,int DIMy){

    char TV2[20][20]={'a'};
    int i,j;
    for(i=0;i<DIMx;i++){

        for(j=0;j<DIMy;j++){
            if(i==DIMx-1){
               TV2[i][j]=TV[0][j];
            }else
                TV2[i][j]=TV[i+1][j];
        }
    }
    mover_aux(TV,TV2,DIMx,DIMy);
}

void mover_baixo(char TV[20][20],int DIMx,int DIMy){
    char TV2[20][20]={'a'};
    int i,j;
    for(i=0;i<DIMx;i++){

        for(j=0;j<DIMy;j++){
            if(i==DIMx-1){
                TV2[0][j]=TV[i][j];
            }
            else
                TV2[i+1][j]=TV[i][j];
        }

    }
    mover_aux(TV,TV2,DIMx,DIMy);
}

void mover_direita(char TV[20][20],int DIMx,int DIMy){
    char TV2[20][20]={'a'};
    int i,j;

    for(i=0;i<DIMx;i++){
            for(j=0;j<DIMy;j++){

            if(j == 0){
                TV2[i][j]=TV[i][DIMy-1];
            }else
                TV2[i][j]=TV[i][j-1];
            }
        }
    mover_aux(TV,TV2,DIMx,DIMy);

}


void mover_esquerda(char TV[20][20],int DIMx,int DIMy){
    char TV2[20][20]={'a'};
    int i,j;
    for(i=0;i<DIMx;i++){
            for(j=0;j<DIMy;j++){

            if(j == DIMy-1){
                TV2[i][j]=TV[i][0];
            }else
                TV2[i][j]=TV[i][j+1];
            }
        }
    mover_aux(TV,TV2,DIMx,DIMy);

}


main(){
    char TV[20][20];
    int i,j,v,h,DIMx,DIMy,MOVIv=0,MOVIh=0;
// ----------------pedir as dimensoes ----------------------------
    do{
    printf("Digite as dimensoes da TV:");
    scanf("%d %d",&DIMx,&DIMy);
    setbuf(stdin,NULL);
    }while(DIMx > 20 || DIMy > 20 || DIMx < 0 || DIMy < 0);
    
    if(DIMx==0 || DIMy==0){
        printf("FINALIZANDO PROGRAMA. . . \n");
    }else{
//---------------criar imagens a b c d. . .---------------------------------------------------
    criar_imagem(TV,DIMx,DIMy);
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
//movimentação----------------------------------------
    if(MOVIv > 0){//cima
    for(i=0;i<MOVIv;i++){
        mover_cima(TV,DIMx,DIMy);
    }
        }else{//se ele for negativo transformo em um positivo e rodo o tanto de vezes negativo
            MOVIv = MOVIv *(-1);//deixar ele positivo mais mover para baixo
            for(i=0;i<MOVIv;i++){
                mover_baixo(TV,DIMx,DIMy);

            }
    }
    if (MOVIh > 0){//direita
        for(i=0;i<MOVIh;i++){
        mover_direita(TV,DIMx,DIMy);
        }
    }else{//esquerda ta lindo
           MOVIh = MOVIh * (-1);
           for(i=0;i<MOVIh;i++){
            mover_esquerda(TV,DIMx,DIMy);
            }
    }
//----------------printar matriz por enquanto-----------------------------------
printar_TV(TV,DIMx,DIMy);
    }//f-condição de 0 0
}//fim do main
