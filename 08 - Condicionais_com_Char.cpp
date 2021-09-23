#include <stdio.h>
#include <stdlib.h>

//ascii.cl para ter o codigo de cada simbolo char
int main(){
	
	//Definindo Variavel
	char letra = 'j';
	
	//Condicional simples
	if(letra == 'j'){
		printf("A variavel letra eh x\n");
	}
	
	//Descobrindo qual o codigo ASCII do simbolo
	if(letra == 'j'){
		printf("O codigo da letra eh %d\n", letra);
	}
	
	//Comparando codigo ASCII com o simbolo
	if(letra == 106){
		printf("A letra eh j\n");
	}
	
	return 0;
}
