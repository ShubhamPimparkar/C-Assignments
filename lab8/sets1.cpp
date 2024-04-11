#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    int ch, n, m, o;
    set<int> s1;
    // multiset<int> s1;   //multi set

        cout << "============================" << endl;
    cout << "MENU:\n1.Size\n2.Display\n3.Add\n4.Clear\n5.Exit" << endl;
        cout << "============================" << endl;
    do
    {

        cout << "Enter Choice - ";
        cin >> ch;
        cout << "============================" << endl;
        switch (ch)
        {
        case 1:
       
            n = s1.size();
            cout << "Size is - " << n<<endl;
            cout << "============================" << endl;
            break;
        case 2:

            if (s1.size() == 0)
            {
                cout << "Empty Set"<<endl;
            }
            else
            {
                cout << "Set Elements are - ";
                for (int k : s1)
                    cout << k << "  ";
                cout << "\n============================" << endl;
            }
            break;
        case 3:
            cout << "Insert a Element - ";
            cin >> o;
            s1.insert(o);
            cout << "============================" << endl;

            break;
        case 4:

            cout << "Set Cleared "<<endl;
            s1.clear();
            cout << "============================" << endl;

            break;

        default:
            break;
        }

    } while (ch != 5);

    for (int n : s1)

        cout << n;

    return 0;
}