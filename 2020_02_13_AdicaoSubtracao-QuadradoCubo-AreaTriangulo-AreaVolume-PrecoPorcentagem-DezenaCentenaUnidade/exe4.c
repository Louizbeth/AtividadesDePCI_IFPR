#include <stdio.h>

int main() {

     float lado;
     float area;
     float volume;
     printf("Digitar lado: ");
     scanf(" %f", &lado);
     area = 6*lado*lado;
     volume = lado*lado*lado;
     printf("Área Lateral =  %f", area);
     printf("Volume =  %f", volume);
     
     return 0;
}