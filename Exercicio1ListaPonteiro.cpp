//Exercicio1ListaPonteiro

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int valor[3];
	int i;
	
	for(i=0; i<3; i++){
		printf("Insira o valor: \n");
		scanf("%d", valor+i);
		printf("Valor: \n", valor);
		printf("\n%d", *(valor+i));
	}
	return 0;
}

