// gasoline consumption figure

#include <iostream>

int main() {

	using namespace std;

	int distance, fuelConsumption;
	cout << "How many kilometers you have driven: ____\b\b\b\b";
	cin >> distance;
	cout << "How many liters of gasoline did you consume: ____\b\b\b\b";
	cin >> fuelConsumption;

	cout << "Fuel Comsumption Report (European style): " << 1.0 * fuelConsumption / distance * 100
		<< "L/100km" << endl;

	return 0;
}