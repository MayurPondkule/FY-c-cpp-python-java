#include<iostream>
using namespace std;

int main(){

    int num=17;
    int *ptr;       //store in *ptr
    ptr=&num;    //address of num

    cout<<"value at ptr = "<<ptr;
    cout<<"\nvalue at num ="<<num;
    cout<<"\nvalue at *ptr ="<<*ptr;



    return 0;

}