#include <conio.h>
#include <stdio.h>

void prime(int n1, int n2)
{
    int i, j, is_prime;
    for (i = n1; i <= n2; i++)
    {
        if (i < 2)
        {
            continue;
        }
        is_prime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n1, n2;
    clrscr();

    printf("Enter the two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("Prime numbers between %d and %d are: ", n1, n2);
    prime(n1, n2);
    return 0;
}
