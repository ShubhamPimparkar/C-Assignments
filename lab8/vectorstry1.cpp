// vectors
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>

using namespace std;

int main()
{
    vector<int> v1 = {2, 5, 3, 56, 7, 85};
    vector<int>::iterator it1;
    vector<int>::iterator it2;
    it1 = v1.begin();
    it2 = v1.end();
    cout << "------------------------" << endl;
    cout << "MENU:\n1:Size\n2:Display\n3:Add\n4:Pop\n5:Delete all\n6:Sort\n7:Reverse\n8:Exit" << endl;
    cout << "------------------------" << endl;
    int ch, num;

    do
    {
        cout << "Enter Choice - ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Size of Vector is: ";
            cout << v1.size();
            cout << "\n------------------------" << endl;
            break;

        case 2:
            cout << "Elements of Vec - ";
            // while (it1 != it2)
            // {
            //     cout << *it1 << "  ";
            //     it1++;
            // }
            for (int n : v1)
                cout << n << "  ";
            cout << "\n------------------------" << endl;
            break;

        case 3:
            cout << "Enter a Number - ";
            cin >> num;
            v1.push_back(num);
            cout << "\n------------------------" << endl;
            break;

        case 4:
            v1.pop_back();
            cout << "Element Poped";
            cout << "\n------------------------" << endl;

            break;
        case 5:
            v1.clear();
            cout << "Deleted" << endl;

            break;
        case 6:
            sort(v1.begin(), v1.end());
            cout<<"Sorted"<<endl;

            break;
        case 7:
            reverse(v1.begin(), v1.end());
            cout<<"Reversed"<<endl;

            break;

        default:

            cout << "Exited";
            break;
        }
    } while (ch != 8);

    return 0;
}
