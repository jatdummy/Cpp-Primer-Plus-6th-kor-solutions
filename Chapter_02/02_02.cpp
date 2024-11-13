#include <iostream>

float mile_to_kilo(float mile);

int main(void){
	using namespace std;
	
	float mile;

	cout << "마일을 입력하고 Enter 키를 누르십시오: ";

	cin >> mile;
	cout << mile << " 마일은 " << mile_to_kilo(mile) << " 킬로미터입니다." << endl;

	return 0;
}

float mile_to_kilo(float mile){
	return mile * 1.60934;
}