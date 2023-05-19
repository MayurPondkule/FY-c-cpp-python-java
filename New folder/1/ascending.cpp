#include <iostream>

using namespace std;

int main()
{
    int n,temp;
    cout<<"Enter the number of element in array: \n";
    cin>>n;
    int arr[n];
    cout<<"input numbers in array:\n";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n;i++){

        for(int j=1+i;j<n; j++){

            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }

cout<<"array after sorting in ascending order"<<endl;
for(int i=0;i<n;i++){

    cout<<arr[i]<<endl;
}

return 0;




}