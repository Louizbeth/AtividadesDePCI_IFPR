#include <stdio.h>

int main() {

     float total;
     float preco;
     float percent;
     printf("Digitar preco: ");
     scanf(" %f", &preco);
     printf("Digitar percent: ");
     scanf(" %f", &percent);
     total = (preco*percent)/100;
     printf("Total =  %f", total);
     
     return 0;
}