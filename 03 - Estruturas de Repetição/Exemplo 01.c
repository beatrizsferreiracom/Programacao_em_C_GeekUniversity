//For

#include <stdio.h>

int main(){

    int i, numero, soma;

    soma = 0;

    for(i = 0; i < 5; i++){
        printf("Informe um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;
    }

    printf("A soma eh %d", soma);

    return 0;
}