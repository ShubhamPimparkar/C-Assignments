// 10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3

#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter m -";
    cin>>m;
    cout<<"Enter n -";
    cin>>n;
    cout<<m<<" to power "<<n<<" is - ";
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        sum = sum*m;
    }
    cout<<sum;

return 0;
}