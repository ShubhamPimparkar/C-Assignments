#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number - ";
    cin>>n;
    int og = n;
    int rem;
    int sum = 0;
    do
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
        
    } while (n!=0);
    cout<<"Sum is - "<<sum;
    


return 0;
}