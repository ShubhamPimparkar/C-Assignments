#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{

    // map<int,string> mp = {{1,"India"},{2,"Nepal"},{3,"Japan"},{4,"USA"},{5,"Russia"}};

    // for (map<int,string>::iterator it=mp.begin() ; it != mp.end();it++)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    cout<<"Start"<<endl;
    map<int, string> mp;
    string ch;

    map<int, string>::iterator it1 = mp.begin();
    map<int, string>::iterator it2 = mp.end();
    int size;
    cout<<"Enter the Size"<<endl;
    cin>>size;
    int k = 1;
    for (int i = 0; i<size; i++)
    {
        (*it1).first = k;
        k++;
        cout << "Enter the string - " << endl;
        cin >> ch;
        (*it1).second = ch;
    }

    for (map<int, string>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout<<"End"<<endl;
    return 0;
}