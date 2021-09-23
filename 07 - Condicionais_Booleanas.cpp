#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Biblioteca para usar variaveis booleanas

int main(){
	
	//Definindo Variaveis
	bool a = true, b = false;
	
	//Comparando verdadeiro
	if(a){
		printf("A eh verdadeiro.\n");
	}
	
	//Vendo se B é falso
	if(b){
		printf("B eh verdadeiro.\n");
	}else{
		printf("B eh falso. \n");
	}
	
	//Comparando Falsidade
	if(!b){
		printf("B eh falso\n");
	}
	
	
	return 0;
}
