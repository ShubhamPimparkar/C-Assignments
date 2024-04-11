// Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.

#include <iostream>
using namespace std;
int main(){
    int n1;
    cout << "Enter a single digit number - ";
    cin >> n1;
    if (n1==1)
    {
        cout<<"One";
    }
    else if (n1==2)
    {
        cout<<"Two";
    }
    else if (n1==3)
    {
        cout<<"Three";
    }
    else if (n1==4)
    {
        cout<<"Four";
    }
    else if (n1==5)
    {
        cout<<"Five";
    }
    else if (n1==6)
    {
        cout<<"Six";
    }
    else if (n1==7)
    {
        cout<<"Seven";
    }
    else if (n1==8)
    {
        cout<<"Eight";
    }
    else if (n1==9)
    {
        cout<<"Nine";
    }
    else
        cout<<"Enter a Single Digit Number";
    
return 0;
}