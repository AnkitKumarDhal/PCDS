#include <conio.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
    char c;
    clrscr();

    printf("Enter the value: ");
    scanf("%c", &c);

    if (isalpha(c))
    {
        printf("The entered value is an Alphabet.\n");
    }
    else if (isdigit(c))
    {
        printf("The entered value is a Number.\n");
    }
    else
    {
        printf("The entered value is neither Alphabet nor Number.\n");
    }

    return 0;
}
