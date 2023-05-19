#include <stdio.h>

int main()
{
    int skip = 5, i;
    for (i = 0; i <= 10; i++)
    {
        if (i == skip)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    // int i;
    // for (i = 0; i <= 10; i++)
    // {
    //     if (i == 2 || i == 4 || i == 6 || i == 8 || i == 10)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    return 0;
}