// Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the corresponding operation and displays the result.

#include <iostream>
using namespace std;
int main(){
    int n1;
    cout << "Enter a number 1 - ";
    cin >> n1;
    int n2;
    cout << "Enter a number 2 - ";
    cin >> n2;
    char n3;
    cout<< "Enter a operator - ";
    cin>>n3;
    int sum = 0;
    if (n3=='+')
    {
        sum = n1+n2;
    }
    else if(n3=='-')
    {
        sum = n1-n2;
    }
    else if(n3=='/')
    {
        sum = n1/n2;
    }
    else if(n3=='*')
    {
        sum = n1*n2;
    }
    cout<<"Sum is - "<<sum;
return 0;
}