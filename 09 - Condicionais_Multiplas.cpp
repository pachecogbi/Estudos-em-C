#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Declarando Variaveis
	int a = 10;
	
	//Conectivo L�gico AND (&&) Se as duas estiverem certas, entra na condicional, se uma estiver errada, n�o entra.
	if(a > 5 && a < 15){
		printf("%d eh maior que 5 e menor que 15\n", a );
	}
	
	//Conectivo L�gico OR (||) Se apenas uma j� estiver certa, j� entra na condicional, s� n�o entra se ambas estiverem erradas.
	if(a > 5 || a > 15){
		printf("%d eh maior que 5 ou menor que 15\n", a );
	}
	
	//Misturando Conectivos
	if((a > 5 && a > 15) || a == 10){
		printf("%d eh maior que 5 e 15 ou eh igual a 10", a);
	}
	
	return 0;
}
