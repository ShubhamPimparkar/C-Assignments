//  Write a program to accept two integers x and n and compute x raised to n.

#include <iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"Enter X - ";
    cin>>x;
    cout<<"Enter N - ";
    cin>>n;
    int sum =1;
    for (int i = 0; i < n; i++)
    {
        sum = sum * x;
    }
    cout<<"X power N is - "<<sum;
    
return 0;
}