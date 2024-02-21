
// 自定义方法
// 2024年2月18日

#include <iostream>

void countoff(int);

int main() {

	using namespace std;

	countoff(3);

	int count;
	cout << "Pink an integer: ";
	cin >> count;
	countoff(count);
	cout << "Done!" << endl;

	return 0;
}

void countoff(int n) {
	
	using std::cout;
	using std::endl;
	cout << "says: " << n << "! " << endl;
}