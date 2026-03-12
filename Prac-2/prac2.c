#include <conio.h>
#include <stdio.h>

int main()
{
    int a;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("The number is Negative\n");
    }
    else if (a > 0)
    {
        printf("The number is Positive\n");
    }
    else
    {
        printf("The number is 0");
    }

    return 0;
}
