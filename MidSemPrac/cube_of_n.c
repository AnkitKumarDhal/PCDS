#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int i, j, n, res = 0;
    clrscr();

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        res += pow(i, 3);
    }

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         pow *= i;
    //     }
    //     res += pow;
    //     pow = 1;
    // }

    printf("The sum of the cubes of first n numbers is: %d", res);
    return 0;
}
