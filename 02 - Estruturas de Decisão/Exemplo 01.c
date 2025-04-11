#include <stdio.h>

int main(){

    //Declaração de variáveis
    int idade;

    //Entrada
    printf("Qual eh a sua idade? ");
    scanf("%d", &idade);

    //Processamento
    if(idade < 18){
        printf("Voce eh menor de idade");
    }
    else if(idade < 60){
        printf("Voce eh adulto");
    }
    else{
        printf("Voce eh idoso");
    }

    //Saída
    printf("\nSua idade eh %d", idade);

    return 0;
}
