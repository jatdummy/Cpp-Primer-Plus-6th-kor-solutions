#include <iostream> 

float cel_to_fahren(float cel);

int main(void){
	using namespace std;

	float celsius;
	cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
	cin >> celsius;

	cout << "섭씨 " << celsius << "도는 화씨로 " << cel_to_fahren(celsius) << "도 입니다." << endl;
	return 0;
}

float cel_to_fahren(float cel){
	return cel * 1.8 + 32.0;
}