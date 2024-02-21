
#include <iostream>

using namespace std;

double ly2asunit(double);

int main() {

	cout << "Enter the number of light years: ";
	double ly;
	cin >> ly;

	double asunit = ly2asunit(ly);
	cout << ly << " light years = " << asunit << " astronomical units." << endl;

	return 0;
}

double ly2asunit(double lyears) {
	return lyears * 63240;
}