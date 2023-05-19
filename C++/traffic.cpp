#include <iostream>
using namespace std;
int yn();
int main()
{
   int a, b=1;
   while (b!=0)
   {
       switch(b)
       {
           case 1:
               cout << "Is there a footbridge near?"<<endl;
               a=yn();
               if(a==1)
               {
                   cout << "Use Footbridge."<<endl;
                   b=0;
               }
               else
               {
                   b=3;
               }
               break;
           case 3:
               cout << "Is there a tunnel?"<< endl;
               b=yn();
               if(a==1)
               {
                   cout << "Use Tunnel."<<endl;
                   b=0;
               }
               else
               {
                   b=7;
               }
               break;
           case 7:
               cout << "Is there a crossing?"<<endl;
               a=yn();
               if(a==1)
               {
                   b=8;
               }
               else
               {
                   cout << "Walk away"<<endl;
                   b=1;
               }
               break;
           case 8:
               cout << "Is there a traffic light nearby?"<<endl;
               a=yn();
               if(a==1)
               {
                   b=9;
               }
               else
               {
                   b=15;
               }
               break;
           case 9:
               cout << "Is the color Red or Green?\n1.Red\n2.Green"<<endl;
               cin >> a;
               if(a==1)
               {
                   b=15;
               }
               else
               {
                   b=0;
               }
               break;
           case 15:
               cout << "Look left. Is there a car approaching?"<<endl;
               a=yn();
               if(a==1)
               {
                   b=20;
               }
               else
               {
                   b=16;
               }
               break;
           case 16:
               cout << "Look right. Is there a car approaching?"<<endl;
               a=yn();
               if(a==1)
               {
                   b=20;
               }
               else
               {
                   cout << "Cross the road"<<endl;
                   b=0;
               }
               break;
           case 20:
               cout << "Wait for it to pass."<< endl;
               b=0;
               break;
       }
   }
   return 0;
}
int yn()
{
    int n;
    cout << "\n1.Yes"<<endl;
    cout << "\n2.No"<<endl;
    cin >> n;
    return n;
}