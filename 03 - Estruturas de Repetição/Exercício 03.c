#include <stdio.h>

int main(){

    int i, numero, maior, menor;

    for(i = 0; i < 10; i++){

        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(i == 0){
            maior = numero;
            menor = numero;
        }

        if(maior < numero){
            maior = numero;
        }

        if(menor > numero){
            menor = numero;
        }     
    }
    
    printf("\nMaior numero = %d", maior);
    printf("\nMenor numero = %d", menor);

    return 0;
}