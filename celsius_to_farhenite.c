#include <stdio.h>

int main()
{

    float celsius;

    printf("enter tempreture in celsius\n");
    scanf("%f", &celsius);

    float farhenite = (celsius * 9 / 5) + 32;

    printf("your tempreture in farhenite is %f", farhenite);

    return 0;
}