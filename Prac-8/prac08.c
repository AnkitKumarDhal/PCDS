#include <conio.h>
#include <stdio.h>

int main()
{
    char s[100], *p;
    int len = 0;
    clrscr();
    printf("Enter string: ");
    scanf("%s", s);
    p = s;
    while(*p != '\0')
    {
        len++;
        p++;
    }
    printf("Length: %d", len);
    getch();
    return 0;
}
