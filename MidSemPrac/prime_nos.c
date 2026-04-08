#include <conio.h>
#include <stdio.h>

int main()
{
    int num;
    int count;
    int i;
    count = 0;

    clrscr();
    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 1; i <= (num / 2); i++)
        if (num % i == 0)
        {
            count++;
        }

    if (count > 1)
    {
        printf("The number is not prime.\n");
    }
    else
    {
        printf("The number is prime.\n");
    }

    getch();
    return 0;
}
