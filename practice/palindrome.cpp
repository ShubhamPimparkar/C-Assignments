// palindrome nos.

// 11122111 - 12321 - 2345432

#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter a  Number - ";
    cin >> ch;
    int rev = 0;
    int og = ch;
    int rem;
    do
    {
        rem = ch % 10; // last digit
        rev = (rev * 10) + rem;
        ch = ch / 10;

    } while (ch != 0);

    if (rev == og)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}