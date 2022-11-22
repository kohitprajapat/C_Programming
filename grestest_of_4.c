#include <stdio.h>

int main()
{

    int a, b, c, d;

    printf("Enter the valur of 4 digits \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b)
    {

        if (a > c)
        {

            if (a > d)
            {

                printf("A is bigger");
            }

            else
            {

                printf("D is bigger");
            }
        }
    }

    else if (b > a)
    {

        if (b > c)
        {

            if (b > d)
            {

                printf("B is bigger\n");
            }

            else
            {

                printf("D is bigger");
            }
        }
    }

    else if (c > a)
    {

        if (c > b)
        {

            if (c > d)
            {

                printf("C is bigger");
            }

            else
            {

                printf("D is bigger");
            }
        }
    }

    else
    {

        printf("D is bigger");
    }

    return 0;
}