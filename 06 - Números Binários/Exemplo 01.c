#include <stdio.h>

int main(){

	// 0000 0010 (2)
	int valor = 2;

	//Deslocando bits para esquerda
	// 0000 1000 (8)
	valor = valor << 2;
	printf("%d\n", valor);

	//Deslocando bits para a direita
	// 0000 0001 (1)
	valor = 2;
	valor = valor >> 1;
	printf("%d\n", valor);

	//Negando
	//1111 1101 (-3)
	valor = 2;
	valor = ~valor;
	printf("%d\n", valor);

}
