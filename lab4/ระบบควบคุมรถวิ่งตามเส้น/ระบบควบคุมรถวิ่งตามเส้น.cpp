// ระบบควบคุมรถวิ่งตามเส้น.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;	

void moveForward() {
	cout << "Robot Moves forward" << endl;
}

void turnLeft() {
	cout << "Robot Turns left" << endl;
}

void turnRight() {
	cout << "Robot Turns right" << endl;
}

int main(){
	int sensor;

	cout << "Enter line position (-1 = left, 0 = center, 1 = right): ";
	cin >> sensor;

	if (sensor == 0) {
		moveForward();
	}
	else if (sensor == -1) {
		turnLeft();
	}
	else if (sensor == 1) {
		turnRight();
	}
	else {
		cout << "Invalid sensor value" << endl;
	}
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
