#include <Windows.h>
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int main() {

	cout << "COUNT DOWN..." << endl;

	for (int i = 10; i > 0; i--) {
		cout << i << endl;
		if (i == 1) break;
		Sleep(1000);
	}

	cout << "." << endl;
	Sleep(300);
	cout << "." << endl;
	Sleep(300);
	cout << "." << endl;
	Sleep(300);

	cout << "HELLO 2023 !! " << endl << "HAPPY NEW YEAR !!";


	return 0;
}