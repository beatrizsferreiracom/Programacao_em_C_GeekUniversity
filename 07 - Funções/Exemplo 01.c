#include <stdio.h>

/*Estrutura das funções
- Tipo de retorno
- Nome
- Parâmetros de entrada (opcional)
- Implementação
- Retorno (opcional)*/

void mensagem(){
    printf("Bem vindo");
}

int soma(int num1, int num2){
    int res = num1 + num2;
    return res;
}

void proximo_char(char caractere){
    printf("\n%c", caractere+1);
}

//Main é a função principal
int main(){

    printf("Ola...\n");

    mensagem();

    printf("\n%d", soma(4, 6));

    proximo_char('a');
    
    return 0;
}