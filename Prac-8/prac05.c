#include <conio.h>
#include <stdio.h>

int search(int *a, int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
        if(*(a + i) == key) return i;
    return -1;
}

int main()
{
    int a[50], n, i, key, res;
    clrscr();
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", a + i);
    printf("Enter key: ");
    scanf("%d", &key);
    res = search(a, n, key);
    if(res != -1) printf("Found at index %d", res);
    else printf("Not found");
    getch();
    return 0;
}
