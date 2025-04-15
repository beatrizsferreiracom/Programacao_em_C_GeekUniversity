//Tipos Alfanuméricos - Strings

#include <stdio.h>
#include <string.h>

int main(){

    //string - texto declarado com aspas duplas ""

    //A linguagem C não possui o tipo de dado string, então é necessário a biblioteca

    char nome[50];

    printf("Qual eh seu nome? ");
    gets(nome);

    printf("Seu nome eh %s", nome);

    return 0;
}