#include<stdio.h>

int main() {

    float a,amount;
   
    printf("Per banana cost is 10rs\n\n");
    printf("Per dozen banana cost is 100rs\n\n");
    printf("If you'll buy more than a dozen you'll get discount\n\n");

    printf("How much banana you want = ");
    scanf("%f", &a);

    if (a<12) {
     amount = a*10;
    }
    else if (a==12) {
        amount = a*8.3332;
    }
    else if (a>12) {
        amount = a*7;
    }
    else {
        printf("Error value");
    }

     printf("\nYour total cost is %f", amount);
int pass, x=10;
while (x!=0)
	{
	printf("\n\nIF YOu're Admin and want to see Profit in this deal\nInput Pin: ");
	scanf("%d",&pass);	
	
	if (pass==1234)
	{
		printf("\n\nWelcome Sir!");
		x=0;
    }
    else
    {
       printf("\n\nWrong password, try another");       
	}
	printf("\n");
   }

   printf("\n\nProfit in this deal is %f", a*4);

    return 0;
}