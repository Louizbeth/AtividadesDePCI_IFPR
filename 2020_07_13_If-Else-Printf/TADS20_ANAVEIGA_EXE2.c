#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    float quantidade,valor,desconto,descontototal,total,resposta;
//Até 10 unidades         10%
//De 11 a 20 unidades     15%
//De 21 a 50 unidades     20%
//Acima de 50 unidades    30%
    printf("Digite a quantidade de itens do produto:    ");
    scanf("%f", &quantidade);
    printf("Digite o valor da unidade do produto:       ");
    scanf("%f", &valor);

    if(quantidade <= 10){
       desconto = (valor/100)*10; 
    }
    else if(quantidade<=20){
        desconto = (valor/100)*15; 
    }
    else if(quantidade<=50){
        desconto = (valor/100)*20;
    }
    else if(quantidade>50){
        desconto = (valor/100)*30;
    }
    
    total = (valor - desconto) * quantidade ;
    descontototal = desconto*quantidade;

    printf("\nTotal da compra:      %.2f", total);
    printf("\nValor do desconto:    %.2f", descontototal);
    
    printf("\n\nDeseja consultar outro valor?\n1-SIM\n2-NÃO\n\n");
    scanf("%f",&resposta);
    if(resposta == 1){
        return main();
    }
    else{
        return 0;
    }
    //Ana Carolina Veiga da Silva - TADS20
}
