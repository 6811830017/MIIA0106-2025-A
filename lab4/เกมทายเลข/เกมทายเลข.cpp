// เกมทายเลข.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <random>
#include <limits>

using namespace std;

int main()

{

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);
    int secret = dist(gen);

    cout << "Number Guessing Game (1-100)\n";

    int guess = 0;
    for (int i = 1; i <= 10; ++i)
    {
        cout << "Round " << i << " << Please a Enter number: ";
        if (!(cin >> guess))
        {
            cout << "Invalid input. Please enter an integer.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            --i; 
            continue;
        }

        if (guess > secret)
        {
            cout << "Too high \n";
        }
        else if (guess < secret)
        {
            cout << "Too low\n";
        }
        else
        {
            cout << "Correct!\n";
            return 0;
        }
    }

    cout << "\n--- Your turn is off ---\n";
    cout << "Correct number is: " << secret << endl;

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
