#include <iostream>
using namespace std;

int main()
{

    // int a = 34;
    // int *ptra;       //address of a in output  cout<<ptra;
    // ptra = &a;
    // cout<<ptra;



    // int a = 34;
    // int *ptra;       //value of a in output     cout<<*ptra;
    // ptra = &a;
    // cout<<*ptra;


    int a = 34.34;
    int *ptra;      
    ptra = &a;
    cout<<"value of a is "<<a<<endl;    // output= -------is 34
    cout<<"value of a is "<<*ptra<<endl;       //  output=------is 34
    
    cout<<"address of a is "<<&a<<endl;   //same
    cout<<"address of a is "<<ptra;       // same


    return 0;

}