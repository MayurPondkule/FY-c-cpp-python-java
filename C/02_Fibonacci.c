#include<stdio.h>

int main(){
    int count, First_term=0, second_term=1 , next_term=1, i;
    printf("Enter the number of terms:\n");
    scanf("%d", &count);

    printf("First %d terms of Fibonacci series:\n",count);
    for(i=0;i<count;i++){
        if(i<=1)
        next_term =i;
        else
        {
            next_term = First_term + second_term;
            First_term =second_term;
            second_term = next_term;
        }
        printf("%d\n", next_term);
    }


    return 0;
}