// Lab087.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Phone {
	string mobile;
	string home;
};
struct parent {
	string name;
	string relationship;
	string contact;
};
struct Student {
	string id;
	string nickname;
	string Lineid;
	Phone myContact;
	Phone myParent;
	parent myParent1;
};
void inputData (Student &s) {
	cout << "Enter of ID: ";
	cin >> s.id;

	cout << "Enter of Nickname: ";
	cin >> s.nickname;

	cout << "Enter of Line ID: ";
	cin >> s.Lineid;

	cout << "Enter of Mobile Phone: ";
	cin >> s.myContact.mobile;

	cout << "Enter of Home Phone: ";
	cin >> s.myContact.home;

	cout << "Enter of Parent Name: ";
	cin >> s.myParent1.name;

	cout << "Enter of Parent Relationship: ";
	cin >> s.myParent1.relationship;

	cout << "Enter of Parent Contact: ";
	cin >> s.myParent1.contact;
}
void DisplayData(Student s) {
	cout << "\nStudent Data:" << endl;
	cout << "ID:" << s.id << endl;
	cout << "Nickname:" << s.nickname << endl;
	cout << "Line ID:" << s.Lineid << endl;
	cout << "Contact:" << s.myContact.mobile << " (Mobile), " << s.myContact.home << " (Home)" << endl;
	cout << "Parent:" << s.myParent1.name << " (" << s.myParent1.relationship << "), Contact: " << s.myParent1.contact << endl;
}
int main() {
	Student s1;
	inputData(s1);
	DisplayData(s1);

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
