#include <stdio.h>

int main() {

     int a;
     int b;
     int c;
     int quad;
     int cubo;
     int final;
     printf("Digitar valor (a): ");
     scanf(" %i", &a);
     printf("Digitar valor (b): ");
     scanf(" %i", &b);
     printf("Digitar valor (c): ");
     scanf(" %i", &c);
     quad = a * a;
     cubo = b * b * b;
     final = (quad+cubo)/c;
     printf("Resultado =  %i", final);
     
     return 0;
}