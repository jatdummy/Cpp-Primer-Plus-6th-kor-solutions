#include <iostream>

using namespace std;

int main(void){
	int height_cm;

	cout <<	"당신의 키를 정수 센티미터(cm) 단위로 입력하고 Enter 키를 누르십시오: ___\b\b\b";
	cin >> height_cm;

	const float height_m = height_cm / 100.0;

	cout << "당신의 키 " << height_cm << "센티미터는 " << height_m << "미터입니다." << endl;
	return 0;
}