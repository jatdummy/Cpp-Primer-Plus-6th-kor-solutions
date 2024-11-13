#include <iostream>

using namespace std;

int main(void){
	long long world_population;
	long long country_population;
	double percentage;

	cout << "세계 인구수를 입력하시오: ";
	cin >> world_population;
	cout << "미국의 인구수를 입력하시오: ";
	cin >> country_population;

	percentage = double (country_population) / double (world_population) * 100.0;
	cout << "세계 인구수에서 미국이 차지하는 비중은 " << percentage << "%이다." << endl;
	return 0;
}