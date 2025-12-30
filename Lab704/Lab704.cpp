// Lab704.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// TODO: แสดงค่าทุกตัวใน array โดยใช้ pointer เท่านั้น
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40 };
    int* p = arr;
    // TODO
    cout << "manual print" << endl;
    cout << *(p + 0) << "\t";
    cout << *(p + 1) << "\t";
    cout << *(p + 2) << "\t";
    cout << *(p + 3) << "\t";
    cout << endl;
    //for 
    cout << "for loop" << endl;
    for (int i = 0; i < 4; i++) {
        cout << *(p + i) << "\t";
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
