#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int numero,centena, dezena, unidade, soma;
    printf("Digite um número (3 dígitos): ");
    scanf("%i", &numero);
    centena = (numero/100);
	dezena = (numero%100)/10;
	unidade = ((numero%100)%10)/1;
    soma = centena + dezena + unidade;
	printf("- Soma = %i + %i + %i = %i \n",centena,dezena,unidade,soma);

//Ana Carolina Veiga da Silva TADS20
}