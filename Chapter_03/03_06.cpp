#include <iostream>

/* EU style */

using namespace std;

int main(void){
	long double kilometer, liter;
	double efficiency;

	cout << "주행한 거리(km)를 입력하시오: ";
	cin >> kilometer;
	cout << "소비한 휘발유의 양(L)을 입력하시오: ";
	cin >> liter;

	efficiency = kilometer / liter;

	cout << "100킬로미터 당 소비한 휘발유의 양은 " << efficiency << "리터 입니다." << endl;

	return 0;
}