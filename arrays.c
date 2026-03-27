#include <stdio.h>


int main(){

    //exemplo de uma string sem array
    char letra1 = 'A';
    char letra2 = 'n';
    char letra3 = 't';
    char letra4 = 'o';
    char letra5 = 'n';
    char letra6 = 'i';
    char letra7 = 'o';

    printf("%c%c%c%c%c%c%c\n", letra1, letra2, letra3, letra4, letra5, letra6, letra7);

    //array de inteiros - forma de guardar muliplos numeros
    int notas[10];
    notas[0] = 4;
    notas[3] = 6;
    notas[7] = 10;
    notas[9] = 8;
    printf("Notas: %d %d %d %d", notas[0], notas[3], notas[7], notas[9]);

    return 0;
}