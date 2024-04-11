// Write a program to print the address of a variable whose value is input from user.
#include <iostream>

using namespace std;
int main(){
    int a;
    cout<<"Enter the Value - ";
    cin>>a;
    int*ptr=&a;
    cout<<"Address is - "<<ptr;
return 0;
}