#include <conio.h>
#include <stdio.h>

int main()
{
    int num, i, n = 0, tmp, rem, pow, result = 0;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &num);

    tmp = num;
    while (tmp != 0)
    {
        tmp /= 10;
        n++;
    }

    tmp = num;
    while (tmp != 0)
    {
        rem = tmp % 10;
        pow = 1;
        for (i = 0; i < n; i++)
        {
            pow *= rem;
        }
        result += pow;
        tmp /= 10;
    }

    if (result == num)
    {
        printf("The number is an Armstrong Number.\n");
    }
    else
    {
        printf("The number is not an Armstrong Number.\n");
    }

    getch();
    return 0;
}
