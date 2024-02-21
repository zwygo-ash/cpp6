
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int ageInMonths(int age);

int main() {

	int age;
	cout << "Enter ur age: ";
	cin >> age;
	cout << "Your age in months is " << ageInMonths(age) << endl;

	return 0;
}

int ageInMonths(int age) {
	int months = age * 12;
	return months;
}
