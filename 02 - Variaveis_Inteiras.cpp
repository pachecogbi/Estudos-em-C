#include <stdio.h>
#include <stdlib.h>

//Função Principal
int main(){
	
	//Definindo variaveis
	int a = 1, b;
	
	//Imprimindo uma variavel
	printf("%d", a);
	
	//Imprimindo um texto e uma variavel
	printf("\nO valor da variavel A eh: %d ", a);
	
	//Pulando Linha
	printf("\n");
	
	//Alterando valor da variavel
	a = 20;
	
	//Imprimindo a variavel alterada
	printf("\nO valor da variavel A eh: %d ", a);
	
	//Recebendo o valor de uma varaivel do usuario
	scanf("%d", &b);
	
	//Imprimindo o valor da variavel solicitada
	printf("\nO valor da variavel B eh: %d ", b);
	
	//Pausando
	system("PAUSE");
	
	return 0;
}
