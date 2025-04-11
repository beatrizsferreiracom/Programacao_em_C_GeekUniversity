#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    double soma;

    printf("Digite tres numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    soma = pow(a, 2) + pow(b, 2) + pow(c, 2);

    printf("Soma dos quadrados = %.lf", soma);

    return 0;
}