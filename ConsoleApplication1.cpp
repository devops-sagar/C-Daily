#include <iostream>
using namespace std;

int main() {
	
	//float anualsal;
	//cout << "Please enter your anual Salary: ";
	//cin >> anualsal;
	//float monthlysal = anualsal / 12;
	//cout << "Your monthly salary is: " << monthlysal << endl;
	//float tenyear = anualsal * 10;
	//cout << "Your salary will be " << tenyear << " in 10 years";

	//********************************************************************************************

	/*Program to cipher or encoding words into the ASCII value*/
	char c1, c2, c3, c4, c5;
	cout << "Enter the 5 letter word to encode: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "Encoded Message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;

	int n1, n2, n3, n4, n5;
	cout << "Enter the ASCII values for five letter to decode: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	cout << "Decoded Message: " << char(n1) << char(n2) << char(n3) << char(n4) << char(n5);

	//********************************************************************************************





	
	system("pause > 0");
	//return 0;
}