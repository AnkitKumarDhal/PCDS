#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);

    b = ++a;
    printf("After Pre-Increment: a = %d; b = %d", a, b);

    b = a++;
    printf("After Post-Increment: a = %d; b = %d", a, b);

    return 0;
}
