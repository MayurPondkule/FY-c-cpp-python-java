#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[100],i,num,odd=0,even=0;
    cout<<"Enter the size of the array: \n";
    cin>>num;
    cout<<"Enter the elements of the array:\n";

    for(i=0; i<num; i++){
        cin>>arr[i];
    }

    cout<<"\nEven numbers of the array are: \n";
     for(i=0; i<num; i++){
        if(arr[i]%2==0){
            even++;
            cout<<arr[i]<<"\t";
        }
    }

    cout<<"\nOdd numbers of the array are:\n";
     for(i=0; i<=num; i++){
        if (arr[i]%2==1){
            odd++;
            cout<<arr[i]<<"\t";
        }
    }


    cout<<"\ntotal even numbers of an array:\n"<<even;
    cout<<"\ntotal odd numbers of an array:\n"<<odd;

    
    return 0;
}