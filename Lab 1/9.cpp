// 9 :Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number - ";
    cin>>num;
    int sum = 1;
    for (int i = num; i > 0; i--)
    {
        sum = sum*i;
    }
    cout<<"Facto is- "<<sum;

    return 0;
}