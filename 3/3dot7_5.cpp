// sample output:
// Enter the world's population: 6898758899
// Enter the population of the US : 310783781
// The population of the US is 4.50492 % of the world population.

#include <iostream>

int main() {

	using namespace std;

	long long worldsPopulation = 8005176000;
	int populationOfChina = 1410000000;
	cout << "The population of the China is " << 1.0 * populationOfChina / worldsPopulation * 100
		<< " % of the world population." << endl;

	return 0;
}