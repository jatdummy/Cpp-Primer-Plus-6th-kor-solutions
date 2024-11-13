#include <iostream>

using namespace std;

int main(void){
	int age;
	int monthage;

	cout << "Enter your age : ";
	cin >> age;

	monthage = age * 12; 

	cout << "이때 당신의 나이를 월수로 나타낼 경우 " << monthage << "입니다." << endl;
	return 0;
}