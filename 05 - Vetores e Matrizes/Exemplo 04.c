//Matrizes - Inteiros e Reais

#include <stdio.h>

int main(){

    //Matriz de inteiros

    int numeros[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite um numero: ");
            scanf("%d", &numeros[i][j]);
        }
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("\nElemento [%d, %d]: %d", i, j, numeros[i][j]);
        }
    }

    return 0;
}