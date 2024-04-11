// Write a  program to enter a number and print its reverse.

#include <iostream>
using namespace std;
int main()
{
    int n; // 123
    cout << "Enter a big number - ";
    cin >> n;
    int rem;
    int  rev=0;

    while (n =! 0)
    {
        rem = n % 10; // 3
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    cout << "Reverse Num is - " << rev;

    return 0;
}
