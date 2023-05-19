#include <iostream>
using namespace std;
int main()
{

    int i, n, t1 = 0, t2 = 1, next_term;
    cout << "enter the number of terms:" << endl;
    cin >> n;

    cout<<n <<" terms of fibonacci series:" << endl;
    for (i = 0; i < n; i++)
    {
        if (i <= 1)

            next_term = i;
        else
        {
            next_term = t1 + t2;
            t1 = t2;
            t2 = next_term;
        }
        cout<< next_term <<endl;
    }

    return 0;
}