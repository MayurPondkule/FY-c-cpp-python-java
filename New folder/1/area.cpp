#include<iostream>
using namespace std;

float area(float r){

    float result;
    result=3.14*r*r;
    return result;
    

}

int main(){

    float r,result1;
    cout<<"enter radius:";
    cin>>r;

    result1 =area(r);

    cout<<"area if circle is:"<<result1;



}
