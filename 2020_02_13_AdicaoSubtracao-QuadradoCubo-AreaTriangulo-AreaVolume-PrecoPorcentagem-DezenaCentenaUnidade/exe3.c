#include <stdio.h>

int main() {

     float base;
     float altura;
     float area;
     printf("Digitar base: ");
     scanf(" %f", &base);
     printf("Digitar altura: ");
     scanf(" %f", &altura);
     area = (base * altura)/2;
     printf("Área triângulo =  %f", area);
     
     return 0;
}