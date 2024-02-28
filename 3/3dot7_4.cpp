// sample run:
// Enter the number of seconds: 31600000
// 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
#include <iostream>
#include <cstdio>

int main() {

	using namespace std;
	cout << "Enter the number of seconds: ";
	long seconds;
	cin >> seconds;

	const int DAY = 24 * 60 * 60;
	const int HOUR = 60 * 60;
	const int MIN = 60;

	int days, hours, mins, leftsec;
	days = seconds / DAY;
	leftsec = seconds % DAY;

	hours = leftsec / HOUR;
	leftsec %= HOUR;

	mins = leftsec / MIN;
	leftsec %= MIN;
	printf("%d seconds = %d days, %d hours, %d minutes, %d seconds.\n", seconds, days, hours, mins, leftsec);
	
	return 0;
}