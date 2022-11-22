#include <stdio.h>

int main()
{

    int a;
    printf("Enter a digit = ");
    scanf("%d", &a);

    while (a > 256)
    {
        
        printf("%d\n", a);
        --a;
    }

    return 0;
}