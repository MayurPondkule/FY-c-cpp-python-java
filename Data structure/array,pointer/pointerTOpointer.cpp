#include<iostream>
using namespace std;

int main(){

    int num=88;
    int *ptr;
    int **pptr;
    ptr=&num;
    pptr=&ptr;

    cout<<"value of num:"<<num<<endl;
    cout<<"value of *ptr:"<<*ptr<<endl;
    cout<<"value of **pptr:"<<**pptr<<endl;

    return 0;
    


}