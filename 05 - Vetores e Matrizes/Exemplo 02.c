//Vetores - Inteiros e Reais

#include <stdio.h>

int main(){

    //Vetores de inteiros
    int numeros[5];
    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("\n%d", numeros[i]);
    }
    
    printf("\n");

    //Vetores de reais
    double valores[5]; //ou float
    for(int i = 0; i < 5; i++){
        valores[i] = numeros[i] / 2.0;
    }
    for(int i = 4; i >= 0; i--){
        printf("\n%.2lf", valores[i]);
    }

    return 0;
}