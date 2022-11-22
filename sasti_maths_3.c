#include <stdio.h>

int main()
{

    int n1, n2, n3;

    printf("Enter the value of n1\n");
    scanf("%d ", &n1);

    printf("enter the value of n2\n");
    scanf("%d", &n2);

    printf("enter the value of n3\n");
    scanf("%d", &n3);

    printf("sum of n1+n2+n3\n \n", n1 + n2 + n3);

    printf("multiply of n1*n2*n3\n \n ", n1 * n2 * n3);

    printf("addion of first two then multiply with third", (n1 + n2) * n3);

    return 0;
}