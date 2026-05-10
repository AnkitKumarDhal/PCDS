#include <conio.h>
#include <stdio.h>

int main()
{
    char s1[100], s2[100], s[200];
    int i = 0, j = 0;
    clrscr();

    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    while (s1[i] != '\0')
    {
        s[i] = s1[i];
        i++;
    }

    while (s2[i] != '\0')
    {
        s[i] = s2[i];
        i++;
    }

    s[i] = '\0';

    printf("Concatenated string: %s", s);
    getch();
    return 0;
}
