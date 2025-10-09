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
    int tentativas = 1;
    double pontos = 1000;

    while(1){
        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute: \n");
        scanf("%d", &chute);
        printf("seu chute foi: %d\n", chute);

        if (chute < 0)
        {
            printf("Por favor chute numeros inteiros!!\n");
            continue;
        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou){
            printf("Acertouuuuu!! Parabens\n");
            break;
            
        }
        else if (maior){
            printf("Chute Menor!!\n");
        }
        else{
            printf("Chute Maior!!\n");
        }
        tentativas++;
        
        double pontosperdidos = abs((chute - numerosecreto))/2.0;
        pontos = pontos - pontosperdidos;
    }
    printf("---Fim de jogo---\n");
    printf("Você acertou em %d tentativas\n", tentativas);
    printf("Você pontuou: %.1f pontos\n", pontos);

}