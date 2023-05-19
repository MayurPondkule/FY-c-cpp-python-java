#include<iostream>
using namespace std;

int main(){
    int i;
    int a[50],size;
    cout<<"enter size of array";
    cin>>size;
    cout<<"enter element of array";

    for(i=0;i<size;i++){
        cin>>a[i];
        
    }
   
    cout<<"element in array are : ";

    for(i=0;i<size;i++){
        cout<<a[i];
        cout<<" ";
        
    }
     
return 0;

}