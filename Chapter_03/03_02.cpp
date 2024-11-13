#include <iostream>
#include <cmath>

const int Feet_to_Inch = 12; // 1 feet = 12 inch
const double Inch_to_Meter = 0.0254; // 1 inch = 0.0254 m
const double Kilogram_to_Pound = 2.2; // 1 kilogram =  2.2 pound

using namespace std;

int main(void){
	int feet;
	float inch;
	float pound;
	float height;
	float weight;
	double bmi;

	cout << "당신의 키를 피트(feet)와 인치(inch)로 입력하고 Enter 키를 누르십시오. Space bar로 구분합니다: ";
	cin >> feet >> inch;
	cout << "당신의 몸무게를 파운드(pound) 단위로 입력하고 Enter 키를 누르십시오: ";
	cin >> pound;

	height = (feet * Feet_to_Inch + inch) * Inch_to_Meter; // m 단위로 변환
	weight = pound / Kilogram_to_Pound; // kg 단위로 변환

	bmi = weight / pow(height, 2);

	cout << "당신의 BMI는 " << bmi << " 입니다." << endl;

	return 0;
}