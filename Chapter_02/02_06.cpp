#include <iostream>

double light_to_au(double lightyear);

int main(void){
	using namespace std;

	double lightyear;

	cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
	cin >> lightyear;

	cout << lightyear << " 광년은 " << light_to_au(lightyear) << " 천문 단위입니다." << endl;
	return 0;
}

double light_to_au(double lightyear){
	return lightyear * 63240;
}