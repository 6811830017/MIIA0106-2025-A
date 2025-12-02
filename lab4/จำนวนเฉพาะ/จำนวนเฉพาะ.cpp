// จำนวนเฉพาะ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// จำนวนเฉพาะ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>


bool isPrime(long long n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    std::cout << "Prime checker\n";
    std::cout << "Enter an integer (Ctrl+Z then Enter to exit): ";

    long long n;
    while (std::cin >> n)
    {
        if (isPrime(n))
            std::cout << n << " is prime\n";
        else
            std::cout << n << " is not prime\n";

        std::cout << "Enter an integer (Ctrl+Z then Enter to exit): ";
    }

   
    std::cin.clear();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
