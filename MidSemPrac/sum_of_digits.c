#include <conio.h>
#include <stdio.h>

int main()
{
    int num, tmp, result = 0, s;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &num);

    tmp = num;
    while (tmp != 0)
    {
        s = tmp % 10;
        result += s;
        tmp /= 10;
    }

    printf("The sum of the digits is: %d", result);
    getch();
    return 0;
}
