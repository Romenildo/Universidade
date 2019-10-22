#include <stdio.h>




void criar_imagem(char TV[20][20],int DIMx,int DIMy){
        /* Função para pedir as imagens que irão para para os vetores
            dependendo do tamanho da dimensão digitado pelo usuario*/
        int i,j;
        
        for(i=0;i<DIMx;i++){
            for(j=0;j<DIMy;j++){
                printf("Digite a imagem da TV da posicao [%d][%d]",i,j);
                scanf("%c",&TV[i][j]);
                setbuf(stdin,NULL);}
        }
}

void printar_TV(char TV[20][20],int DIMx,int DIMy){
    /*Função para testar durante o codigo e para printar o resultado final
    após as movimentações*/
        int i,j;
        
        for(i=0;i<DIMx;i++){
            for(j=0;j<DIMy;j++){
                printf("%c",TV[i][j]);
            }
        printf("\n");
        }
}

void mover_aux(char TV[20][20],char TV2[20][20],int DIMx,int DIMy){
    /* usado para retornar com valores das auxiliares para a matriz principal
    como utilizado em todas movimentações melhor criar uma função para isso*/
    int i,j; 
    
    for(i=0;i<DIMx;i++){
        for(j=0;j<DIMy;j++){
            TV[i][j]=TV2[i][j];
        }
    }
}

void mover_cima(char TV[20][20],int DIMx,int DIMy){
    /*Função para movimentar todos os elementos da matriz uma vez para cima*/

    /* A função faz com que quando for a ultima linha linha ela move essa linha para a 1 de cima
    as demais e só para a sua seguinte*/
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
    /*Função para movimentar todos os elementos da matriz uma vez para baixo*/
    /*mesmo conceito de mover para cima so muda somente que quando for a 1 linha ele ira pegar as ultimas
    e as demais sua anterior*/
    char TV2[20][20]={'a'};
    int i,j;
    
    for(i=0;i<DIMx;i++){
        for(j=0;j<DIMy;j++){
            if(i==DIMx-1){
                TV2[0][j]=TV[i][j];
            }else
                TV2[i+1][j]=TV[i][j];
        }
    }
    mover_aux(TV,TV2,DIMx,DIMy);
}

void mover_direita(char TV[20][20],int DIMx,int DIMy){
    /*Função para movimentar todos os elementos da matriz uma vez para direita*/
    /*A função faz com que quando for o 1 elemento da linha ele ira receber o ultimo
    e os demais o seu anterior como EX: 01 = 00, 02 = 01,03 = 02 ai qaundo for o 1: 00 = 03 que é o ultimo. */
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
    /*Função para movimentar todos os elementos da matriz uma vez para esquerda*/
    /*Mesmo conceito de mover para direita so que aqui o ultimo elemento da linha
    que irá receber o 1 EX: 03 = 00; e os demais é so o proximo 00=01,01=02,02=03*/
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
    /* v = valor digitado pelo usuario na vertical
       h = valor digitado pelo usuario na horizontal
       MOVIv = a movimentação total na vertical que a matriz irá fazer
       MOVIv = a movimentação total na horizontal que a matriz irá fazer
       DIMx = Tamanho da matriz informada pelo usuario
       DIMy = idem */
       
// ----------------pedir as dimensoes ----------------------------
    /* pedir as dimensoes da matriz entre 1 e 20 e condição caso 0.*/
    
    do{
    printf("Digite as dimensoes da TV:");
    scanf("%d %d",&DIMx,&DIMy);
    setbuf(stdin,NULL);
    }while(DIMx > 20 || DIMy > 20 || DIMx < 0 || DIMy < 0);
    
    if(DIMx==0 || DIMy==0){//condição caso degite 0 nas dimensões da matriz o programa finaliza
        printf("FINALIZANDO PROGRAMA. . . \n");
    }else{
        
//---------------criar imagens---------------------------------------------------
        criar_imagem(TV,DIMx,DIMy);
// ----------pedir as movimentações-----------------------------
/* Pedir as movimentações que a matriz ira fazer e guardar a movimentação total para fazer depois de uma vez
    e a condição de para se as movimentações forem 0 0*/
        while(1){
            printf("Digite as movimentacoes de v e h: ");
            scanf("%d %d",&v,&h);
            if(v ==0 && h == 0){
                break;
            }else{
                MOVIv += v;
                MOVIh += h;
            }
        }//f while
    
//-----movimentação----------------------------------------
        if(MOVIv > 0){//cima
            for(i=0;i<MOVIv;i++){
                mover_cima(TV,DIMx,DIMy);
            }
        }else{//BAIXO :         se ele for negativo transformo em um positivo e rodo o tanto de vezes negativo
            MOVIv = MOVIv *(-1);//deixar ele positivo mais mover para baixo
            for(i=0;i<MOVIv;i++){
                mover_baixo(TV,DIMx,DIMy);
            }
        }
        if (MOVIh > 0){//direita
            for(i=0;i<MOVIh;i++){
                mover_direita(TV,DIMx,DIMy);
            }
        }else{//esquerda
            MOVIh = MOVIh * (-1);
            for(i=0;i<MOVIh;i++){
                mover_esquerda(TV,DIMx,DIMy);
            }
        }
//----------------printar TV-----------------------------------
        printar_TV(TV,DIMx,DIMy);
        
    }//f-condição de 0 0
    
}//fim do main
