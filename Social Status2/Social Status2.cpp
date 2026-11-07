#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "How old are you ";
	cin >> age;


	if (age < 12 || age == 12) 
		cout << "You are child ";
	if (age > 12 && age <= 17)
		cout << "You are teenager ";
	if (age > 18 || age == 18)
		cout << "You are adult";
}



