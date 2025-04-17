#include <stdio.h>

int main(){

    int A[6] = {1, 0, 5, -2, -5, 7};

    int soma = A[0] + A[1] + A[5];
    printf("\nSoma = %d", soma);

    A[4] = 100;
    printf("\nElemento A[4] = %d", A[4]);

    printf("\n\nVetor A:");
    for(int i = 0; i < 6; i++){
        printf("\nElemento A[%d] = %d", i, A[i]);
    }

    return 0;
}