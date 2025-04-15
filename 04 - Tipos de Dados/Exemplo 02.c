//Tipos Alfanuméricos - Caracteres

#include <stdio.h>

int main(){

    //char - caractere declarado com aspas simples ''

    char opcao;

    printf("Informe uma opcao:\n");
    printf("a - Saldo da conta.\n");
    printf("b - Extrato da conta.\n");
    printf("c - Limite da conta.\n");

    scanf("%c", &opcao);

    if(opcao == 'a'){
        printf("O saldo da conta eh...\n");
    }
    else if(opcao == 'b'){
        printf("O extrato da conta eh...\n");
    }
    else if(opcao == 'c'){
        printf("O limite da conta eh...\n");
    }
    else{
        printf("Opcao invalida!\n");
    }

    printf("\nGerar alfabeto minusculo completo com loop (Baseado na tabela ASCII)\n");

    for(int i = 97; i <= 122; i++){
        printf("%c\n", i);
    }

    printf("\nGerar alfabeto maiusculo completo com loop (Baseado na tabela ASCII)\n");

    for(int i = 65; i <= 90; i++){
        printf("%c\n", i);
    }

    return 0;
}