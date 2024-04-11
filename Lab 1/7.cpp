//  Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
// (Hint: a, e, i, o, u are vowels)

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Lowercase letter - ";
    cin>>ch;
    if (ch=='a' || ch == 'e' || ch=='i' || ch == 'o'|| ch=='u')
    {
        cout<<"Letter is a vowel";
    }
    else
    cout<<"Letter is consonant.";
    

return 0;
}