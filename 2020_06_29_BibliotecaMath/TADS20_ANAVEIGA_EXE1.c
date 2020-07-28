#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("clear");
    int co, ca, potencia,potenciaco, potenciaca, hipotenusa;
    printf("Cateto Oposto: ");
    scanf("%i",&co);
    printf("Cateto Adjacente: ");
    scanf("%i",&ca);
    potenciaco = pow(co,2); 
    potenciaca = pow(ca,2);
    potencia = (potenciaco+potenciaca);	
    hipotenusa = sqrt(potencia);
    printf("- Hipotenusa = %i\n",hipotenusa);

    //Ana Carolina Veiga da Silva TADS20
    return 0;
}