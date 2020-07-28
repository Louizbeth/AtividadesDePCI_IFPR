#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int vc,vp,troco,qNotas,n100 = 0,n50 = 0,n20 = 0,n10 = 0,n5 = 0,n2 = 0,n1 = 0;

    printf("Valor da compra: ");
    scanf("%i",&vc);
    printf("Valor do pagamento: ");
    scanf("%i",&vp);
    troco = vp-vc;
    qNotas = vp-vc;
    if (qNotas>=100) {
        n100 = qNotas/100;
        qNotas = qNotas%100;
    } 
    if (qNotas>=50) {
        n50 = qNotas/50;
        qNotas = qNotas%50;
    }
    if (qNotas>=20) {
        n20 = qNotas/20;
        qNotas = qNotas%20;
    }
    if (qNotas>=10) {
        n10 = qNotas/10;
        qNotas = qNotas%10;
    }
    if (qNotas>=5) {
        n5 = qNotas/5;
        qNotas = qNotas%5;
    }
    if (qNotas>=2) {
        n2 = qNotas/2;
        qNotas = qNotas%2;
    }
    if (qNotas>=1) {
        n1 = qNotas/1;
        qNotas = qNotas%1;
    }
        printf("Total do troco: %i \n", troco);
        printf("Notas de 100:   %i \n", n100);
        printf("Notas de 50:    %i \n", n50);
        printf("Notas de 20:    %i \n", n20);
        printf("Notas de 10:    %i \n", n10);
        printf("Notas de 5:     %i \n", n5);
        printf("Notas de 2:     %i \n", n2);
        printf("Notas de 1:     %i \n", n1);
    
}