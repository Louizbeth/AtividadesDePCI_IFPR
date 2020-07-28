#include <stdio.h>

int main() {

     int menor;
     int maior;
     int altura;
     int area;
     printf("Digite o valor da base menor:\n");
     scanf(" %i", &menor);
     printf("Digite o valor da base maior:\n");
     scanf(" %i", &maior);
     printf("Digite o valor da altura: \n");
     scanf(" %i", &altura);
     area = (menor+maior)*altura/2;
     printf("Área trapézio =  %i\n", area);
     
     return 0;
}