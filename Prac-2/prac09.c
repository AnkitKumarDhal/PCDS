#include <conio.h>
#include <stdio.h>

int main()
{
    int a;
    clrscr();

    printf("Enter the year: ");
    scanf("%d", &a);

    if (a % 4 == 0)
    {
        printf("The year is a leap year.");
    }
    else
    {
        printf("The year is not a leap year.");
    }

    return 0;
}
