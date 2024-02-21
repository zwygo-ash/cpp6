
#include <iostream>

using namespace std;

void p1();
void p2();

int main() {

	p1(); p1();
	p2(); p2();
	return 0;
}

void p1() {
	cout << "Three blind mice" << endl;
}
void p2() {
	cout << "See how they run" << endl;
}