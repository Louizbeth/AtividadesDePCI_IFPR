#include <stdio.h>
#include <stdlib.h>

int main() {
system("clear");
int hora;
printf("Digitar hora: ");
scanf("%i", &hora);
if (hora < 0) {
  printf("[HORA INVÁLIDA]");
}
else if (hora <= 12) {
  printf("[BOM DIA!]");
}
else if (hora <= 18) {
  printf("[BOA TARDE!]");
}
else {
  printf("[BOA NOITE!]"); }
}