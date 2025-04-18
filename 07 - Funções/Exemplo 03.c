#include <stdio.h>
#include "ajuda.h"

/*Arquivos de cabeçalho
Criação de uma biblioteca própria
*/

int main(){

    int n1, n2, ret_s, ret_m;

    mensagem();

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    ret_s = soma(n1, n2);
    printf("Soma = %d\n", ret_s);

    ret_m = multi(n1, n2);
    printf("Multiplicacao = %d", ret_m);
    
    return 0;
}