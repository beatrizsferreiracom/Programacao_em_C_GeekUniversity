//Tipos Numéricos - Inteiros e Reais

#include <stdio.h>

int main(){

    //int - Números inteiros

    //float - Números reais

    //double - Números reais com limite maior de caracteres e maior precisão

    float nota1, nota2;
    double media;

    printf("Qual a primeira nota? ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota? ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua media eh %.2lf", media);

    return 0;
}