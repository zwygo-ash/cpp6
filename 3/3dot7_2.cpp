// BMI
#include <iostream>

int main() {

	using namespace std;

	int feet, inch, lbs;
	cout << "Please enter your height in feet and inches below." << endl;
	cout << "feet: ___\b\b\b";
	cin >> feet;
	cout << "inch: ___\b\b\b";
	cin >> inch;
	cout << "and your weight in pound: ___\b\b\b";
	cin >> lbs;

	// convert height in m, weight in kg
	double h_m, w_kg;
	h_m = (feet * 12 + inch) * 0.0254;	// 1 inch = 0.0254 meter
	w_kg = lbs / 2.2;					// 1 kg = 2.2 pound
	cout << "Your height in meter is " << h_m << ", weight in kilogram is " << w_kg << endl;
	cout << "Your BMI(Body Mass Index): " << w_kg / (h_m * h_m) << endl;

	return 0;
}