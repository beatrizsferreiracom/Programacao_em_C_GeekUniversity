#include <stdio.h>

int main(){

    double aposta1, aposta2, aposta3, totalApostas, premio;
    double parte1, parte2, parte3;

    printf("Aposta do amigo 1: ");
    scanf("%lf", &aposta1);

    printf("Aposta do amigo 2: ");
    scanf("%lf", &aposta2);

    printf("Aposta do amigo 3: ");
    scanf("%lf", &aposta3);

    printf("Valor do premio: ");
    scanf("%lf", &premio);

    totalApostas = aposta1 + aposta2 + aposta3;

    parte1 = (aposta1 / totalApostas) * premio;
    parte2 = (aposta2 / totalApostas) * premio;
    parte3 = (aposta3 / totalApostas) * premio;

    printf("\n--- Dados ---\n");
    printf("Valor do premio = R$%.2lf", premio);
    printf("\nAposta do amigo 1 = R$%.2lf", aposta1);
    printf("\nAposta do amigo 2 = R$%.2lf", aposta2);
    printf("\nAposta do amigo 3 = R$%.2lf\n", aposta3);

    printf("\n--- Resultado da divisao do premio ---\n");
    printf("Amigo 1 recebera: R$ %.2lf\n", parte1);
    printf("Amigo 2 recebera: R$ %.2lf\n", parte2);
    printf("Amigo 3 recebera: R$ %.2lf\n", parte3);

    return 0;
}