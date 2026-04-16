#include <conio.h>
#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("The number is perfect.\n");
    }
    else
    {
        printf("The number is not perfect.\n");
    }

    return 0;
}
