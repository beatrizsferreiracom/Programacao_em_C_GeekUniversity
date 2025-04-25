#include <stdio.h>

int main(){

    int valores[5];

    for(int i = 0; i < 5; i++){
        printf("Informe o %do valor: ", i+1);
        scanf("%d", &valores[i]);
    }

    printf("\nOs valores informados foram:\n");
    for(int i = 0; i < 5; i++){
        printf("O valor %d tem %ld bytes\n", i+1, sizeof(valores[i]));
    }
   
    printf("\nO vetor valores possui %ld bytes\n", sizeof(valores));

    printf("\nValores[0] vale %d e o endereco de memoria e %p\n", valores[0], valores[0]);
    printf("*(valores) vale %d e o endereco de memoria e %p\n", *(valores), *(valores));

    printf("\n*(valores+1) vale %d e o endereco de memoria e %p\n", *(valores+1), *(valores+1));
    printf("*(valores+2) vale %d e o endereco de memoria e %p\n", *(valores+2), *(valores+2));
    printf("*(valores+3) vale %d e o endereco de memoria e %p\n", *(valores+3), *(valores+3));
    printf("*(valores+4) vale %d e o endereco de memoria e %p\n", *(valores+4), *(valores+4));

    return 0;
}