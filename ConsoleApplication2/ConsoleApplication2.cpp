#include <iostream>

using namespace std;

int main() {
		
	double value;
	int con;
	double result;
	
	cout << "******* Temperature Converter *******\n" << "\n";
	cout << "Any value in the chosen degree will be converted to the remaining degrees.\n";
	cout << "1 for C°. 2 for F°. 3 for K: ";
	cin >> con;

	switch (con) {
	case 1:
		cout << "\nWhich is the temperature in C°?: ";
		cin >> value;
		break;
	case 2:
		cout << "\nWhich is the temperature in F°?: ";
		cin >> value;
		break;
	case 3:
		cout << "\nWhich is the temperature in K?: ";
		cin >> value;
		break;
	}
		

	switch (con) {
	case 1:
		cout << "\nThe temp in F° is " << (value * 9 / 5) + 32 << "°.";
		cout << "\nThe temp in K is " << value + 273.15 << "K.";
		break;
	case 2:
		cout << "\nThe temp in C° is " << (value - 32) * 5 / 9 << "°.";
		cout << "\nThe temp in K is " << (value - 32) * 5 / 9 + 273.15 << "K.";
		break;
	case 3:
		cout << "\nThe temp in C° is " << value - 273 << "°.";
		cout << "\nThe temp in F° is " << (value - 273) * 1.8 + 32 << "°.";
		break;
	}


	return 0;

	}