#include <conio.h>
#include <stdio.h>

void main()
{
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;
    clrscr();

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSum of the two matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    getch();
}
