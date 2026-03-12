#include <conio.h>
#include <stdio.h>

int main()
{
    int a;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is Odd\n");
    }

    return 0;
}
