
#include <iostream>

using namespace std;

double celsius2fahrenheit(double);

int main() {

	cout << "Pls enter a Celsius value: ";
	double cels;
	cin >> cels;

	cout << cels << " degrees Celsius is " << celsius2fahrenheit(cels) <<
		" degrees Fahrenheit." << endl;
	return 0;
}

double celsius2fahrenheit(double celsius) {
	double farh = 1.8 * celsius + 32.0;
	return farh;
}