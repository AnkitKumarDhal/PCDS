#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("The initial value is: %d\n", a);

    b = ++a + a++ + ++a + a++;
    printf("The final value of a: %d and b: %d", a, b);

    return 0;
}
