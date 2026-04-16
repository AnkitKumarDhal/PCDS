#include <conio.h>
#include <stdio.h>

int main()
{
    int i, n, rem, tmp, s, sum = 0;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &n);

    tmp = n;
    while (tmp != 0)
    {
        rem = tmp % 10;
        sum += rem;
        tmp = tmp / 10;
    }

    printf("The sum of digits of the given number is: %d", sum);
    return 0;
}
