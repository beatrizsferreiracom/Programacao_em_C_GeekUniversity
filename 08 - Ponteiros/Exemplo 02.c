#include <stdio.h>

int main(){

    int n; //Variável que guarda seu valor na memória

    int *p; //Ponteiro é um valor que aponta para um endereço de memória

    printf("Informe um numero: ");
    scanf("%d", &n);

    p = &n;

    printf("O numero informado foi %d\n", n);

    printf("Endereco de memoria: %d\n", &n);

    printf("Endereco do ponteiro: %p\n", p);

    return 0;
}