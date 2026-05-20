#include <conio.h>
#include <stdio.h>

int main()
{
    int a[50], b[50], n, i;
    clrscr();
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", a + i);
    for(i = 0; i < n; i++)
        *(b + i) = *(a + i);
    printf("Copied elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", *(b + i));
    getch();
    return 0;
}
