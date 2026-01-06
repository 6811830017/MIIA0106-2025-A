// SLab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string Lineid;
    string phone;
};

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) {
    // TODO: cout << ...
    cout << "ID \t\tNickName \tLineID \tPhone\n";
    cout << s1.id << "\t" << s1.nickname << "\t" << s1.Lineid << "\t" << s1.phone << "\n";
}
void inputStudent(Student& s1) {
	cout << "Enter of ID: ";
	cin >> s1.id;

	cout << "Enter of Nickname: ";
	cin >> s1.nickname;

	cout << "Enter of Line ID: ";
	cin >> s1.Lineid;

	cout << "Enter of Phone: ";
	cin >> s1.phone;
}

int main() {
    Student s1;
    cout << "=== Input Student 1 ===\n";
    inputStudent(s1);

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
    printStudent(s1);

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
