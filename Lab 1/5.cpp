//  Write a program to accept a number and check if it is divisible by 5 and 7.

#include <iostream>

using namespace std;
int main(){
    int num;
    cout<<"Enter a Number = ";
    cin>>num;
    if (num%5==0 && num%7==0)
    {
        cout<<"Divisible";
    }
    else 
    cout<<"Not divisible";
    
    return 0;
}