#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number - ";
    cin>>n;
    int flg = 1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flg = 0; 
        }
        
    }
    if(flg==1){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    

return 0;
}