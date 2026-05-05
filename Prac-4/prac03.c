#include <conio.h>
#include <stdio.h>

int main()
{
    int a[50], n, i, key, found = 0;
    clrscr();

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("\nElement %d found in the array at index %d.\n", key, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nElement not found in array.");
    }

    return 0;
}
