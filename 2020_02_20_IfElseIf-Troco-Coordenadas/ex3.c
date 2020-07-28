#include <stdio.h>
#include <stdlib.h>

int main() {
system("clear");
float desempenho;
printf("Digitar desempenho: \n");
scanf("%f", &desempenho);
if (desempenho >= 9) {
  printf("Conceito [A] \n");
}
else if (desempenho >= 7.5) {
  printf("Conceito [B] \n");
}
else if (desempenho >= 6) {
  printf("Conceito [C] \n");
}
else {
  printf("Conceito [D] \n"); }
}