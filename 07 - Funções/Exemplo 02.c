#include <stdio.h>

/*Protótipo de função
Assinatura das funções
- Tipo de retorno
- Nome
- Parâmetros de entrada (opcionais)
*/

int soma(int num1, int num2);

void mensagem();

int main(){

    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    printf("Soma = %d", soma(n1, n2));

    mensagem();
    
    return 0;
}

int soma(int num1, int num2){
    int res = num1 + num2;
    return res;
}

void mensagem(){
    printf("Bem vindo");
}