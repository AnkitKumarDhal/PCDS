#include <conio.h>
#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("The factorial of the given number is: %d", fact);
    return 0;
}
