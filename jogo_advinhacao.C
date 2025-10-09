#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("************************************\n");
    printf("*  bem Vindo ao Jogo de Advinhação *\n");
    printf("************************************\n");

    //setar a seed de acordo com os segundos atuais
    srand(time(0));  

    // o rand retorna um numero muito grande, logo o módulo delimita esse numero de 0 á 100 com base no resto
    int numerosecreto = rand() % 100;

    int chute;
    int acertou = 0;
    int tentativas;
    double pontos = 1000;

    int nivel;
    printf("Qual é o nivel de dificuldade: \n");
    printf("(1) Fácil | (2) Médio | (3) Díficil\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    switch (nivel)
    {
    case 1:
        tentativas = 20;
        break;
    case 2:
        tentativas = 10;
        break;
    default:
        tentativas = 5;
        break;
    }

    for(int i = 1; i < tentativas+1; i++){
        printf("Tentativa %d\n",i);
        printf("Qual o seu chute: \n");
        scanf("%d", &chute);
        printf("seu chute foi: %d\n", chute);

        if (chute < 0)
        {
            printf("Por favor chute numeros inteiros!!\n");
            continue;
        }

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou){
            break;
        }
        else if (maior){
            printf("Chute Menor!!\n");
        }
        else{
            printf("Chute Maior!!\n");
        }

        double pontosperdidos = abs((chute - numerosecreto))/2.0;
        pontos = pontos - pontosperdidos;
    }

    printf("---Fim de jogo---\n");

    if (acertou)
    {
        printf("Você ganhou !!!!\n");
        printf("Você acertou em %d tentativas\n", tentativas);
        printf("Você pontuou: %.1f pontos\n", pontos);
    }
    else
    {
        printf("Você perdeu, tente de novo.\n");
    }


}