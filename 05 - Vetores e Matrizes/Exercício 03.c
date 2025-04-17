#include <stdio.h>

int main(){

    int vet[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o elemento [%d]: ", i);
        scanf("%d", &vet[i]);

        if(vet[i] < 0){
            vet[i] = 0;
        }
    }
    
    printf("\nVetor:");
    for(int i = 0; i < 10; i++){
        printf("\nElemento [%d] = %d", i, vet[i]);
    }

    return 0;
}