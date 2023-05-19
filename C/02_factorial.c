#include<stdio.h>

int main(){
    int n, i, fact=1;

    print("Enter any number :");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    fact = fact*i;
    
    printf("Factorial  value of %d = %d",n,fact);
    return 0;
}