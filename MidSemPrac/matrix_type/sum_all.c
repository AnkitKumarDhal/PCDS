#include <conio.h>
#include <stdio.h>

int main()
{
    int a[3][3], i, j, res = 0;
    clrscr();

    printf("Enter the matrix elements: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            res += a[i][j];
        }
    }

    printf("The sum of all the elments of the matrix are: %d", res);
    return 0;
}
