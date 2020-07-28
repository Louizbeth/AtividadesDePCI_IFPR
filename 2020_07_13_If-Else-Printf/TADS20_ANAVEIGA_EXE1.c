#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int val1,val2,val3,valmaior,valmenor,resposta;

    printf("Digite três valores inteiros: ");
    scanf("%i %i %i", &val1,&val2,&val3);

    if(val1<val2 && val1<3){
        valmenor = val1;
    }
    else if(val2<val1 && val2<val3){
        valmenor = val2;
    }
    else{
        valmenor = val3;
    }

    if(val1>val2 && val1>val3){
        valmaior = val1;
    }
    else if(val2>val1 && val2>val3){
        valmaior = val2;
    }
    else{
        valmaior = val3;
    }
    printf("\nValor menor: %i\nValor maior: %i\n\n",valmenor,valmaior);
    
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