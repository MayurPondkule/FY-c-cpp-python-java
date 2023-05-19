#include <stdio.h>

int main()
{
    int rating;
    printf("enter your rating to tiktok:");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("your rating to tiktok is  1\n");
        break;
    case 2:
        printf("your rating to tiktok is   2\n");
        break;
    case 3:
        printf("your rating to tiktok is  3\nd");
        break;
    case 4:
        printf("your rating to tiktok is  4\n");
        break;
    case 5:
        printf("your rating to tiktok is  5\n");
        break;
        default:
        printf("invalid rating");
    }

    return 0;
}