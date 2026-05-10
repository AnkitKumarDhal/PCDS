#include <conio.h>
#include <stdio.h>

int main()
{
    char s[100], rev[100];
    int len = 0, i, j = 0;
    clrscr();

    printf("Enter the string: ");
    scanf("%s", s);

    while (s[len] != '\0')
    {
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        rev[j++] = s[i];
    }

    rev[j] = '\0';

    printf("Reversed string: %s", rev);

    return 0;
}
