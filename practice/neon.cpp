#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Num - ";
    cin>>n;
    int g = n*n;
    int sum =0;
    int rem;
    do
    {
        rem = g%10;
        sum = sum + rem;
        g = g/10;

    } while (g!=0);
    if (sum == n)
    {
        cout<<"Neon";
    }
    else
        cout<<"Not Neon";
    
    
return 0;
}