// fact = 5! = 5x4x3x2x1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Num - ";
    cin >> n;
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    cout << sum;

    return 0;
}