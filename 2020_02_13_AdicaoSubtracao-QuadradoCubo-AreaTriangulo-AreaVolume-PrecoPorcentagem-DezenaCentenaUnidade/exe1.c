#include <stdio.h>

int main() {

     float saldo;
     float saque;
     printf("Digitar saldo: ");
     scanf(" %f", &saldo);
     printf("Digitar saque: ");
     scanf(" %f", &saque);
     saldo = saldo - saque;
     printf("Saldo atual =  %f", saldo);
     
     return 0;
}