#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("The initial value is: %d\n", a);
    b = ++a;
    printf("After b = ++a\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
