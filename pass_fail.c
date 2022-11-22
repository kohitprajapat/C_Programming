#include<stdio.h>

int main() {

    float per;

    printf("Enter your percentage\n");
    scanf("%f", &per);

    if (per <= 33.33)
    {
        printf("You are fail, you got F grade\n");
    }

    else if (per >= 33.34 && per <= 50) {
        printf("You are pass, you got C grade\n");
    }

    else if (per >= 50.00001 && per <= 60) {

        printf("You are paas, you got C+ grade\n");
    }

    else if (per >= 60.00001 && per <= 75) {

        printf("You are paas, you got B grade/n");
    }

    else if (per >= 75.00001 && per <= 80) {

        printf("You are paas, you got B+ grade\n");
    }

    else if (per >= 80.01 && per <= 90) {

        printf("You are paas, you got A grade\n");
    }
    
    else if (per >= 90.01 && per <= 100) {

        printf("Congratulations YOU GOT A+ GRADE");
    }
    
    else {
        printf("(Invalid Percentage)\n Please enter correct Percentage");

    }
   
   



    return 0;
}