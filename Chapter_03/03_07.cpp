#include <iostream>

using namespace std;

int main(void){
	const double KILO_TO_MILE = 0.6214;
	const double GALLAN_TO_LITER = 3.875;

	double efficiency_eu;
	double mile, gallon;
	double mpg;


	cout << "100킬로미터 당 소비한 휘발유의 양(L)을 입력하시오: ";
	cin >> efficiency_eu;

	mile = 100 * KILO_TO_MILE;
	gallon = efficiency_eu / GALLAN_TO_LITER;

	mpg = mile / gallon;

	cout << "입력한 수치는 " << mpg << "마일을 이동할 때 1갤런의 휘발유를 소비하는 것과 동일합니다." << endl;
	
	return 0;
}