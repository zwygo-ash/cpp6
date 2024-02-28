// convert inch to feet
#include <iostream>

int main() {

	using namespace std;
	const double INCHES2FEET = 1.0 / 12.0;

	int inch;
	cout << "Pls enter your height in inch:___\b\b\b";
	cin >> inch;
	
	cout << "Your height in feet is: " << inch * INCHES2FEET << endl;

	return 0;
}