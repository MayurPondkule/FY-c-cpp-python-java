#include<stdio.h>

int main()
{
    //without for loop
    // int a;
    // printf("Enter the number :");
    // scanf("%d",&a);
    // printf("%d \n",a*1);
    // printf("%d\n",a*2);
    // printf("%d\n",a*3);
    // printf("%d\n",a*4);
    // printf("%d\n",a*5);
    // printf("%d\n",a*6);
    // printf("%d\n",a*7);
    // printf("%d\n",a*8);
    // printf("%d\n",a*9);
    // printf("%d\n",a*10);


    //with for loop
    int i,n;
    printf("enter the number for table\n");
    scanf("%d", &n);
    for( int i=1; i<=10; i++)

    printf("\n %d *%d = %d", n, i, n*i);
   
    return 0;
}
