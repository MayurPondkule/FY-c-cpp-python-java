// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3]={5,10,20};

//     int *ptr;

//     ptr=arr;

//     cout<<"element of the array are:";
//     cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2];


//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    
   int arr[3]={12,100,20};
   int *ptr;
   ptr=arr;

   for(int i=0;i<3;i++){

       cout<<"value at diff locations of array="<<*ptr<<endl;
       ptr++;
   }


   return 0;
}