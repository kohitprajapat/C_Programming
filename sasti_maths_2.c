#include <stdio.h>

int main()
{

    int n1, n2, n3;

    printf("enter the value of n1\n");
    scanf("%d", &n1);

    printf("enter the value of n2\n");
    scanf("%d", &n2);

    printf("enter the value of n3\n");
    scanf("%d", &n3);

    printf("total of all = %d \n \n", n1 + n2 + n3);

    printf("all multiplication = %d \n \n", n1 * n2 * n3);

    printf("first two addition then into by three = %d \n \n", (n1 + n2) * n3);

    return 0;
}