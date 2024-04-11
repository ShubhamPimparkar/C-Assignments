// write a program that accepts number as long as number is positive and then print the sum of numbers.

#include <iostream>
using namespace std;
int main(){

    int num;
    int sum = 0;

    cout<<"Enter the number - \n";

    while (num!=0)
    {
        cin>>num;
        sum = sum + num;
    }

    cout<<"Sum of Number is - "<<sum;



    
return 0;
}