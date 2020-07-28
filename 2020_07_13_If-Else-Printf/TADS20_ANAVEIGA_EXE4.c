#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int valor1,valor2,resposta;

    printf ("Digite dois valores de 1 a 7: ");
    scanf("%i %i", &valor1,&valor2);

printf("[");

    if(valor1 == 1){
        printf("Domingo");
    }
    if(valor1 == 2){
        printf("Segunda-Feira");
    }
    if(valor1 == 3){
        printf("Terça-Feira");
    }
    if(valor1 == 4){
        printf("Quarta-Feira");
    }
    if(valor1 == 5){
        printf("Quinta-Feira");
    }
    if(valor1 == 6){
        printf("Sexta-Feira");
    }
    if(valor1 == 7){
        printf("Sábado");
    }

    if((valor1>=1 && valor1<=7) && (valor2>=1 && valor2<=7)){
        printf(", ");
    }
        

    if(valor2 == 1){
        printf("Domingo");
    }
    if(valor2 == 2){
        printf("Segunda-Feira");
    }
    if(valor2 == 3){
        printf("Terça-Feira");
    }
    if(valor2 == 4){
        printf("Quarta-Feira");
    }
    if(valor2 == 5){
            printf("Quinta-Feira");
    }
    if(valor2 == 6){
            printf("Sexta-Feira");
    }
    if(valor2 == 7){
            printf("Sábado");
    }
    
    printf("]");


        
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