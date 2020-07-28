#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int numero,lado1, lado2, lado3, soma,resultado,resposta;
    printf("Digite um número (3 dígitos): ");
    scanf("%i", &numero);
    lado1 = (numero/100);
	lado2 = (numero%100)/10;
	lado3 = ((numero%100)%10)/1;

	if(lado1 == lado2 && lado1 == lado3){
        printf("Triângulo Equilátero");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("Triângulo Isóscele");
    }
    else{
        printf("Triângulo Escaleno");
    }

    printf("\n\nDeseja consultar outro valor?\n1-SIM\n2-NÃO\n\n");
    scanf("%i",&resposta);
    if(resposta == 1){
        return main();
    }
    else{
        return 0;
    }
    //Ana Carolina Veiga da Silva - TADS20
}
