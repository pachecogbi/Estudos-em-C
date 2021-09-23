#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Definindo Variaveis
	int a = 6, b = 3, c = -10;
	
	//Soma
	printf("O valor da soma de %d e %d eh : %d\n", a, b, a + b);
	
	//Subtração
	printf("O valor da subtracao de %d e %d eh : %d\n", a, b, a - b);
	
	//Multiplicação
	printf("O valor da multiplicacao de %d e %d eh : %d\n", a, b, a * b);
	
	//Divisão
	printf("O valor da divisao de %d e %d eh : %d\n", a, b, a / b);
	
	//Resto da divisão
	printf("O valor do resto da divisão entre %d e %d eh : %d\n", a, b, a % b);
	
	//Valor absoluto
	printf("O valor da subtracao de %d eh: %d\n", c, abs(c));
	
	//Pausa o programa
	system("PAUSE");
	
	return 0;
}
