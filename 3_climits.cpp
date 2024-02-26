
#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {

	cout << "CHAR_MAX: " << CHAR_MAX << endl;
	cout << "UCHAR_MAX: " << UCHAR_MAX << endl;

	cout << "SHRT_MAX: " << SHRT_MAX << endl;
	cout << "USHRT_MAX: " << USHRT_MAX << endl;

	cout << "INT_MAX: " << INT_MAX << endl;
	cout << "UINT_MAX: " << UINT_MAX << endl;

	cout << "LONG_MAX: " << LONG_MAX << endl;
	cout << "ULONG_MAX: " << ULONG_MAX << endl;

	cout << "LLONG_MAX: " << LLONG_MAX << endl;

	cout << "Minimum int value = " << INT_MIN << endl;

	cout << "Bits per byte = " << CHAR_BIT << endl;

	// for more infor @see "limits.h" & "float.h"

	// sizeof运算符返回类型或变量的大小(字节)
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "std::numeric_limits<int>::digits = "
		<< std::numeric_limits<int>::digits << endl;

	cout << "sizeof(long long) = " << sizeof(long long) << endl;
	cout << "std::numeric_limits<long long>::digits = "
		<< numeric_limits<long long>::digits << endl;

	cout << "sizeof(unsigned long long) = " << sizeof(unsigned long long) << endl;
	cout << "std::numeric_limits<unsigned long long>::digits = "
		<< numeric_limits<unsigned long long>::digits << endl;

	return 0;
}