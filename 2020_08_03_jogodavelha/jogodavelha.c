#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main() {

	int player,final,verification,winner,ptsplayer1 = 0,ptsplayer2 = 0; 
	char a, b, c, d, e, f, g, h, i;
	char play, move;
	
	play = 's';
	while(play == 's' || play == 'S') {
		
		player = 1;
		final = 0;
		a = ' ';
		b = ' ';
		c = ' ';
		d = ' ';
		e = ' ';
		f = ' ';
		g = ' ';
		h = ' ';
		i = ' ';

		do {
			system("clear");
			printf("\e[0;31m");
			printf(" _____________________________________\n");
			printf("│  _________________________________  │\n");
			printf("│ │                                 │ │\n");
			printf("│ │  ");
			printf("\e[0;33m");
			printf("       ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄       ");
			printf("\e[0;31m");
			printf("  │ │\n│ │  ");
			printf("\e[0;33m");
			printf("       █▒▒░░░░░░░░░▒▒█       ");
			printf("\e[0;31m");
			printf("  │ │\n│ │          ");
			printf("\e[0;33m");
			printf("█░░█░░░░░█░░█");
			printf("\e[0;31m");
			printf("          │ │\n│ │       ");
			printf("\e[0;33m");
			printf("▄▄  █░░░▀█▀░░░█  ▄▄");
			printf("\e[0;31m");
			printf("       │ │\n│ │      ");
			printf("\e[0;33m");
			printf("█░░█ ▀▄░░░░░░░▄▀ █░░█");
			printf("\e[0;31m");
			printf("      │ │\n");
			printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
			printf("│ │      █░░░");
	        printf("\e[0;33m");
			printf("🄹 🄾 🄶 🄾  🄳 🄰");
			printf("\e[0;31m");
			printf(" ░░░█      │ │\n");
			printf("│ │      █░░░  ");
			printf("\e[0;33m");
			printf("🅅 🄴 🄻 🄷 🄰");
			printf("\e[0;31m");
			printf("  ░░░█      │ │\n");
			printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
			printf("│ │                                 │ │\n");
			printf ("│ │   ");
			printf("\e[0;33m");
			printf("Tabuleiro");
	        printf("\e[0;31m");
			printf("       ");
			printf("\e[0;33m");
			printf("Jogo da Velha ");
	        printf("\e[0;31m");
			printf("│ │\n│ │                                 │ │\n│ │");
			printf("\e[0m");
			printf("     │   │             |   |     ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf("   a │ b │ c         %c │ %c │ %c   ", a, b, c);
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf("  ___│___│___       ___│___│___  ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("     │   │             │   │     ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("   d │ e │ f         %c │ %c │ %c   ", d, e, f);
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("  ___│___│___       ___│___│___  ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("     │   │             │   │     ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("   g │ h │ i         %c │ %c │ %c   ", g, h, i);
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("     │   │             │   │     ");
			printf("\e[0;31m");
			printf("│ │\n│ │                                 │ │");
			printf ("\n│ │_________________________________│ │\n");
			printf("│ │                │                │ │\n│ │");
			printf("\e[0;33m");
			printf (" Jogador 01:[O] ");
			printf("\e[0;31m");
			printf("│");
			printf("\e[0;33m");
			printf(" Jogador 02:[X] ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0;33m");
			printf(" Pontos:   %i    ",ptsplayer1);
			printf("\e[0;31m");
			printf("│");
			printf("\e[0;33m");
			printf(" Pontos:   %i    ",ptsplayer2);
			printf("\e[0;31m");
			printf("│ │\n│ │________________│________________│ │\n");
			printf("│_____________________________________│\n");
			printf("\e[0m");

			if(verification == 1){
				printf("\n\n[JOGADA INVÁLIDA]");
			}

			
			if(player == 1) {
				printf("\e[0;33m");
				printf("\n\n Jogador 01 - Escolha uma jogada: ");
				printf("\e[0m");
				__fpurge(stdin);
				scanf("%c", &move);
				verification = 0;

				// Verifica jogada - Jogador 01
				switch(move) {

					case 'a':
							if(a != 'O' && a != 'X'){
								a = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'A':
							if(a != 'O' && a != 'X'){
								a = 'O';
							}
							else{
								verification = 1;
							}
							break;
		
					case 'b':
							if(b != 'O' && b != 'X'){
								b = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'B':
							if(b != 'O' && b != 'X'){
								b = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'c':
							if(c != 'O' && c != 'X'){
								c = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'C':
						if(c != 'O' && c != 'X'){
								c = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'd':
							if(d!= 'O' && d != 'X'){
								d = 'O';
							}	
							else{
								verification = 1;
							}
							break;

					case 'D':
							if(d!= 'O' && d != 'X'){
								d = 'O';
							}	
							else{
								verification = 1;
							}
							break;

					case 'e':
							if(e!= 'O' && e != 'X'){
								e = 'O';
							}
							else{
								verification = 1;					
							}
							break;
					case 'E':
							if(e!= 'O' && e != 'X'){
								e = 'O';
							}
							else{
								verification = 1;					
							}
							break;
					case 'f':
							if(f != 'O' && f != 'X'){
								f = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'F':
							if(f != 'O' && f != 'X'){
								f = 'O';
							}
							else{
								verification = 1;
							}
							break;
					case 'g':
							if(g != 'O' && g != 'X'){
								g = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'G':
							if(g != 'O' && g != 'X'){
								g = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'h':
							if(h != 'O' && h != 'X'){
								h = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'H':
							if(h != 'O' && h != 'X'){
								h = 'O';
							}
							else{
								verification = 1;
							}
							break;

					case 'i':
							if(i != 'O' && i != 'X'){
								i = 'O';
							}
							else{
								verification = 1;
							}	
							break;

					case 'I':
							if(i != 'O' && i != 'X'){
								i = 'O';
							}
							else{
								verification = 1;
							}	
							break;

					default :
							verification = 1;
							break;
							
				}
				if(verification == 0){
					player = 2;
				}
			}

			else {
				printf("\e[0;33m");
				printf("\n\n Jogador 02 - Escolha uma jogada: ");
				printf("\e[0m");
				__fpurge(stdin);
				scanf("%c", &move);
				verification = 0;

				// Verifica jogada - Jogador 01
				switch(move) {

					case 'a':
							if(a != 'O' && a != 'X'){
								a = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'A':
							if(a != 'O' && a != 'X'){
								a = 'X';
							}
							else{
								verification = 1;
							}
							break;
		
					case 'b':
							if(b != 'O' && b != 'X'){
								b = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'B':
							if(b != 'O' && b != 'X'){
								b = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'c':
							if(c != 'O' && c != 'X'){
								c = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'C':
						if(c != 'O' && c != 'X'){
								c = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'd':
							if(d!= 'O' && d != 'X'){
								d = 'X';
							}	
							else{
								verification = 1;
							}
							break;

					case 'D':
							if(d!= 'O' && d != 'X'){
								d = 'X';
							}	
							else{
								verification = 1;
							}
							break;

					case 'e':
							if(e!= 'O' && e != 'X'){
								e = 'X';
							}
							else{
								verification = 1;					
							}
							break;
					case 'E':
							if(e!= 'O' && e != 'X'){
								e = 'X';
							}
							else{
								verification = 1;					
							}
							break;
					case 'f':
							if(f != 'O' && f != 'X'){
								f = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'F':
							if(f != 'O' && f != 'X'){
								f = 'X';
							}
							else{
								verification = 1;
							}
							break;
					case 'g':
							if(g != 'O' && g != 'X'){
								g = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'G':
							if(g != 'O' && g != 'X'){
								g = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'h':
							if(h != 'O' && h != 'X'){
								h = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'H':
							if(h != 'O' && h != 'X'){
								h = 'X';
							}
							else{
								verification = 1;
							}
							break;

					case 'i':
							if(i != 'O' && i != 'X'){
								i = 'X';
							}
							else{
								verification = 1;
							}	
							break;

					case 'I':
							if(i != 'O' && i != 'X'){
								i = 'X';
							}
							else{
								verification = 1;
							}	
							break;
					
					default :
							verification = 1;
							break;
				}

				if(verification == 0){
					player = 1;
				}

				
			}
			if((a == 'O' && d == 'O' && g == 'O')||(b == 'O' && e == 'O' && h == 'O')||(c == 'O' && f == 'O' && i == 'O')||(a == 'O' && b == 'O' && c == 'O')||(d == 'O' && e == 'O' && f == 'O')||(g == 'O' && h == 'O' && i == 'O')||(a == 'O' && e == 'O' && i == 'O')||(c == 'O' && e == 'O' && g == 'O')){
				winner = 1;
				final = 1;
				ptsplayer1++;
			}
			else if((a == 'X' && d == 'X' && g == 'X')||(b == 'X' && e == 'X' && h == 'X')||(c == 'X' && f == 'X' && i == 'X')||(a == 'X' && b == 'X' && c == 'X')||(d == 'X' && e == 'X' && f == 'X')||(g == 'X' && h == 'X' && i == 'X')||(a == 'X' && e == 'X' && i == 'X')||(c == 'X' && e == 'X' && g == 'X')){
				winner = 2;
				final = 1;
				ptsplayer2++;
			}
			else if(a != ' ' && b != ' ' && c != ' ' && d != ' ' && e != ' ' && f != ' ' && g != ' ' && h != ' ' && i != ' '){
				winner = 3;
				final = 1;
			}
		} while (final != 1);

		//printf para atualizar o tabuleiro
		if(winner == 1){
			system("clear");	
			printf("\e[0;31m");
			printf(" _____________________________________\n");
			printf("│  _________________________________  │\n");
			printf("│ │                                 │ │\n");
			printf("│ │  ");
			printf("\e[0;33m");
			printf("       ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄       ");
			printf("\e[0;31m");
			printf("  │ │\n│ │  ");
			printf("\e[0;33m");
			printf("       █▒▒░░░░░░░░░▒▒█       ");
			printf("\e[0;31m");
			printf("  │ │\n│ │          ");
			printf("\e[0;33m");
			printf("█░░█░░░░░█░░█");
			printf("\e[0;31m");
			printf("          │ │\n│ │       ");
			printf("\e[0;33m");
			printf("▄▄  █░░░▀█▀░░░█  ▄▄");
			printf("\e[0;31m");
			printf("       │ │\n│ │      ");
			printf("\e[0;33m");
			printf("█░░█ ▀▄░░░░░░░▄▀ █░░█");
			printf("\e[0;31m");
			printf("      │ │\n");
			printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
			printf("│ │      █░░░");
	        printf("\e[0;33m");
			printf("🄹 🄾 🄶 🄾  🄳 🄰");
			printf("\e[0;31m");
			printf(" ░░░█      │ │\n");
			printf("│ │      █░░░  ");
			printf("\e[0;33m");
			printf("🅅 🄴 🄻 🄷 🄰");
			printf("\e[0;31m");
			printf("  ░░░█      │ │\n");
			printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
			printf("│ │                                 │ │\n");
			printf ("│ │   ");
			printf("\e[0;33m");
			printf("Tabuleiro");
	        printf("\e[0;31m");
			printf("       ");
			printf("\e[0;33m");
			printf("Jogo da Velha ");
	        printf("\e[0;31m");
			printf("│ │\n│ │                                 │ │\n│ │");
			printf("\e[0m");
			printf("     │   │             |   |     ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf("   a │ b │ c         %c │ %c │ %c   ", a, b, c);
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf("  ___│___│___       ___│___│___  ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("     │   │             │   │     ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("   d │ e │ f         %c │ %c │ %c   ", d, e, f);
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("  ___│___│___       ___│___│___  ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("     │   │             │   │     ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("   g │ h │ i         %c │ %c │ %c   ", g, h, i);
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("     │   │             │   │     ");
			printf("\e[0;31m");
			printf("│ │\n│ │                                 │ │");
			printf ("\n│ │_________________________________│ │\n");
			printf("│ │                │                │ │\n│ │");
			printf("\e[0;33m");
			printf (" Jogador 01:[O] ");
			printf("\e[0;31m");
			printf("│");
			printf("\e[0;33m");
			printf(" Jogador 02:[X] ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0;33m");
			printf(" Pontos:   %i    ",ptsplayer1);
			printf("\e[0;31m");
			printf("│");
			printf("\e[0;33m");
			printf(" Pontos:   %i    ",ptsplayer2);
			printf("\e[0;31m");
			printf("│ │\n│ │________________│________________│ │\n");
			printf("│_____________________________________│\n");
			printf(" _____________________________________ \n");
			printf("│                                     │\n│");
			printf("\e[0m");
			printf("     JOGADOR 1 VENCE A PARTIDA!      ");
			printf("\e[0;31m");
			printf("│\n│_____________________________________│\n");
			printf("\e[0m");
		}
		if(winner == 2){
			system("clear");	
			printf("\e[0;31m");
			printf(" _____________________________________\n");
			printf("│  _________________________________  │\n");
			printf("│ │                                 │ │\n");
			printf("│ │  ");
			printf("\e[0;33m");
			printf("       ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄       ");
			printf("\e[0;31m");
			printf("  │ │\n│ │  ");
			printf("\e[0;33m");
			printf("       █▒▒░░░░░░░░░▒▒█       ");
			printf("\e[0;31m");
			printf("  │ │\n│ │          ");
			printf("\e[0;33m");
			printf("█░░█░░░░░█░░█");
			printf("\e[0;31m");
			printf("          │ │\n│ │       ");
			printf("\e[0;33m");
			printf("▄▄  █░░░▀█▀░░░█  ▄▄");
			printf("\e[0;31m");
			printf("       │ │\n│ │      ");
			printf("\e[0;33m");
			printf("█░░█ ▀▄░░░░░░░▄▀ █░░█");
			printf("\e[0;31m");
			printf("      │ │\n");
			printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
			printf("│ │      █░░░");
	        printf("\e[0;33m");
			printf("🄹 🄾 🄶 🄾  🄳 🄰");
			printf("\e[0;31m");
			printf(" ░░░█      │ │\n");
			printf("│ │      █░░░  ");
			printf("\e[0;33m");
			printf("🅅 🄴 🄻 🄷 🄰");
			printf("\e[0;31m");
			printf("  ░░░█      │ │\n");
			printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
			printf("│ │                                 │ │\n");
			printf ("│ │   ");
			printf("\e[0;33m");
			printf("Tabuleiro");
	        printf("\e[0;31m");
			printf("       ");
			printf("\e[0;33m");
			printf("Jogo da Velha ");
	        printf("\e[0;31m");
			printf("│ │\n│ │                                 │ │\n│ │");
			printf("\e[0m");
			printf("     │   │             |   |     ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf("   a │ b │ c         %c │ %c │ %c   ", a, b, c);
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf("  ___│___│___       ___│___│___  ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("     │   │             │   │     ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("   d │ e │ f         %c │ %c │ %c   ", d, e, f);
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("  ___│___│___       ___│___│___  ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("     │   │             │   │     ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("   g │ h │ i         %c │ %c │ %c   ", g, h, i);
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("     │   │             │   │     ");
			printf("\e[0;31m");
			printf("│ │\n│ │                                 │ │");
			printf ("\n│ │_________________________________│ │\n");
			printf("│ │                │                │ │\n│ │");
			printf("\e[0;33m");
			printf (" Jogador 01:[O] ");
			printf("\e[0;31m");
			printf("│");
			printf("\e[0;33m");
			printf(" Jogador 02:[X] ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0;33m");
			printf(" Pontos:   %i    ",ptsplayer1);
			printf("\e[0;31m");
			printf("│");
			printf("\e[0;33m");
			printf(" Pontos:   %i    ",ptsplayer2);
			printf("\e[0;31m");
			printf("│ │\n│ │________________│________________│ │\n");
			printf("│_____________________________________│\n");
			printf(" _____________________________________ \n");
			printf("│                                     │\n│");
			printf("\e[0m");
			printf("     JOGADOR 2 VENCE A PARTIDA!      ");
			printf("\e[0;31m");
			printf("│\n│_____________________________________│\n");
			printf("\e[0m");
		}
		if(winner == 3){
			system("clear");	
			printf("\e[0;31m");
			printf(" _____________________________________\n");
			printf("│  _________________________________  │\n");
			printf("│ │                                 │ │\n");
			printf("│ │  ");
			printf("\e[0;33m");
			printf("       ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄       ");
			printf("\e[0;31m");
			printf("  │ │\n│ │  ");
			printf("\e[0;33m");
			printf("       █▒▒░░░░░░░░░▒▒█       ");
			printf("\e[0;31m");
			printf("  │ │\n│ │          ");
			printf("\e[0;33m");
			printf("█░░█░░░░░█░░█");
			printf("\e[0;31m");
			printf("          │ │\n│ │       ");
			printf("\e[0;33m");
			printf("▄▄  █░░░▀█▀░░░█  ▄▄");
			printf("\e[0;31m");
			printf("       │ │\n│ │      ");
			printf("\e[0;33m");
			printf("█░░█ ▀▄░░░░░░░▄▀ █░░█");
			printf("\e[0;31m");
			printf("      │ │\n");
			printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
			printf("│ │      █░░░");
	        printf("\e[0;33m");
			printf("🄹 🄾 🄶 🄾  🄳 🄰");
			printf("\e[0;31m");
			printf(" ░░░█      │ │\n");
			printf("│ │      █░░░  ");
			printf("\e[0;33m");
			printf("🅅 🄴 🄻 🄷 🄰");
			printf("\e[0;31m");
			printf("  ░░░█      │ │\n");
			printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
			printf("│ │                                 │ │\n");
			printf ("│ │   ");
			printf("\e[0;33m");
			printf("Tabuleiro");
	        printf("\e[0;31m");
			printf("       ");
			printf("\e[0;33m");
			printf("Jogo da Velha ");
	        printf("\e[0;31m");
			printf("│ │\n│ │                                 │ │\n│ │");
			printf("\e[0m");
			printf("     │   │             |   |     ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf("   a │ b │ c         %c │ %c │ %c   ", a, b, c);
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf("  ___│___│___       ___│___│___  ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("     │   │             │   │     ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("   d │ e │ f         %c │ %c │ %c   ", d, e, f);
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("  ___│___│___       ___│___│___  ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("     │   │             │   │     ");
			printf("\e[0;31m");
			printf("│ │\n│ │");
			printf("\e[0m");
			printf ("   g │ h │ i         %c │ %c │ %c   ", g, h, i);
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0m");
			printf("     │   │             │   │     ");
			printf("\e[0;31m");
			printf("│ │\n│ │                                 │ │");
			printf ("\n│ │_________________________________│ │\n");
			printf("│ │                │                │ │\n│ │");
			printf("\e[0;33m");
			printf (" Jogador 01:[O] ");
			printf("\e[0;31m");
			printf("│");
			printf("\e[0;33m");
			printf(" Jogador 02:[X] ");
			printf("\e[0;31m");
			printf ("│ │\n│ │");
			printf("\e[0;33m");
			printf(" Pontos:   %i    ",ptsplayer1);
			printf("\e[0;31m");
			printf("│");
			printf("\e[0;33m");
			printf(" Pontos:   %i    ",ptsplayer2);
			printf("\e[0;31m");
			printf("│ │\n│ │________________│________________│ │\n");
			printf("│_____________________________________│\n");
			printf(" _____________________________________ \n");
			printf("│                                     │\n│");
			printf("\e[0m");
			printf("       VELHA! PARTIDA EMPATADA.      ");
			printf("\e[0;31m");
			printf("│\n│_____________________________________│\n");
			printf("\e[0m");
		}
		if(ptsplayer1<10 && ptsplayer2<10){
		printf("\n\nContinuar jogando (s) ou (n)? ");
		__fpurge(stdin);
		scanf("%c", &play);		
		system("clear");
		}

		if(ptsplayer1 == 10 || ptsplayer2 == 10){
			system("clear");	
			
			if(ptsplayer1 == 10){
				printf("\e[0;31m");
				printf(" _____________________________________\n");
				printf("│  _________________________________  │\n");
					printf("│ │                                 │ │\n");
				printf("│ │  ");
				printf("\e[0;33m");
				printf("       ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄       ");
				printf("\e[0;31m");
				printf("  │ │\n│ │  ");
				printf("\e[0;33m");
				printf("       █▒▒░░░░░░░░░▒▒█       ");
				printf("\e[0;31m");
				printf("  │ │\n│ │          ");
				printf("\e[0;33m");
				printf("█░░█░░░░░█░░█");
				printf("\e[0;31m");
				printf("          │ │\n│ │       ");
				printf("\e[0;33m");
				printf("▄▄  █░░░▀█▀░░░█  ▄▄");
				printf("\e[0;31m");
				printf("       │ │\n│ │      ");
				printf("\e[0;33m");
				printf("█░░█ ▀▄░░░░░░░▄▀ █░░█");
				printf("\e[0;31m");
				printf("      │ │\n");
				printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
				printf("│ │      █░░░");
	   		    printf("\e[0;33m");
				printf("🄹 🄾 🄶 🄾  🄳 🄰");
				printf("\e[0;31m");
				printf(" ░░░█      │ │\n");
				printf("│ │      █░░░  ");
				printf("\e[0;33m");
				printf("🅅 🄴 🄻 🄷 🄰");
				printf("\e[0;31m");
				printf("  ░░░█      │ │\n");
				printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
				printf("│ │                                 │ │\n");
				printf ("│ │   ");
				printf("\e[0;33m");
				printf("Tabuleiro");
	   		    printf("\e[0;31m");
				printf("       ");
				printf("\e[0;33m");
				printf("Jogo da Velha ");
	       		printf("\e[0;31m");
				printf("│ │\n│ │                                 │ │\n│ │");
				printf("\e[0m");
				printf("     │   │             |   |     ");
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf("   a │ b │ c         %c │ %c │ %c   ", a, b, c);
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf("  ___│___│___       ___│___│___  ");
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf ("     │   │             │   │     ");
				printf("\e[0;31m");
				printf ("│ │\n│ │");
				printf("\e[0m");
				printf("   d │ e │ f         %c │ %c │ %c   ", d, e, f);
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf ("  ___│___│___       ___│___│___  ");
				printf("\e[0;31m");
				printf ("│ │\n│ │");
				printf("\e[0m");
				printf("     │   │             │   │     ");
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf ("   g │ h │ i         %c │ %c │ %c   ", g, h, i);
				printf("\e[0;31m");
				printf ("│ │\n│ │");
				printf("\e[0m");
				printf("     │   │             │   │     ");
				printf("\e[0;31m");
				printf("│ │\n│ │                                 │ │");
				printf ("\n│ │_________________________________│ │\n");
				printf("│ │                │                │ │\n│ │");
				printf("\e[0;33m");
				printf (" Jogador 01:[O] ");
				printf("\e[0;31m");
				printf("│");
				printf("\e[0;33m");
				printf(" Jogador 02:[X] ");
				printf("\e[0;31m");
				printf ("│ │\n│ │");
				printf("\e[0;33m");
				printf(" Pontos:   %i   ",ptsplayer1);
				printf("\e[0;31m");
				printf("│");
				printf("\e[0;33m");
				printf(" Pontos:   %i    ",ptsplayer2);
				printf("\e[0;31m");
				printf("│ │\n│ │________________│________________│ │\n");
				printf("\e[0m");
				printf("\e[0;31m");
				printf("│  _________________________________  │\n");
				printf("│ │                                 │ │");
				printf("\n│ │            ");
				printf("\e[0m");
				printf("FIM DE JOGO!");
				printf("\e[0;31m");
				printf("         │ │\n");
				printf("│ │          ");
				printf("\e[0m");
				printf("JOGADOR 2 VENCEU!      ");
				printf("\e[0;31m");
				printf("│ │\n│ │_________________________________│ │\n");
				printf("│_____________________________________│\n");
				printf("\e[0m");

			}

			if(ptsplayer2 == 10){
				printf("\e[0;31m");
				printf(" _____________________________________\n");
				printf("│  _________________________________  │\n");
				printf("│ │                                 │ │\n");
				printf("│ │  ");
				printf("\e[0;33m");
				printf("       ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄       ");
				printf("\e[0;31m");
				printf("  │ │\n│ │  ");
				printf("\e[0;33m");
				printf("       █▒▒░░░░░░░░░▒▒█       ");
				printf("\e[0;31m");
				printf("  │ │\n│ │          ");
				printf("\e[0;33m");
				printf("█░░█░░░░░█░░█");
				printf("\e[0;31m");
				printf("          │ │\n│ │       ");
				printf("\e[0;33m");
				printf("▄▄  █░░░▀█▀░░░█  ▄▄");
				printf("\e[0;31m");
				printf("       │ │\n│ │      ");
				printf("\e[0;33m");
				printf("█░░█ ▀▄░░░░░░░▄▀ █░░█");
				printf("\e[0;31m");
				printf("      │ │\n");
				printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
				printf("│ │      █░░░");
		        printf("\e[0;33m");
				printf("🄹 🄾 🄶 🄾  🄳 🄰");
				printf("\e[0;31m");
				printf(" ░░░█      │ │\n");
				printf("│ │      █░░░  ");
				printf("\e[0;33m");
				printf("🅅 🄴 🄻 🄷 🄰");
				printf("\e[0;31m");
				printf("  ░░░█      │ │\n");
				printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
				printf("│ │                                 │ │\n");
				printf ("│ │   ");
				printf("\e[0;33m");
				printf("Tabuleiro");
	    	    printf("\e[0;31m");
				printf("       ");
				printf("\e[0;33m");
				printf("Jogo da Velha ");
	    	    printf("\e[0;31m");
				printf("│ │\n│ │                                 │ │\n│ │");
				printf("\e[0m");
				printf("     │   │             |   |     ");
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf("   a │ b │ c         %c │ %c │ %c   ", a, b, c);
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf("  ___│___│___       ___│___│___  ");
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf ("     │   │             │   │     ");
				printf("\e[0;31m");
				printf ("│ │\n│ │");
				printf("\e[0m");
				printf("   d │ e │ f         %c │ %c │ %c   ", d, e, f);
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf ("  ___│___│___       ___│___│___  ");
				printf("\e[0;31m");
				printf ("│ │\n│ │");
				printf("\e[0m");
				printf("     │   │             │   │     ");
				printf("\e[0;31m");
				printf("│ │\n│ │");
				printf("\e[0m");
				printf ("   g │ h │ i         %c │ %c │ %c   ", g, h, i);
				printf("\e[0;31m");
				printf ("│ │\n│ │");
				printf("\e[0m");
				printf("     │   │             │   │     ");
				printf("\e[0;31m");
				printf("│ │\n│ │                                 │ │");
				printf ("\n│ │_________________________________│ │\n");
				printf("│ │                │                │ │\n│ │");
				printf("\e[0;33m");
				printf (" Jogador 01:[O] ");
				printf("\e[0;31m");
				printf("│");
				printf("\e[0;33m");
				printf(" Jogador 02:[X] ");
					printf("\e[0;31m");
				printf ("│ │\n│ │");
				printf("\e[0;33m");
				printf(" Pontos:   %i    ",ptsplayer1);
				printf("\e[0;31m");
				printf("│");
				printf("\e[0;33m");
				printf(" Pontos:   %i   ",ptsplayer2);
				printf("\e[0;31m");
				printf("│ │\n│ │________________│________________│ │\n");
				printf("\e[0m");
				printf("\e[0;31m");
				printf("│  _________________________________  │\n");
				printf("│ │                                 │ │");
				printf("\n│ │            ");
				printf("\e[0m");
				printf("FIM DE JOGO!");
				printf("\e[0;31m");
				printf("         │ │\n");
				printf("│ │          ");
				printf("\e[0m");
				printf("JOGADOR 2 VENCEU!      ");
				printf("\e[0;31m");
				printf("│ │\n│ │_________________________________│ │\n");
				printf("│_____________________________________│\n");
				printf("\e[0m");

			}
			printf("\nJogar novamente (s) ou (n)? ");
			__fpurge(stdin);
			scanf("%c", &play);	
			ptsplayer1 = 0;
			ptsplayer2 = 0;	
			system("clear");
		}
	
	}
	printf("\n\n");
	return 0;
}