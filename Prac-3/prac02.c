#include <conio.h>
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

    do
    {
        sum += num[i];
        i++;
    } while (i < 50);

    printf("The average of the 50 numbers is: %f", sum / 50.0);
    return 0;
}
