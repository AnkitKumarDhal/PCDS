#include <conio.h>
#include <stdio.h>

int main()
{
    int a1[50], a2[50], m[100], n1, n2, k = 0, i;
    clrscr();

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
        m[k++] = a1[i];
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
        m[k++] = a2[i];
    }

    printf("\nMerged array: \n");
    for (i = 0; i < (n1 + n2); i++)
    {
        printf("%d ", m[i]);
    }

    return 0;
}
