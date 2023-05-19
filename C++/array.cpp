#include<iostream>
using namespace std;


int main(){

    // int marks[6];


    // for(int i=1;i<6;i++){

    //     cout<<"enter"<<i<<"th student your marks:"<<endl;
    //     cin>>marks[i];

    // }

    // for(int i=1;i<6;i++){

    //     cout<<i<<"th student  marks is-"<<marks[i]<<endl;
        
    // }

//2d array


int arr2d[2][3]={
    {1,2,3},
    {4,5,6}
};

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<"the value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    }
    
}

    



   

}