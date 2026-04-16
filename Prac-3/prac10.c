#include <conio.h>
#include <stdio.h>

int main()
{
    int n, tmp, rev = 0;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &n);

    tmp = n;
    while (tmp != 0)
    {
        rev = (rev * 10) + (tmp % 10);
        tmp /= 10;
    }

    printf("The reverse of the number is: %d\n", rev);
    return 0;
}
