#include<stdio.h>

int main() {

    int physics, chemistry, maths, hindi , english;
    float total;

    printf("Enter physics marks\n");
    scanf("%d", &physics);

     printf("Enter chemistry marks\n");
    scanf("%d", &chemistry);

     printf("Enter maths marks\n");
    scanf("%d", &maths);

     printf("Enter hindi marks\n");
    scanf("%d", &hindi);

     printf("Enter english marks\n");
    scanf("%d", &english);

    total = (physics+chemistry+maths+hindi+english)/5;

    if (physics<33 || (chemistry<33) || (maths<33) || (hindi<33) || (english<33) || (total<40)) {

        printf("You are fail you got %f percentage", total);
    }

    else 
    {
        printf("You are paas you got %f percentage", total);
    }
    

    return 0;
}