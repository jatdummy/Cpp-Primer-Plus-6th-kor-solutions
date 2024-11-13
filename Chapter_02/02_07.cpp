#include <iostream>

using namespace std;

void show_time(int hour, int min);

int main(void){
	int hour;
	int min;

	cout << "시간 값을 입력하십시오: ";
	cin >> hour;
	cout << "분 값을 입력하십시오: ";
	cin >> min;

	show_time(hour, min);
	return 0;
}

void show_time(int hour, int min){
	cout << "시각: " << hour << ":" << min << endl;
}