#include <stdio.h>

int main(){

    double nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%lf", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Media = %.2lf", media);

    return 0;
}