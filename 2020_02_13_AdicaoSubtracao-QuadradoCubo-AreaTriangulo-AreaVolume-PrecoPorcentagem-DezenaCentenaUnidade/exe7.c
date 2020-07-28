#include <stdio.h>

int main() {

     int larg;
     int comp;
     int area;
     int perimetro;
     printf("Digite Largura: \n");
     scanf(" %i", &larg);
     printf("Digite o comprimento: \n");
     scanf(" %i", &comp);
     area = larg * comp;
     perimetro = 2*larg+2*comp;
     printf("Área =  %i\n", area);
     printf("Perímetro =   %i\n", perimetro);
     
     return 0;
}