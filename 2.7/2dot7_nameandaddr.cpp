
#include <iostream>

using namespace std;

void showname();
void showaddr();

int main() {

	showname();
	showaddr();
	return 0;
}

void showname() {
	cout << "name: bigcpp" << endl;
}

void showaddr() {
	cout << "address: Earth" << endl;
}

