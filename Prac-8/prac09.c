#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], *p;
    int len;
    clrscr();
    printf("Enter string: ");
    scanf("%s", s);
    len = strlen(s);
    p = s + len - 1;
    printf("Reversed: ");
    while(p >= s)
    {
        printf("%c", *p);
        p--;
    }
    getch();
    return 0;
}
