// Lab302.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

	string ID_number;
	string name;
	int score;

	cout << "Enter Student ID: ";
	cin >> ID_number;

	cout << "Enter student name: ";
	cin. ignore();
	getline(cin , name);

	cout << "Enter score: ";
	cin >> score;

	cout << "======= Student Report ======= " << endl;
	cout << "Student ID   ; " << ID_number << endl;
	cout << "Student Name ; " << name << endl;
	cout << "Score        ; " << score << endl;
	if (score >= 90) {
	cout << "grade        ; A " << endl;
	}
	else if (score >= 80) {
	cout << "grade        ; B " << endl;
	}
	else if (score >= 70) {
	cout << "grade        ; C " << endl;
	}
	else if (score >= 60) {
	cout << "grade        ; D " << endl;
	}
	else {
	cout << "grade        ; F " << endl;
	}
	cout << "============================== " << endl;

	return 0;

}
	


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
