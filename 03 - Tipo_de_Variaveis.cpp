#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	
	//Definindo variaveis
	int a;
	float b;
	char c;
	bool d;
	
	//Colocando Valor nas variaveis
	a = 5;
	b = 3.14;
	c = 'j';
	d = false; // false = 0 e true = 1
	
	//Imprimindo valores
	printf("O valor da variavel A eh: %d\n", a);
	printf("O valor da variavel B eh: %.2f\n", b);
	printf("O valor da variavel C eh: %c\n", c);
	printf("O valor da variavel D eh: %d\n", d);
	
	//Lendo novos valores
	scanf("%d", &a);
	scanf("%f", &b);
	scanf(" %c", &c); //Adicionar espaço antes da leitura para limpar o buffer
	scanf("%d", &d);
	
	//Imprimindo novos valores
	printf("O valor da variavel A eh: %d\n", a);
	printf("O valor da variavel B eh: %.2f\n", b);
	printf("O valor da variavel C eh: %c\n", c);
	printf("O valor da variavel D eh: %d\n", d);
	
	//Pausando
	system("PAUSE");
	
	
	
	
	return 0;
}
