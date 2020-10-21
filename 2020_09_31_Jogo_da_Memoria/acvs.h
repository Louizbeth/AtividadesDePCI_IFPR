#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>  
#include <math.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

#define COR_PRETO 		printf("\33[30m");
#define COR_VERMELHO 	printf("\33[31m");
#define COR_VERDE 		printf("\33[32m");
#define COR_LARANJA 	printf("\33[33m");
#define COR_AZUL 		printf("\33[34m");
#define COR_ROXO		printf("\33[35m");
#define COR_AGUA		printf("\33[36m");
#define COR_BRANCO 		printf("\33[37m");

#define ENTER 10

int getch(void) {

    struct termios oldattr, newattr;
    int ch;

    tcgetattr( STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO);
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr);
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr);

    return ch;
}