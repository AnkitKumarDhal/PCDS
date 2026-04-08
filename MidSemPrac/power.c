#include <conio.h>
#include <stdio.h>

int main()
{
    int x, y, i, res = 1;
    clrscr();

    printf("Enter the number and the power in the format x^y: ");
    scanf("%d^%d", &x, &y);

    for (i = 0; i < y; i++)
    {
        res *= x;
    }
    printf("%d^%d is equal to: %d", x, y, res);
    return 0;
}
