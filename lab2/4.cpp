//  Write a program to accept a character, an integer n and display the next n characters.

#include <iostream>
using namespace std;
int main(){
    int n;
    char c;
    cout<<"Enter a character and number - ";
    cin>>c>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<c<<"  ";
        c++;
    }

    
return 0;
}