#include<stdio.h>

int main(){
    int i,n;
    printf("enter num upto:\n",n);
    scanf("%d",&n);

    for(i=n;i;i--)
    printf("%d\n",i);
    
    return 0;
}