// Write a program to swap two numbers.
#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    int sum;
    cout<<"Input a Num1 - ";
    cin>>num1;
    cout<<"Input a Num2 - ";
    cin>>num2;
    int temp;
    temp = num1;
    num1=num2;
    num2=temp;
    cout<<"num1 is "<<num1<<endl;
    cout<<"num2 is "<<num2;



return 0;
}