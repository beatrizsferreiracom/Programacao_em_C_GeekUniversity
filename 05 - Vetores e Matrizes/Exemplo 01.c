//Vetores - Caracteres e Strings

#include <stdio.h>

int main(){

    //Vetores de strings
    char nome[50];
    printf("Qual seu nome? ");
    gets(nome);
    printf("Ola %s\n", nome);

    
    //Vetores de caracteres
    char letras[26];
    int cont = 0;
    for(int i = 97; i <= 122; i++){
        letras[cont] = i;
        cont = cont + 1;
    }
    for(int i = 0; i < 26; i++){
        printf("%d == %c\n", letras[i], letras[i]);
    }

    return 0;
}