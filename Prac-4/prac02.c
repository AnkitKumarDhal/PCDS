#include <conio.h>
#include <stdio.h>

int main()
{
    int a[50], n, i, max1, max2;
    clrscr();

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max1 = a[0];
    max2 = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] < max1)
        {
            max2 = a[i];
        }
        else if (max1 == max2)
        {
            max2 = a[i];
        }
    }

    printf("The highest and second highest numbers are: %d and %d", max1, max2);
    return 0;
}
