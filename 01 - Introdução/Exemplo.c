#include <stdio.h>

int main(){ //A chave delimita um bloco de código (início do bloco)

    //Declarando variáveis
    int idade;

    //Declaras e inicializar variáveis
    //int idade = 0;

    //Função para escrever algo no console
    printf("Qual eh a sua idade? "); // O ponto e vírgula finaliza um comando

    //Receber os dados do usuário
    scanf("%d", &idade);

    //Escrever a idade digitada
    printf("A sua idade eh %d", idade);

    return 0;

} //Fim do bloco