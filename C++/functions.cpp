#include<iostream>
using namespace std;

int add(int a, int b){

    int c=a+b;
    return c;
}

int main(){

    int a,b;



    cout<<"enter  value of a:"<<endl;
    cin>>a;

    cout<<"enter  value of b:"<<endl;
    cin>>b;

    // cout<<a<<" "<<b;
    cout<<"sum of "<<a<<" and "<<b<<" is ="<<add(a,b);

}