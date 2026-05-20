#include <conio.h>
#include <stdio.h>

int main()
{
    int a[50], n, i;
    clrscr();
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", a + i);
    printf("Elements are: ");
    for(i = 0; i < n; i++)
        printf("%d ", *(a + i));
    getch();
    return 0;
}
