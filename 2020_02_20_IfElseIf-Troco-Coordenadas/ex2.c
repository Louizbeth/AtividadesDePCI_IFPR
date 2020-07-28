#include <stdio.h>
#include <stdlib.h>

int main() {
system("clear");
int brasil;
int italia;
printf("Digitar pontos Brasil: ");
scanf(" %i", &brasil);
printf("Digitar pontos Itália: ");
scanf("%i", &italia);
if (brasil > italia) {
printf("[BRASIL VENCEU] \n");
}
else if (italia > brasil) {
printf("[ITALIA VENCEU] \n");
}
else {
printf("[EMPATE] \n"); }
}