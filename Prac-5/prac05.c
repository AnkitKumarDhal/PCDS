#include <conio.h>
#include <stdio.h>

int main()
{
    char s[100], res[100];
    int i = 0, j = 0, k, found;
    clrscr();

    printf("Enter the string: ");
    scanf("%s", s);

    while (s[i] != '\0')
    {
        found = 0;
        for (k = 0; k < j; k++)
        {
            if (s[i] == res[k])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            res[j++] = s[i];
        }
        i++;
    }

    res[j] = '\0';

    printf("The unique string: %s", res);
    return 0;
}
