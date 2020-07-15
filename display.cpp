#include <iostream>
#include <conio.h>
#include <locale>
#define max 15
using namespace std;
int main() {
	char display[max+2][max+2];
	char hero = '°';
	char ch;
	int x = 1, y = 1;
	setlocale(LC_ALL,"");
	for(int i = 0; i < max+2; i++) {
		for(int j = 0; j < max+2; j++) {
			display[i][j] = ' ';
			if(i == 0 || i == max+1) {
				//display[i][j] = 186;
				display[i][j] = '-';
			}
			if(j == max+1 || j == 0) {
				//display[i][j] = 205;
				display[i][j] = '|';
			}
		}
	}
	while(true) {
		for(int i = 0; i < max+2; i++) {
			cout << endl;
			for(int j = 0; j < max+2; j++) {
				cout << display[i][j];
			}
			//display[0][0] = 187;
			//display[max+1][max+1] = 188;
			//display[0][max+1] = 201;
			//display[max+1][0] = 200;
			
			display[x][y] = hero; 
		}
		ch = getch();
		if(ch == 27) break;
		if(ch == 'M') {
			if(y+1 < max+1) {
				display[x][++y] = display[x][y];
				display[x][y-1] = ' ';
			} 
		}
		if(ch == 'P') {
			if(x+1 < max+1) {
				display[++x][y] = display[x][y];
				display[x-1][y] = ' ';
			}
		}
		if(ch == 'K') {
			if(y-1 > 0) {
				display[x][--y] = display[x][y];
				display[x][y+1] = ' ';
			}
		}
		if(ch == 'H') {
			if(x-1 > 0) {
				display[--x][y] = display[x][y];
				display[x+1][y] = ' ';
			}
		}
		system("cls");
	}
	return 0;
}
