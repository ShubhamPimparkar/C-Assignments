// 11:Check if number is a prime number or not.:

#include <iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter a  Number - ";
    cin>>num;
    bool flg = true;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            flg = false;
            break;
        }
    }
    if (flg)
    {
        cout<<"Num is prime";
    }
    else
        cout<<"Num is not prime";
    
    
    
    
return 0;
}