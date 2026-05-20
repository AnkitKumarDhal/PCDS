#include <conio.h>
#include <stdio.h>

void fact(int n, int *f)
{
    int i;
    *f = 1;
    for(i = 1; i <= n; i++) *f *= i;
}

int main()
{
    int n, res;
    clrscr();
    printf("Enter number: ");
    scanf("%d", &n);
    fact(n, &res);
    printf("Factorial: %d", res);
    getch();
    return 0;
}
