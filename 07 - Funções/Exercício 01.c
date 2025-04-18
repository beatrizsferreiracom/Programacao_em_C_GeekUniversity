#include <stdio.h>

int maior_valor(int vet[], int quant);

int main(){

    int N;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vet[N];

    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("O maior valor eh %d", maior_valor(vet, N));
    
    return 0;
}

int maior_valor(int vet[], int quant){

    int maior = 0;

    for(int i = 0; i < quant; i++){

        if(i == 0){
            maior = vet[i];
        }

        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    return maior;
}