#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	char a;
	while(true) {
		a = getch();
		if(a == 27) break;
		if(a == 'M')	cout << "--->" << endl;
		if(a == 'K') 	cout << "<---" << endl;
		if(a == 'H') 	cout << "^" << endl << "|"<<endl<<"|"<<endl;
		if(a == 'P')	cout << "|" << endl << "|"<<endl<<"V"<<endl;
	}
	return 0;
}
