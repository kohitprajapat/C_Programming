#include <stdio.h>

int main()
{

    char ch;

    printf("Enter a charcter = ");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {

        printf("%c is lowercase", ch);
    }
    else
    {

        printf("%c is not lowercase", ch);
        }

    return 0;
}