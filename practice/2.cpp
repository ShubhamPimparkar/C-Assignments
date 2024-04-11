// Write a program to print the address of the pointer to a variable whose value is input from user.

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the Value - ";
    cin>>a;
    int*ptr=&a;
    cout<<"Address of ptr - "<<&ptr<<endl;
    cout<<"Address of var - "<<ptr;
return 0;
}