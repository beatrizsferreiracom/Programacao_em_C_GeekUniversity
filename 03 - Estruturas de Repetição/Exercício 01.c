#include <stdio.h>

int main(){

    //Resolução com For
    int i, multiplo;

    printf("Os cinco primeiros multiplos de 3 (maiores que 0) sao:\n");

    for(i = 1; i <= 5; i++){

        multiplo = i * 3;
        printf("%d\n", multiplo);
    }

    //Resolução com While
    int numero = 1, contador = 0;

    printf("\nOs cinco primeiros multiplos de 3 (maiores que 0) sao:\n");

    while (contador < 5) {
        if (numero % 3 == 0) {
            printf("%d\n", numero);
            contador++;
        }
        numero++;
    }

    return 0;
}