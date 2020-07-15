#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main() {
	char tecla;
	int n = 0;
	do {
		printf("%d ", n++);
		if(kbhit()) {
			tecla = getch();
		}
		if(n % 10 == 0)
		printf("Enter para pausar\n");
		Sleep(500);
	} while(tecla != 13);
}
