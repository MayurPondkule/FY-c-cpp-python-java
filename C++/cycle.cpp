#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How is the temperature\n1.Below Freezing\n2.Above Freezing\nAns:";
    cin >> n;
    if (n==1)
    {
        cout << "Is it snowing?\n1.Yes\n2.No\nAns:";
        cin >> n;
        if (n==1)
        {
            cout << "Walk to school";
        }
        else
        {
            cout << "Is the road frosty?\n1.Yes\n2.No\nAns:";
            cin >> n;
            if (n==1)
            {
                cout << "Walk to school";
            }
            else
            {
                cout << "Cycle to school";
            }
        }
    }
    else
    {
        cout << "Is the road wet?\n1.Yes\n2.No\nAns:";
        cin >> n;
        if (n==1)
        {
            cout << "Walk to school";
        }
        else
        {
            cout << "Is it raining?\n1.Yes\n2.No\nAns:";
            cin >> n;
            if (n==1)
            {
                cout << "Is it a light shower?\n1.Yes\n2.No\nAns:";
                cin >> n;
                if (n==1)
                {
                    cout << "Cycle to school";
                }
                else
                {
                    cout << "Walk to school";
                }
            }
            else
            {
                cout << "Cycle to school";
            }

        }
    }
    return 0;
}
