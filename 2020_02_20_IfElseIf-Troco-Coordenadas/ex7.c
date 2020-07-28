#include <stdio.h>
#include <stdlib.h>

int main() {
system("clear");
int largura;
int altura;
printf("Digite a altura: ");
scanf("%i", &altura);
printf("Digite a largura: ");
scanf("%i", &largura);
if (largura == altura) {
  printf("[QUADRADO]");
} 
else {
  printf("[RETANGULO]");
}

}