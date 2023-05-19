#include <iostream>
using namespace std;
int main()
{
   int num1, num2, g;

   num1 = 16;
   num2 = 4;

   for (int i = 1; i <= num1 && i <= num2; i++)
   {
      if ((num1 % i == 0) && (num2 % i == 0))
      {
         g = i;
      }
   }
   cout << g << endl;
   return 0;
}