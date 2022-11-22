#include <stdio.h>

int main()
{

    int num;

    printf("Enter your number\n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("It is 0 \n");
    }

    else if (num == 1)
    {
        printf("you choosed 1");
    }

    else
    {
        printf("it is different from 1 and 0");
    }

    return 0;
}