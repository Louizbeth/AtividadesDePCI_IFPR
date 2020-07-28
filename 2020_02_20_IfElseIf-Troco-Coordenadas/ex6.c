#include <stdio.h>
#include <stdlib.h>

int main() {
system("clear");
int idade;
printf("Digitar idade: ");
scanf("%i", &idade);
if (idade < 0) {
  printf("[IDADE INVÁLIDA] \n \n \n");
}
else if (idade <12) {
  printf("[CRIANÇA] \n \n \n");
}
else if (idade >=12 && idade <=17) {
  printf("[ADOLESCENTE] \n \n \n");
}
else if (idade >= 18 && idade <= 59) {
  printf("[ADULTO] \n \n \n");
}
else {
  printf("[IDOSO] \n \n \n");
}

}