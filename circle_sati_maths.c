#include <stdio.h>

int main()
{

    float pie = 3.14;
    int radius, height;

    printf("enter radius of circle\n");
    scanf("%d", &radius);

    printf("enter the height of that cylinder\n");
    scanf("%d", &height);

    printf("the volume of circle is %f", pie * radius * radius * height);

    return 0;
}