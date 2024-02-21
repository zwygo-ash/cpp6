
#include <iostream>
using namespace std;

int plusOne(int);

int main() {

	int count = 1;
	cout << "count is " << count << endl;
	
	count = plusOne(count);
	cout << "after calling plusOne method, count is " << count << endl;
	
	return 0;
}

int plusOne(int n) {
	
	return n + 1;
}