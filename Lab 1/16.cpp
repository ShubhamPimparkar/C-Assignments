// Write a  program to print all Prime numbers between 1 to n. 

#include<iostream>
using namespace std;
int main()
{
    int i, flag=0, j;
    cout<<"Prime Numbers Between 1 to 50 are:\n";
    for(i=1; i<=50; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               flag++;
               break;
           }
        }
        if(flag==0)
            cout<<i<<endl;
        flag = 0;
    }
    cout<<endl;
    return 0;
}