//Object-based calculator
#include "calculator.hpp"
#include <iostream>

using std::cout;using std::cin;
using std::endl;

int main(){
  	Calculator sequence;
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
				cout << sequence.addTwo(a, b);
			}
			if (operation == 's') {
				cout << sequence.subTwo(a, b);
			}
			if (operation == 'm') {
				cout << sequence.multiTwo(a, b);
			}
			if (operation == 'd') {
				cout << sequence.divTwo(a, b);
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
