#include <stdio.h>

int main() {

     float total;
     float preco;
     float desconto;
     float val_desc;
     printf("Digite o valor do preco: \n");
     scanf(" %f", &preco);
     printf("Digite o valor de desconto: \n");
     scanf(" %f", &desconto);
     val_desc = (preco*desconto)/100;
     total = preco-val_desc;
     printf("Total %f", total);
     
     return 0;
}