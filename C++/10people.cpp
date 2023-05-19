#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    for (int i=0; i<=9; ++i)
    {
        cout << "\nPlease enter age of person " << i+1 << ":";
        cin >> arr[i];
    }
    for (int i=0; i<=9; ++i)
    {
        cout << "\nAge of person " << i+1 << " is " << arr[i];
    }
    return 0;
}