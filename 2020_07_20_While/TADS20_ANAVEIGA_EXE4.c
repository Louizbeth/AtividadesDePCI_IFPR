#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    //3 variaveis numuser,varwhile,contador -- o contador serve para contar quantos divisores tem
    int numero,a,cont,resposta;
    a = 1;
    cont = 0;
    
    printf("\e[0;31m");
    printf("\n\n══════════════════════════════════\n");
    printf("\e[0m");
    printf("Digite um número: ");
    scanf("%i",&numero);
    

    while(a<=numero){
        if(numero%a == 0){
            cont++;
        }
        a++;
    }

    if(cont == 2){
		printf("\nO número ");
        printf("\e[4;37m");
        printf("É PRIMO!");
            printf("\e[0m");

	}
	else{
		printf("\nO número ");
        printf("\e[4;37m");
        printf("NÃO É PRIMO");
	}
    printf("\e[0;31m");
    printf("\n══════════════════════════════════\n");
    printf("\e[0m");

    printf("\e[0;31m");
    printf("\n══════════════════════════════════\n");
    printf("\e[0m");
    printf("  Deseja realizar outra operação?\n");
    printf("  1-SIM\n");
    printf("  2-NÃO\n");
    printf("\e[0;31m");
    printf("══════════════════════════════════\n\n");
    printf("\e[0m");
    scanf("%i",&resposta);
    
    
    if(resposta == 1){
        return main();
    }
    else{
        return 0;
    }
    //Ana Carolina Veiga da Silva - TADS20

}