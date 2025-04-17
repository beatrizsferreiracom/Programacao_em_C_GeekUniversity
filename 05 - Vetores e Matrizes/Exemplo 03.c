//Matrizes - Caracteres e Strings

#include <stdio.h>

int main(){

    //Matriz de string

    char nome[3][50];

    for(int i = 0; i < 3; i++){
        printf("Qual seu nome? ");
        gets(nome[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("Ola %s!\n", nome[i]);
    }

    return 0;
}