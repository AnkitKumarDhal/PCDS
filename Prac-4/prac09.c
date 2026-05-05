#include <conio.h>
#include <stdio.h>

int main()
{
    int a[10][10], trans[10][10], r, c, i, j;
    clrscr();

    printf("Enter the size of the matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            trans[j][i] = a[i][j];
        }
    }

    printf("The transpose of the entered matrix is: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
