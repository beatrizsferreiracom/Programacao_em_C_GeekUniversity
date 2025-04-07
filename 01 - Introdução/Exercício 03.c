#include <stdio.h>

int main(){

    int numero, quadrado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    quadrado = numero * numero;

    printf("Quadrado de  %d eh %d", numero, quadrado);

    return 0;
}