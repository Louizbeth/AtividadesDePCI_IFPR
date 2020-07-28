#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int numero, resposta;

    printf("Digite um número:   ");
    scanf("%i", &numero);

    if(numero>0){
        printf("\nO número %i é POSITIVO.\n",numero);
    }
    else if(numero==0){
        printf("\nO número zero é um número NEUTRO, ou seja, não é um número nem positivo e nem negativo.\n");
    }
    else{
        printf("\nO número %i é NEGATIVO.\n",numero);
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