// :Write a program to find greatest of three numbers using nested if-else.

#include <iostream>
using namespace std;
int main(){

    int n1,n2,n3;

    cout << "Enter a number 1 - ";
    cin >> n1;
    cout << "Enter a number 2 - ";
    cin >> n2;
    cout << "Enter a number 3 - ";
    cin >> n3;

    if (n1>n2 && n1>n3)
    {
        cout<<"Number 1 is Greatest"; 
    }
    
    else if (n2>n1 && n2>n3)
    {
        cout<<"Number 2 is Greatest"; 
    }
    else if (n3>n1 && n3>n2)
    {
        cout<<"Number 3 is Greatest"; 
    }
    else
    cout<<"All are Equal";
    
 
    


return 0;
}