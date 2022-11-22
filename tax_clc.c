#include<stdio.h>

int main() {

    float  tax = 0, income;

printf("Enter your income\n");
scanf("%f", &income);

if (income <= 250000) {

    printf("You're tax free");
}

else if (income > 250000 && income <= 500000)
{
   printf("Your payable tax is %f\n ", (income-250000) *0.05);
}

else if (income > 500000 && income <= 1000000)
{
    printf("Your payable tax is %f\n", (income-250000) * 0.2);
}

else if (income > 1000000)
{
    printf("Your payable tax is %f", (income-250000) * 0.3);
    
}


    return 0;
}