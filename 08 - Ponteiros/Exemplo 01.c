#include <stdio.h>

void incrementa(int* cont){
    printf("\n--Antes de incrementar--\n");
    printf("O contador vale %d\n", (*cont));

    printf("\n--Depois de incrementar--\n");
    printf("O contador vale %d\n", ++(*cont));
}

int main(){

    int cont = 10;

    printf("--Antes de incrementar--\n");
    printf("O contador vale %d\n", cont);

    incrementa(&cont);

    printf("\n--Depois de incrementar--\n");
    printf("O contador vale %d\n", cont);

    return 0;
}