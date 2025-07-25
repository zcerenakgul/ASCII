#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main() {
	int charNumber;
	cout << "Please enter the char number you want to generate: ";
	cin >> charNumber;
	cout << endl;

	srand(time(NULL));
	for (int i = 0; i < charNumber; i++) {
	int random = rand() % 34 + 98;
	cout << char(random) << endl;
		cout << endl;

	}
}

