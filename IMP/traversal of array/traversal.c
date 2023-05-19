#include<stdio.h>

void diaplay(int arr[],int n){
    
    
    for (int  i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
}

    int main(){

        int arr[100]={1,2,6,78};
        diaplay(arr,4);
    }
