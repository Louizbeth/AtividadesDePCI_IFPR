#include <stdio.h>

int main() {

     int numero;
	int centena;
	int dezena;
	int unidade;
	int soma;
	printf("Digite um número de até 3 dígiots: \n");
	scanf(" %i", &numero);
	centena = (numero/100);
	dezena = (numero%100)/10;
	unidade = ((numero%100)%10)/1;
	soma = centena + dezena + unidade;
	printf("\n %i \n", soma);

	
	

     return 0;
}
