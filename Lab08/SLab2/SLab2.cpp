// SLab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...

        cout << "Enter of ID: ";
        cin >> students[i].id;

        cout << "Enter of Nickname: ";
        cin >> students[i].nickname;

        cout << "Enter of Line ID: ";
        cin >> students[i].Lineid;

        cout << "Enter of phone: ";
        cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
        cout << "ID \t\tNickName \tLineID \tPhone\n";
        cout << students[i].id << "\t" << students[i].nickname << "\t" << students[1].Lineid << "\t" << students[i].phone << "\n";

        cout << "----------------------\n";
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
