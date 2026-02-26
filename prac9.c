#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b;

    clrscr();

    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);

    printf("The original values are a: %d, and b: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The swapped values are a: %d, and b: %d\n", a, b);

    return 0;
}
