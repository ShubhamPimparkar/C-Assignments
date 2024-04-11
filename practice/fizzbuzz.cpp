// if divisible by -
// 3 - Fizz
// 5 - Buzz
// both - FizzBuzz

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a range - ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%3==0 || i%5==0)
        {
            if (i%3==0&&i%5==0)
            {
                cout<<"FizzBuzz"<<"  ";
            }
            else if (i%3==0)
            {
                cout<<"Fizz"<<"  ";
            }
            else if(i%5==0){
                cout<<"Buzz"<<"  ";
            } 
        }
        else
            cout<<i<<"  ";   
    }
return 0;
}