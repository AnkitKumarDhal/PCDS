#include <conio.h>
#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, i, n;
    clrscr();

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Finbonacci Series: \n");
    printf("0 1 ");
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
