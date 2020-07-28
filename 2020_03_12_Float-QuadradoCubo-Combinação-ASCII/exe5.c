#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int centena,dezena,unidade,numero,soma;

	printf("Digite um valor inteiro com 3 dígitos:      ");
	scanf(" %i", &numero);
	centena = (numero/100);
	dezena = (numero%100)/10;
	unidade = ((numero%100)%10)/1;
    soma = centena + dezena + unidade;
	printf("Soma dos seus dígitos:                      %i + %i + %i = %i \n",centena,dezena,unidade,soma);
	
}