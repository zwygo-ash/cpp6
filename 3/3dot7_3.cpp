// latitude in degress

// sample run: 
// Enter a latitude in degrees, minutes, and seconds:
// First, enter the degrees : 37
// Next, enter the minutes of arc : 51
// Finally, enter the seconds of arc : 19
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

#include <iostream>
#include <cstdio>

int main() {

	using namespace std;
	int degree, minute, second;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;

	const double MIN_2_DEGREE = minute / 60.0;
	const double SEC_2_DEGREE = second / 3600.0;
	printf("%d degress, %d minutes, %d seconds = %.4f degrees\n", degree, minute, second,
		(degree + MIN_2_DEGREE + SEC_2_DEGREE));

	return 0;
}