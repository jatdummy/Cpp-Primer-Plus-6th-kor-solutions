#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	const double DEGREE_RATE = 60;

	int degree, minutes, seconds;
	double latitude;

	cout << "위도를 도, 분, 초 단위로 입력하십시오:" << endl;
	cout << "먼저, 도각을 입력하시오: ";
	cin >> degree;
	cout << "다음에, 분각을 입력하시오: ";
	cin >> minutes;
	cout << "끝으로, 초각을 입력하시오: ";
	cin >> seconds;


	latitude = degree + minutes / DEGREE_RATE + seconds / pow(DEGREE_RATE, 2);

	cout << degree << "도, " << minutes << "분, " << seconds << "초" << " = " << latitude << "도" << endl;

	return 0;
}