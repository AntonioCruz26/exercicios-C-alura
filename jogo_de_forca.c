#include <stdio.h>
#include <string.h>


int main(){


    //criação da palavra secreta
    char palavra_secreta[20];
    sprintf(palavra_secreta, "Batata");

    //loop principal do programa
    int acertou = 0;
    int enforcou = 0;
    char chute;

    //quais as letras que ele chutu e guarda ela para mostrar depois
    char chutes[26];

    //quantas vezes ele chutou
    int tentativas = 0;

    do{

        //mostrar o tracejado do jogo da forca, com as letras na medida que for acertando
        for(int i = 0; i < strlen(palavra_secreta); i++){

            int achou = 0;
            //esse loop faz com que o programa percorra o array "chutes" para colocar as letras nas lacunas 
            for (int j = 0; j < tentativas; j++){
                if(chutes[j] == palavra_secreta[i]){
                    achou = 1;
                    break;
                }
            }
            if (achou){
                printf("%c ", palavra_secreta[i]);
            }
            else {
                printf("_ ");
            }
        }
        printf("\n");

        printf("Digite seu chute: ");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;

    }while(!acertou && !enforcou);

    return 0;
}