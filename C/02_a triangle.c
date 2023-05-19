#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter sides of triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a==b  && b==c)
    {
        printf("Equilateral triangle");
    }
    
    else if(a==b || b==c || a==c)  
    {
        printf("isosceles triangle");
    }
    else if(a*a + b*b == c*c)
    {
        printf("Right angle triangle");
    }
    
else{
        printf("scalene triangle");
    }


     return 0;
}