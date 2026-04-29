#include <conio.h>
#include <stdio.h>

int main()
{
    int i, n1, n2, gcd;
    clrscr();

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("The GCD of %d and %d is %d.\n", n1, n2, gcd);
    return 0;
}
