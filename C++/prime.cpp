#include <iostream>
using namespace std;
int main() {
   int n, i; 
   int count = 0;
   cout<<"enter number:";
   cin>>n;

   for(i=2; i<n; ++i) {
      if(n%i==0) {
         count++;
         break;
      }
   }
   if (count==0)
   cout<<n<<" is a prime number";
   else
   cout<<n<<" is not a prime number";
   return 0;
}