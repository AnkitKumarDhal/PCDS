#include <conio.h>
#include <stdio.h>

void rev(int *a, int n)
{
    int i, tmp;
    for(i = 0; i < n / 2; i++)
    {
        tmp = *(a + i);
        *(a + i) = *(a + n - 1 - i);
        *(a + n - 1 - i) = tmp;
    }
}

int main()
{
    int a[50], n, i;
    clrscr();
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", a + i);
    rev(a, n);
    printf("Reversed: ");
    for(i = 0; i < n; i++)
        printf("%d ", *(a + i));
    getch();
    return 0;
}
