//Exercicio3ListaPonteiros

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int valores[5];
	int ind;

	for(ind=0; ind<5;ind++){
		
		printf("Insira o valor para armazenar:\n",ind+1);
		scanf("%i", (valores+ind));
	}	
		for(ind=0; ind<5;ind++){
			if(*(valores+ind)%2==0){
				printf("%i\n", (valores+ind));	
			}
		}	
}
