#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Declarando Variaveis
	int a = 10;
	
	//Conectivo Lógico AND (&&) Se as duas estiverem certas, entra na condicional, se uma estiver errada, não entra.
	if(a > 5 && a < 15){
		printf("%d eh maior que 5 e menor que 15\n", a );
	}
	
	//Conectivo Lógico OR (||) Se apenas uma já estiver certa, já entra na condicional, só não entra se ambas estiverem erradas.
	if(a > 5 || a > 15){
		printf("%d eh maior que 5 ou menor que 15\n", a );
	}
	
	//Misturando Conectivos
	if((a > 5 && a > 15) || a == 10){
		printf("%d eh maior que 5 e 15 ou eh igual a 10", a);
	}
	
	return 0;
}
