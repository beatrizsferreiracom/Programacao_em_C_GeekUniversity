#include <stdio.h>

char maiusculo(char letra);

int main(){

    char letra;

    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);

    printf("Letra maiuscula = %c", maiusculo(letra));

    return 0;
}

char maiusculo(char letra){
    char maiusculo = (int) letra-32;
    return maiusculo;
}