#include <stdio.h>
#include <stdlib.h>

    int matricula=0,aux,jogador,retirados,y;
    char x;
    int soma = 0;
    char jogadorA[20];
    char jogadorB[20];
    int palitostotal = 15;
    int quantidadejA = 0 ;
    int quantidadejB = 0;

void JogoParOuImpar (){

      printf("\nJogo Par ou Impar\n");
        while (palitostotal != 0) {
        printf("\nJogador A, diga a quantidade de palitos que deseja retirar(De 1 a 3)? \n");
        scanf("%d", &retirados);

        if(retirados==palitostotal) {
            palitostotal = 0 ;
            quantidadejA = quantidadejA + retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejA);
            break;
        }
        if(retirados > palitostotal) {
            printf("Voce nao tem essa quantidade.\nTire uma quantidade ate %d.",palitostotal);
            scanf("%d", &retirados);
            quantidadejA = quantidadejA + retirados;
            palitostotal = palitostotal-retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejA);
            break;
            }

        else  {
            quantidadejA= quantidadejA+retirados;
            palitostotal = palitostotal-retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejA);
        }

        printf("\nJogador B, diga a quantidade de palitos que deseja retirar(De 1 a 3)? \n");
        scanf("%d", &retirados);

        if (retirados == palitostotal) {
            quantidadejB = quantidadejB + retirados;
            palitostotal = 0 ;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejB);
            break;
        }

        if(retirados > palitostotal) {
            printf("Voce nao tem essa quantidade.\nTire uma quantidade ate %d.",palitostotal);
            scanf("%d", &retirados);
            palitostotal = palitostotal-retirados;
            quantidadejB = quantidadejB + retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejB);
            }
else  {
            quantidadejB= quantidadejB+retirados;
            palitostotal = palitostotal-retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh:%d\n",quantidadejB);
        }

       }

        printf("\nAcabaram os Palitos!!\n");

        printf("------------Resultado do Jogo------------\n");
        printf("%s = %d palitos\n", jogadorA, quantidadejA);
        printf("%s = %d palitos\n", jogadorB, quantidadejB);
            if(quantidadejA>quantidadejB) {
                printf("\n--------------GANHADOR:%s--------------", jogadorA);
            }
            else {
                 printf("\n------------GANHADOR:%s------------", jogadorB);
            }

    }


void JogoNim (){
     printf("\nJogo NIM\n");
        int jogador_numero;
        while (palitostotal != 0) {
        printf("\nJogador A, diga a quantidade de palitos que deseja retirar(De 1 a 3)? \n");
        scanf("%d", &retirados);

        if(retirados==palitostotal) {
            palitostotal = 0 ;
            quantidadejA = quantidadejA + retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejA);
            jogador_numero = 1;
            break;
        }

        if(retirados > palitostotal) {
            printf("Voce nao tem essa quantidade.\nTire uma quantidade ate %d.",palitostotal);
            scanf("%d", &retirados);
            quantidadejA = quantidadejA + retirados;
            palitostotal = palitostotal-retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejA);
            jogador_numero = 1;
            break;
            }

        else  {
            quantidadejA= quantidadejA+retirados;
            palitostotal = palitostotal-retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejA);
            jogador_numero = 1;
        }

        printf("\nJogador B, diga a quantidade de palitos que deseja retirar(De 1 a 3)? \n");
        scanf("%d", &retirados);

        if (retirados == palitostotal) {
            quantidadejB = quantidadejB + retirados;
            palitostotal = 0 ;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejB);
            jogador_numero = 2;
            break;
        }

        if(retirados > palitostotal) {
            printf("Voce nao tem essa quantidade.\nTire uma quantidade ate %d.",palitostotal);
            scanf("%d", &retirados);
            palitostotal = palitostotal-retirados;
            quantidadejB = quantidadejB + retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh: %d\n",quantidadejB);
            jogador_numero = 2;
            break;
            }
        else{
            quantidadejB= quantidadejB+retirados;
            palitostotal = palitostotal-retirados;
            printf("\nVoce retirou %d palitos, ainda sobram %d.\n ",retirados,palitostotal);
            printf("\nSua quantidade de palitos ate agora eh:%d\n",quantidadejB);
            jogador_numero = 2;
            }
       }

        printf("Acabaram os Palitos!!\n");

        printf("------------Resultado do Jogo------------\n");
        printf("%s = %d palitos\n", jogadorA, quantidadejA);
        printf("%s = %d palitos\n", jogadorB, quantidadejB);
            if(jogador_numero == 2) {
                printf("\n--------------GANHADOR:%s--------------", jogadorA);
            }
            else {
                 printf("\n------------GANHADOR:%s------------", jogadorB);
            }
    }

int main()
{
    printf("Jogos dos Palitos\n\nJogador, insira aqui sua matricula(Por favor, entre com um valor numerico): \n");
    scanf("%d", &matricula);

    printf("\nJogador A, digite seu nome:\n");
    scanf("%s", &jogadorA);
    fflush(stdin);
    printf("Jogador B, digite seu nome:\n");
    scanf("%s", &jogadorB);
    fflush(stdin);

     while(matricula>0) {
        aux= matricula%10;
        matricula= matricula/10;
        soma=soma+aux;}

        if(soma%2 == 0){
            x = 1;
        } else{ x= 2;
        }
        switch (x){
             case 1: JogoParOuImpar();break;
             case 2: JogoNim();break;
             }
        printf("\nDeseja continuar jogando(Aperte 1, se sim e 2, se nao)?");
        scanf("%d", &y);

        switch (y){
               case 1: { printf("\nVoce vai ser redirecionado imediatamente!\n");
                         palitostotal=15;
                          if (y == 1){
                                 if(soma%2 == 0){
                                        x = 1;
                                 } else{ x= 2;}
                           switch (x){
                                case 1: JogoParOuImpar(); break;
                                case 2: JogoNim();break;
                          }
                           }
                           };
              case 2: printf("Fim de Jogo\n");break;
        }

 return 0;
}
