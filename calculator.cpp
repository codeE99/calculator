#include <iostream>
#include <string>

using std::cout;using std::cin;
using std::endl;using std::string;

int main() {
	char decide;
	do{
	cout << "Enter two numbers: ";
	double a, b,c ;
	cin >> a >> b;
	
		cout << "\nWhat do you wanna do with them? [a]dd,[s]ubtract,[m]ultiply, or [d]ivide? Press [q] to quit. ";
		char operation;
		cin >> operation;

		if (operation != 'q') {
			if (operation == 'a') {
				c = a + b;
				cout << c;
			}
			if (operation == 's') {
				c = a - b;
				cout << c;
			}
			if (operation == 'm') {
				c = a * b;
				cout << c;
			}
			if (operation == 'd') {
				c = a / b;
				cout << c;
			}
		}
		cout << "\nWanna do more math? [y]es, [n]o: ";
		
		cin >> decide;
		
	}
	while (decide != 'n');
	if (decide == 'n' || decide == 'N') {
		cout << endl;
		cout << "Cool beans. Have a good one!" << endl;
		return 0;

	}
}
