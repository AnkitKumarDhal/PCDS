#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b, tmp;

    clrscr();

    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);

    printf("The original values of a: %d and b: %d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;

    printf("The swapped values of a: %d and b: %d", a, b);

    return 0;
}
