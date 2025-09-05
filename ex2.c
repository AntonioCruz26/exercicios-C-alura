//Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) 
//e imprima o resultado da multiplicação entre essas duas variáveis.

#include <stdio.h>

int main(){
    int x;
    int y;
    int soma;

    printf("Digite o primeiro numero do produto: \n");
    scanf("%d", &x);
    printf("Digite o segundo numero do produto: \n");
    scanf("%d", &y);
    soma = x * y;
    printf("%d * %d = %d\n", x, y, soma);
}