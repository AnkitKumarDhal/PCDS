#include <conio.h>
#include <stdio.h>

int dsum(int a[5][5], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    return sum;
}

int main()
{
    int a[5][5], i, j, n;
    clrscr();
    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Sum of the diagonals: %d", dsum(a, n));
    return 0;
}
