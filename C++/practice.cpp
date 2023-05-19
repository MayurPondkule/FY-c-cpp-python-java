#include<iostream>
using namespace std;
class Test
{
    static int x;
public:
 Test()
 {
     x++;
 }
 static int getx()
 {
     return x;

 }
};
int Test::x=0;
int main()
{
    cout<<Test::getx()<<" ";
    Test t[5];
    cout<<Test::getx();
}


// class Demo{
//     private:
//     int num1,num2;
//     public:
//     Demo(int n1,int n2){

//     cout<<"inside constucter"<<endl;
//     num1=n1;
//     num2=n2;
// }
// void display(){
//     cout<<"num1="<<num1<<endl;
//     cout<<"num2="<<num2<<endl;

// }

// ~Demo(){
//     cout<<"inside destructer";

// }
// };
// int main(){

//     Demo obj1(10,20),obj2(5,10);
//     obj2.display();
//     {
//         obj1.display();

//     }
// }


//     int i=0,x=0;

//     for(i=1;i<10;i*=2)
// {
//         x++;
//         cout<<x;
//     }
//     cout<<x;
//     return 0;
//     }
//     int a=1;
//     for(;;)
//     {if(!a)
//       { cout<<"inside IF:exiting loop";
//         break;
//     }

//         cout<<"inside for :infinite loop";
// }
