#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Definindo Variaveis.
	int a = 5;
	float b = 2.5;
	char c = 'x';
	int opcao = 1;
	
	//Condicional simples.
	if(a == 5){
		printf("A variavel A eh igual a 5.\n");
	}
	
	if(b == 2.5){
		printf("A variavel B eh igual a 2.5.\n");
	}
	
	if(c == 'x'){
		printf("A variavel C eh igual a x.\n");
	}
	
	//Ver se é par ou impar.
	if(a % 2 == 1){
		printf("A variavel A eh impar. \n");
	}else{
		printf("A variavel A eh par. \n");
	}
	
	//Condicionais Compostas.
	if(opcao == 1){
		printf("A opcao escolhida foi a 1. \n");
	}else if(opcao == 2){
		printf("A opcao escolhida foi a 2. \n");
	}else{
		printf("A opcao escolhida nao foi nem a 1 nem a 2"); //Colocar "else" em uma condicional é opcional.
	}
	
	//Pausa o Sistema
	system("pause");
	
	return 0;
}
