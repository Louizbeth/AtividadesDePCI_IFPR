#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int centena,dezena,unidade,numero,n1,n2,n3;

	printf("Digite um número de até 3 dígitos: ");
	scanf(" %i", &numero);
	centena = (numero/100);
	dezena = (numero%100)/10;
	unidade = ((numero%100)%10)/1;
    n1 = centena;
    n2 = dezena;
    n3 = unidade;
	
    printf("\nPrimeira combinação:               %i%i%i\n",n1,n2,n3);
    printf("Segunda  combinação:               %i%i%i\n",n1,n3,n2);
    printf("Terceira combinação:               %i%i%i\n",n3,n1,n2);
    printf("Quarta   combinação:               %i%i%i\n",n3,n2,n1);
    printf("Quinta   combinação:               %i%i%i\n",n2,n1,n3);
    printf("Sexta    combinação:               %i%i%i\n",n2,n3,n1);

}