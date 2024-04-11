//  Write a  program to input angles of a triangle and check whether triangle is valid or not.


#include <iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cout<<"Enter angel 1 - ";
    cin>>a1;
    cout<<"Enter angel 2 - ";
    cin>>a2;
    cout<<"Enter angel 3 - ";
    cin>>a3;
    int sum = 0;
    if (a1>0 && a2>0 && a3>0)
    {
        sum = a1+a2+a3;
    }

    if (sum>0 && sum<=180)
    {
        cout<<"Valid";
    }

    return 0;
}