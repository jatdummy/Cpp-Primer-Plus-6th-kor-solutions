/* Stephen Parta, C++ Primer Plus, 6th Edition.
 * Chapter 4 Compound Types
 * 
 * Programming Expercises 01
 * Write a C++ program that requests and displays information 
 * as shown in the following example of output:
 * 
 * What is your first name? Betty Sue
 * What is your last name? Yewe
 * What letter grade do you deserve? B
 * What is your age? 22
 * Name: Yewe, Betty Sue
 * Grade: C
 * Age: 22
 */

#include <iostream>

int main(void){
	using namespace std;

	string first_name;
	string last_name;
	char grade_want;
	char grade;
	int age;

	cout << "What is your first name? ";
	getline(cin, first_name);
	cout << "What is your last name? ";
	getline(cin, last_name);
	
	cout << "What letter grade do you deserve? ";
	cin.get(grade_want);
	grade = grade_want + 1;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
	return 0;
}


