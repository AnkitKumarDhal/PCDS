#include <conio.h>
#include <stdio.h>

void sort(int *a, int n)
{
    int i, j, tmp;
    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(*(a + i) > *(a + j))
            {
                tmp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tmp;
            }
}

int main()
{
    int a[50], n, i;
    clrscr();
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", a + i);
    sort(a, n);
    for(i = 0; i < n; i++) printf("%d ", *(a + i));
    getch();
    return 0;
}
