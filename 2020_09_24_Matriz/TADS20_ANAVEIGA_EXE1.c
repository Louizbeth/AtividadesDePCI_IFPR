#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main(){
    srand(time(NULL));
    system("clear");
    int matriz[TAM][TAM], copia;
    int flags[TAM][TAM], flag, var, num, linha2, coluna2;

    int linha,coluna;

    for(linha = 0;linha<TAM;linha++){
        for(coluna = 0;coluna<TAM;coluna++){
            flags[linha][coluna] = 0;
        }
    }
    
    for(linha = 0;linha<TAM;linha++){
        for(coluna = 0;coluna<TAM;coluna++){
            int numGerado = rand()%40+10; 
            flag = 0;

            do{
                flag = 0;
                for(int linha2 = 0;linha2<TAM;linha2++){
                    for(int coluna2 = 0;coluna2<TAM;coluna2++){
                        if(numGerado == flags[linha2][coluna2]) {
                            flag = 1;
                        }
                    }
                }
                if(flag == 1) {
                    numGerado = rand()%40+10; 
                }
            } while(flag != 0);

            matriz[linha][coluna] = numGerado;
            flags[linha][coluna] = numGerado;

        }
    }
    printf("══════════════\n");
    for(linha = 0;linha<TAM;linha++){
        for(coluna = 0;coluna<TAM;coluna++){
            printf("%i ",matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("══════════════\n");
    
    for(linha = 0;linha<TAM;linha++){
        for(coluna = 0;coluna<TAM;coluna++){
            for(linha2 = 0;linha2<TAM;linha2++){
                for(coluna2 = 0;coluna2<TAM;coluna2++){
                    if(matriz[linha][coluna]<matriz[linha2][coluna2]){
                        copia = matriz[linha][coluna];
                        matriz[linha][coluna] = matriz[linha2][coluna2];
                        matriz[linha2][coluna2] = copia;
                    }
                }
            }
                
        }
    }
    printf("══════════════\n");
    for(linha = 0;linha<TAM;linha++){
        for(coluna = 0;coluna<TAM;coluna++){
            printf("%i ",matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("══════════════\n");
//Ana Carolina Veiga da Silva - TADS20
    return 0;
}
