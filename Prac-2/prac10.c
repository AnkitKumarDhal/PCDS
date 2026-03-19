#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b, c;
    clrscr();

    printf("Enter the angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is invalid.\n");
    }

    return 0;
}
