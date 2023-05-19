#include <iostream>

using namespace std;

int main()
{
    int n,d;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    for(int i=0;i<d;i++)
    {
        int k;
        k=arr[0];
        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=k;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
