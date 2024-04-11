// . Write a program to accept an integer and check if it is even or odd.

#include <iostream>
using namespace std;
int main(){
    int size;
    
    cout<<"Enter size of array - ";
    cin >> size;
    int arr[size];
    int put,flag;
    cout<<"Enter Elements of array - ";
    for (int i = 0; i < size; i++)
    {

        cin>>put;
        arr[i] = put;
    }

    cout<<"Odd Elements - ";
    for (int j = 0; j < size; j++)
    {
        if (j%2==0)
        {
            cout<<arr[j]<<" ";
        }
        
    }
    cout<<"\nEven Elements - ";
    for (int j = 0; j < size; j++)
    {
        if (j%2!=0)
        {
            cout<<arr[j]<<" ";
        }
        
    }
    cout<<"\nPrime Elements - ";
    for (int k = 1; k < size; k++)
    {
        for (int i = 2; i < k; i++)
        {
            if (arr[k]%i==0)
            {
                flag++;
                break;
            }
            
        }
        if (flag==0)
        {
            cout<<arr[k]<<" ";
        }
        flag =0;
        
        
        
    }
    

    return 0;
}