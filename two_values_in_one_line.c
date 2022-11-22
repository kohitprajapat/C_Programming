#include <stdio.h>

int main()
{

    int a, b, c, d;

    a = c, b = d;

    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);

    printf("a*d is %d", a * b);

    return 0;
}