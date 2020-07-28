#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int num,maior,menor,resposta;

    printf ("Digite um número inteiro: ");
    scanf("%i", &num); 
    maior = num;
    menor = num;

    while(num>0){
        printf ("Digite um número inteiro: ");
        scanf("%i", &num);

        if(num<menor){
            menor = num;
        }
        
        if(num>maior){
            maior = num;
        }
    }
    printf("\n");
    printf("\e[0;31m");
    printf("═════════════════════════════════\n");
    printf("\e[0m");
    printf("  Maior número: %i\n",maior);
    printf("  Menor número: %i\n",menor);
    printf("\e[0;31m");
    printf("═════════════════════════════════\n");
    
    printf("\n═════════════════════════════════\n");
    printf("\e[0m");
    printf("  Deseja consultar outro valor?\n");
    printf("  1-SIM\n");
    printf("  2-NÃO\n");
    printf("\e[0;31m");
    printf("═════════════════════════════════\n\n");
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