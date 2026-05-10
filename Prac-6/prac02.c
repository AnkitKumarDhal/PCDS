#include <conio.h>
#include <stdio.h>

int fact(int n)
{
    int f = 1, i;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n;
    clrscr();
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The factorial of the number is: %d", fact(n));
    return 0;
}
