// Write a program to check entered number is Armstrong number or not.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a 3 digit number - ";
    cin>>n;
    int rem;
    int sum = 0;
    int temp = n;
    while (n>0)
    {
        rem = n%10;
        sum = sum+(rem*rem*rem);
        n = n/10;

    }
    if (sum==temp)
    {
        cout<<"Armstrong Number";
    }
    else
        cout<<"Not Armstrong Number";

    
    
    
return 0;
}