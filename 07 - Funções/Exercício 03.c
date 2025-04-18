#include <stdio.h>

void linhas(int num);

int main(){

    int num;

    printf("Qual o numero de linhas? ");
    scanf("%d", &num);

    linhas(num);

    return 0;
}

void linhas(int num){
    for(int i = 0; i <= num; i++){
        for(int j = 0; j < i; j++){
            printf("!");
        }
    printf("\n");
    }
}