#include <stdio.h>
#include <stdlib.h>

int main() {
  system("clear");
	int numero;
	int resto;
	printf("Digitar numero: \n");
	scanf(" %i", &numero);
  resto = numero%2;
  if (resto == 0) {
  printf("[Numero PAR]");
  }
  else {  printf("[Numero IMPAR]");}
}