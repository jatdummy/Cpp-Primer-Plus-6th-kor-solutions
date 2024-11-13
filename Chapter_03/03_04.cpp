#include <iostream>

using namespace std;

int main(void){
	const int MINUTE = 60; // 1 minute = 60 seconds
	const int HOUR = 60; // 1 hour = 60 minutes
	const int DAY = 24; // 1 day = 24 hours

	long input;
	long seconds, minutes, hours, days;

	cout << "초 수를 입력하시오: ";
	cin >> input;

	days = input / (MINUTE * HOUR * DAY);
	hours = (input / (MINUTE * HOUR)) % DAY;
	minutes = (input / MINUTE) % HOUR;
	seconds = input % MINUTE;

	cout << input << "초" << " = " << days << "일, " << hours << "시간, " << minutes << "분, " << seconds << "초" << endl;
	return 0;
}