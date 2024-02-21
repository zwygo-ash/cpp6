
#include <iostream>

using namespace std;

void display(int, int);

int main() {

	int h, m;
	cout << "Enter the number of hours (0-23): ";
	cin >> h;
	cout << "Enter the number of minutes (0-59): ";
	cin >> m;
	display(h, m);

	return 0;
}

void display(int hour, int minute) {
	cout << "Time: " << hour << ":" << minute << endl;
}