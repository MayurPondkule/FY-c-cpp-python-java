// *
// **
// ***
// ****
// *****
#include <stdio.h>
int main()
{

    int n;
    printf("enter value of n:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {

            printf("*");
        }

        printf("\n");
    }

    //----------------------------------------------------------------------------------------------
    //      *
    //     **
    //    ***
    //   ****
    // ******

    // int n;
    printf("enter value of n:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <n; j++)
        {
            if (i + j >= n - 1)
            {

                printf("*");
            }
            else{
                printf(" ");
            }

        }

            printf("\n");
        }

    //    *
    //   ***
    //  *****
    // *******

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 2 * n; j++)
        {
            if (j >= n - 1 - i && j <= n - 1 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}