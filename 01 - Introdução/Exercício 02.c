#include <stdio.h>

int main(){

    int a, b, c, soma;

    printf("Digite tres numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    soma = a + b + c;

    printf("Soma = %d", soma);

    return 0;
}