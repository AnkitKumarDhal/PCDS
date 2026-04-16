#include <conio.h>
#include <stdio.h>

int main()
{
    int i;
    clrscr();
    printf("The odd and even numbers from 1-100 are: ");
    printf("ODD\t EVEN\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("%d\t", i);
        }
    }
    return 0;
}
