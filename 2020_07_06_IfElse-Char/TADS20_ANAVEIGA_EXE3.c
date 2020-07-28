#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int idade, resposta;
    //Criança: até 11 anos;
    //Adolescente: dos 12 aos 17 anos;
    //Adulto: dos 18 aos 59 anos;
    //Idoso: 60 anos ou mais;
    printf("Digite a idade (anos):  ");
    scanf("%i", &idade);
    if(idade<12){
        printf("\n- Criança.\n");
    }
    else if(idade<18){
        printf("\n- Adolescente.\n");
    }
    else if(idade<60){
        printf("\n- Adulto.\n");
    }
    else if(idade<122){
        printf("\n- Idoso.\n");
    }
    else{
        printf("\n- Inumano.\n");

    }

    printf("\n\nDeseja consultar outra idade?\n1-SIM\n2-NÃO\n\n");
    scanf("%i",&resposta);
    if(resposta == 1){
        return main();
    }
    else{
        return 0;
    }
//Ana Carolina Veiga da Silva - TADS20
}