#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Declarando Variaveis
	int a = 1, b = 2, c = 3;
	
	//Maior
	if(c > a){
		printf("%d eh maior que %d\n", c, a);
	}
	
	//Maior ou igual
	if(b > a){
		printf("%d eh maior ou igual a %d\n", b, a);
	}
	
	//Menor
	if(a < c){
		printf("%d eh menor que %d\n", a, c);
	}
	
	//Menor ou igual
	if(a <= b){
		printf("%d eh menor ou igual a %d\n", a, b);
	}
	
	//Diferente
	if(b != c){
		printf("%d nao eh %d", b, c);
	}

		
	return 0;
}
