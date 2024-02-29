// gasoline consumption figure 2
// converts European style (liters per 100 kilometers) to U.S. style (miles per gallon)

#include <iostream>

int main() {

	using namespace std;

	double euc;
	cout << "How many Gasoline consumption per 100 km/L: ____\b\b\b\b";
	cin >> euc;

	// converts to U.S. style
	const double MILE_KM_RATIO = 100 / 62.14;
	const double USGLN_LITER_RATIO = 3.875;
	const double MILEPERGLN_KILOMETERPERLITER_RATIO = MILE_KM_RATIO / USGLN_LITER_RATIO;

	cout << "Fuel Comsumption Report (U.S. style): " << (100 / MILEPERGLN_KILOMETERPERLITER_RATIO) / euc << "mpg" << endl;

	return 0;
}