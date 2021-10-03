#include <iostream>
using namespace std;

int main() {
	
	float anualsal;
	cout << "Please enter your anual Salary: ";
	cin >> anualsal;
	float monthlysal = anualsal / 12;
	cout << "Your monthly salary is: " << monthlysal << endl;
	float tenyear = anualsal * 10;
	cout << "Your salary will be " << tenyear << " in 10 years";
	
	system("pause > 0");
	//return 0; this is a comment
}