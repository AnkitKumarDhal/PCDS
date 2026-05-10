#include <conio.h>
#include <stdio.h>

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exp);
    }
}

int main()
{
    int b, e;
    clrscr();

    printf("Enter the base and exponent: ");
    scanf("%d %d", &b, &e);

    printf("Result: %d", power(b, e));
    return 0;
}
