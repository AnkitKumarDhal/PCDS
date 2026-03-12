#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b, c, g;
    clrscr();

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    g = a;
    if (b > g)
    {
        g = b;
    }
    if (c > b)
    {
        g = c;
    }

    printf("%d is the greatest among all three.\n", g);

    return 0;
}
