#include <conio.h>
#include <stdio.h>

int main()
{
    int a[50], n, i;
    clrscr();

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Printing the elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
