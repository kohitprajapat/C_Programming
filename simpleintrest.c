#include <stdio.h>

int main()
{

    float P, R, T, SI, CI;

    printf("enter P\n");
    scanf("%f", &P);

    printf("enter R\n");
    scanf("%f", &R);

    printf("enter T\n");
    scanf("%f", &T);

    SI = (P * R * T) / 100;

    printf("Total simple intrest is %f\n \n", SI);

    printf("Total P + SI is %f\n \n", SI + P);

    CI = P * (pow((1 + R / 100), T));

    printf("Total compound intrest is %f\n \n", CI);

    printf("Total P + CI is %f\n \n", CI + P);

    return 0;
}