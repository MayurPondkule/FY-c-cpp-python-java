#include <stdio.h>
void swap(int*, int*); 

int main()
{
    void swap(int *a, int *b)
{
   int t;

   t  = *b;
   *b = *a;
   *a = t;
}
   int x, y;

   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);

   printf("x = %d\ny = %d\n", x, y);

   swap(&x, &y);

   printf("After Swapping\nx = %d\ny = %d\n", x, y);

   return 0;
}
