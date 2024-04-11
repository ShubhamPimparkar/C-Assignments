// strings

#include <iostream>
#include <string.h>
using namespace std;

string isPalin(string str)
{
    int size = str.size();
    for (int i = 0; i < size / 2; i++)
    {
        if (str[i] != str[size - i - 1])
        {
            return "no";
        }
        }
    return "yes";
}
int main()
{
    string str;
    cout << "Enter a String - ";
    cin >> str;
    cout << isPalin(str);

    return 0;
}
