#include <conio.h>
#include <stdio.h>

int main()
{
    int num, i = 1, fac = 1;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &num);

    fac = 1;

    while (i <= num)
    {
        fac *= i;
        i++;
    }

    printf("The factorial of the number %d is %d", num, fac);

    getch();
    return 0;
}
