#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"");
	char r;
	cout<<"*";
	Sleep(1000);
	cout<<"-";
	Sleep(1000);
	cout<<"*";
	Sleep(1000);
	cout << endl <<"ola parceiro, ta afim de um desafio?[S/N]" << endl;
	cin >> r ;
	if(r == 'N' || r == 'n') {
		cout << "'-' tem gente que tem medo de perder ne..."<<endl;
		exit(0);
	}
	if(r == 'S' || r == 's') {
		cout << "Certo!" << endl << "Vou pensar em um numero e vc tem que adivinhar ok?" << endl;
		srand(time(NULL));
		int x = rand() % 10;
		cout << "-_-";
		Sleep(2000);
		system("cls");
		cout << "-_-" << ".";
		Sleep(2000);
		system("cls");
		cout << "-_^" << "..";
		Sleep(2000);
		system("cls");
		cout << "^_-" << "...";
		Sleep(2000);
		system("cls");
		Sleep(2000);
		cout << "^_^" << endl << "ok, digite um numero de 1 a 10" << endl;
		while(true) {
			int y;
			cin >> y;
			if(y == x) {
				cout << "°0° wtf???" << " ";
				Sleep(2000);
				system("cls");
				cout << "-_* vc acertou"<<endl;
				Sleep(500);
				cout << "parece que alguem aqui ganhou do sistema em?"<<endl <<" mas nao fique se achando >_< " << endl <<"quero ver resolver uma conta mais rapido que eu"<<endl;
				exit(1);
			}
			if(y > x) {
				cout << "´-` tente algo menor"<<endl;
				Sleep(2000);
				system("cls");
			}
			if(y < x) {
				cout << ":p tente algo maior"<<endl;
				Sleep(2000);
				system("cls");
			}
		}
	}
	
	
	return 0;
}
