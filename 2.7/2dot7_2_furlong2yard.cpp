
#include <iostream>

using namespace std;

long furlong2yard(long furlongs);

int main() {

	int furlongs;
	cout << "Pls enter the length of furlongs: ";
	cin >> furlongs;
	long yards = furlong2yard(furlongs);
	cout << furlongs << " furlongs equals " << yards << " yards" << endl;
	return 0;
}

long furlong2yard(long furlongs) {
	long yards = furlongs * 220;
	return yards;
}
