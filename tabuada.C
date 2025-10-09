#include <stdio.h>

int numero, multiplicacao;

int main(){

    printf("----Tabuada-----\n");
    printf("Digite um número inteiro para ver a sua tabuada: ");
    scanf("%d", &numero);

    for (int i = 1; i < 11; i++){
        multiplicacao = numero * i;
        printf("%d x %d = %d\n", numero, i, multiplicacao);
    }
    
}   