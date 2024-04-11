// 4:Write a  program to find sum of all even and odd numbers between 1 to n. 

#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number - ";
    cin>>n;
    int sum1=0,sum2=0;
    for (int i = 0; i <= n; i++)
    {
        if (i%2==0)
        {
            sum1 = sum1+i;
        }
        else
        sum2=sum2+i;
        
    }
    cout<<"Sum of even num is - "<<sum1<<endl;
    cout<<"Sum of odd num is - "<<sum2;

    
return 0;
}