#include <conio.h>
#include <inttypes.h>
#include <stdio.h>

int main()
{
    int i, num[50], sum = 0;
    clrscr();
    printf("Enter the 50 numbers: ");
    for (i = 0; i < 50; i++)
    {
        scanf("%d ", &num[i]);
    }

    for (i = 0; i < 50; i++)
    {
        sum += num[i];
    }

    printf("The average of the 50 numbers is: %f", sum / 50.0);
    return 0;
}
