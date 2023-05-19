#include <iostream>

using namespace std;

int main()
{
    int a,d;
    cin>>a;
    cin>>d;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<d;i++)
    {
        int k;
        k=arr[0];
        for(int i=0;i<a-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[a-1]=k;
        
    }
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}