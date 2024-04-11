#include <iostream>
#include <vector>

using namespace std;

int main(){
    int j;
    vector<int> v1;
    cout<<"Enter the Elements to push - "<<endl;
    // cout<<v1.size();
    for (int i = 0; i < 6; i++)
    {
        cin>>j;
        v1.push_back(j);
    }
    cout<<"Elements are - ";
    for(int n:v1){
        cout<<n<<"   ";
    }
    cout<<"\nSize of Vector - "<<v1.size()<<endl;

    v1.pop_back();
    cout<<"poped"<<endl;

    cout<<"Elements are - ";
    for(int n:v1){
        cout<<n<<"   ";
    }



    return 0;
}