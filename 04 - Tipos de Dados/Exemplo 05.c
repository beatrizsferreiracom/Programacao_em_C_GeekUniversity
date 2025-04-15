//Operações Matemáticas

/*
soma +
subtrair -
multiplicar *
dividir /
módulo/resto %
elevar ao quadrado x * x
*/

#include <stdio.h>

int main(){

    int num1, num2, soma, sub, multi, resto, quadrado;
    double div;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    //Soma
    soma = num1 + num2;
    printf("Soma = %d\n", soma);

    //Subtração
    sub = num1 - num2;
    printf("Subtracao = %d\n", sub);

    //Multiplicação
    multi = num1 * num2;
    printf("Multiplicacao = %d\n", multi);

    //Divisão
    div = (double) num1 / num2; //Casting para divisão real
    printf("Divisao = %.2lf\n", div);

    //Módulo / Resto
    resto = num1 % num2;
    printf("Modulo / Resto = %d\n", resto);

    //Elevar ao quadrado
    quadrado = num1 * num1;
    printf("Quadrado de %d = %d\n", num1, quadrado);
    
    return 0;
}