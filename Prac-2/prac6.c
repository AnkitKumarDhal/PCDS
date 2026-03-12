#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b, c;
    clrscr();

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("%d is the largest among all three.\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the largest among all three.\n", b);
    }
    else
    {
        printf("%d is the largest among all three.\n", c);
    }

    return 0;
}
