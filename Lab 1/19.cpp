// Create menu driven program for Pizza Shop.And display total amount,

#include <iostream>
using namespace std;
int main(){
    int ch;
    cout<<"SELECT the Following Option:\n";
    cout<<"1.Pineapple pizza\n2.Cucumber pizza\n3.Garlic pizza\n4.Onion pizza\n5.Brinjal pizza\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Pineapple Pizza will be 99$";
        break;
    case 2:
        cout<<"Cucumber Pizza will be 84$";
        
        break;
    case 3:
        cout<<"Garlic Pizza will be 39$";
        
        break;
    case 4:
        cout<<"Onion Pizza will be 56$";
        
        break;
    case 5:
        cout<<"Brinjal Pizza will be 49$";
        
        break;
    
    default:
        break;
    }



return 0;
}