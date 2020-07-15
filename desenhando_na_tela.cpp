#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
#define max 25
void setdisplay (char str[max][max]) {
	for(int i = 0; i < max; i++) {
		for(int j = 0; j < max; j++) {
			str[i][j] = ' ';
			if(j == 0 || j == max - 1) str[i][j] = '|';
			if(i == 0 || i == max - 1) str[i][j] = '-';
		}
	}
}
void showdisplay(char str[max][max]) {
	for(int i = 0; i < max; i++) {
		cout << endl;
		for(int j = 0; j < max; j++) {
			cout << str[i][j];
		}
	}
}
int main() {
	char ch;
	char display[max][max];
	char pencil = '°';
	int x, y;
	int modo = 0;
	x = y = 1;
	setdisplay(display);
	setlocale(LC_ALL,"");
	display[x][y] = pencil;
	while(true) {
		cout << "aperte 1 para desenhar e 2 para apagar e esc para encerrar" <<  endl << "a -> °" << endl << "s -> 0" << endl << "d -> !" << endl << "você está no modo: " << modo << " |caracter: "<< pencil;
		showdisplay(display);
		ch = getch();
		if(ch == '1') modo = 1;
		if(ch == '2') modo = 2;
		if(ch == 'a') pencil = '°';
		if(ch == 's') pencil = '0';
		if(ch == 'd') pencil = '!';
		if(ch == 27) break;
		if(ch == 'M') {
			if(y+1 < max -1) {
				if(modo == 1)
					display[x][++y] = pencil;
				if(modo == 2) {
					display[x][++y] = '|';
					display[x][y-1] = ' ';
				}
			}
			
		}
		if(ch == 'P') {
			if(x+1 < max-1) {
				if(modo == 1)
					display[++x][y] = pencil;
				if(modo == 2) {
					display[++x][y] = '|';
					display[x-1][y] = ' ';
				}
			}
		}
		if(ch == 'K') {
			if(y -1 > 0) {
				if(modo == 1)
					display[x][--y] = pencil;
				if(modo == 2) {
					display[x][--y] = '|';
					display[x][y+1] = ' ';
				}
			}
		}
		if(ch == 'H') {
			if(x-1 > 0) {
				if(modo == 1)
					display[--x][y] = pencil;
				if(modo == 2) {
					display[--x][y] = '|';
					display[x+1][y] = ' ';
				}
			}
		}
		
		system("cls");
	}
	cout << endl << "Olha lá que bonito ;-)" << endl;
	system("pause");
	return 0;
}
