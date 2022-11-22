#include <stdio.h>

int main()
{

    int a = 61, b = 754, c = 56564;

    if (a > b)
    {

        if (a > c)
        {

            printf("A is bigger\n");
        }
        else
        {
            printf("C is bigger\n");
        }
    }

    else if (b > a)
    {

        if (b > c)
        {

            printf("B is bigger\n");
        }
        else
        {
            printf("C is bigger");
        }
    }

    else
    {
        printf("C is bigger");
    }

    return 0;
}