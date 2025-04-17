#include <stdio.h>

int main(){

    int vet[10];
    int pares = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o elemento [%d]: ", i);
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0){
            pares++;
        }
    }
    
    printf("\nQuantidade de pares = %d", pares);

    return 0;
}