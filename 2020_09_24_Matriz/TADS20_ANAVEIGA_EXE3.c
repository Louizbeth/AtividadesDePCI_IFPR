#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 5
#define COLUNA 5

int main(){
	system("clear");

	int linha, coluna, aux, linha2, coluna2;
	int matriz[LINHA][COLUNA];
	srand(time(NULL));

    printf("═════════════════════════\n");
	printf("Matriz aleatória gerada: \n");
	for(linha = 0; linha < LINHA; linha++){
		for(coluna = 0; coluna < COLUNA; coluna++){
			matriz[linha][coluna] = rand()%50+10;
            printf("%i ", matriz[linha][coluna]);
		}
		printf("\n");
	}

	for(linha = 0; linha < LINHA; linha++){
		for(coluna = 0; coluna < COLUNA; coluna++){
			linha2 = linha;
			coluna2 = coluna;
			if(matriz[linha] == matriz[coluna]){
                for(; coluna2 < COLUNA && linha2 < LINHA; coluna2++, linha2++){
                    aux = matriz[linha][coluna2];
                    matriz[linha][coluna2] = matriz[linha2][coluna];
                    matriz[linha2][coluna] = aux;
                }

			}
		}
	}

    printf("\nMatriz transposta: \n");
	for(linha = 0; linha < LINHA; linha++){
		for(coluna = 0; coluna < COLUNA; coluna++){
			printf("%i ", matriz[linha][coluna]);
            
		}
		printf("\n");
	}
    printf("═════════════════════════\n");
	//Ana Carolina Veiga da Silva - TADS20
    return 0;
}