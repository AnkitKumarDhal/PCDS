#include <conio.h>
#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i = 0, same = 1;
    clrscr();

    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            same = 0;
            break;
        }

        i++;
    }

    if (same == 1)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are unequal.\n");
    }

    getch();
    return 0;
}
