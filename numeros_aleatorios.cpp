#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;
int main() {
	srand(time(NULL));
	for(int i = 0; i < 10; i++) {
		int a = rand() % 10;// o valor varia de 0 a 9
		cout << "o numero aleatorio da vez foi: " << a << endl;
	}
	return 0;
}
