#include <stdio.h>

int main()
{


    float english, hindi, maths, science, sst, sanskrit;
    float per;
    float allsubs;
    allsubs = english+hindi+maths+science+sst+sanskrit;
    per = allsubs/600*100;


    printf("Enter marks in english\n");
    scanf("%f", &english);
    if (english < 0 && english > 100) {

        printf("Please enter correct value\n");
    }

    printf("Enter marks in hindi\n");
    scanf("%f", &hindi);
    if (hindi < 0 && hindi > 100);
    {
       printf("Please enter correct correct value")
    }
    

    printf("Enter marks in maths\n");
    scanf("%f", &maths);

    printf("Enter marks in science\n");
    scanf("%f", &science);

    printf("Enter marks in sst\n");
    scanf("%f", &sst);

    printf("Enter marks in sanskrit\n");
    scanf("%f", &sanskrit);

   


    return 0;
}