// 0,1,1,2,3,5,8-----

#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int sum = 0;
    int n;
    cout << "Enter a Limit - ";
    cin >> n;
    cout << "Fibonacchi series is - ";
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << a << "  ";
            continue;
        }
        if (i == 1)
        {
            cout << b << "  ";
            continue;
        }
        sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<"  ";

    }

    return 0;
}
