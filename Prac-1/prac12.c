#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b;
    clrscr();

    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    printf("The original numbers are a: %d and b: %d\n", a, b);

    if (a != b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    printf("The swapped numbers are a: %d and b: %d", a, b);
    return 0;
}
