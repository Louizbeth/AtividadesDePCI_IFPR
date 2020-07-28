#include <stdio.h>
#include <stdlib.h>

int main() {
system("clear");
int altura;
int largura;
printf("Digitar altura: ");
scanf("%i", &altura);
printf("Digitar largura:");
scanf("%i", &largura);
if (altura != largura) {
  printf("[RETANGULO] \n \n \n");
}
else {
  printf("[QUADRADO] \n \n \n"); }
}