#include <conio.h>
#include <stdio.h>

int main()
{
    char s[100];
    int chr = 0;
    clrscr();

    printf("Enter the string: ");
    scanf("%s", s);

    while (s[chr] != '\0')
    {
        chr++;
    }

    printf("The length of the string is: %d", chr);
    getch();
    return 0;
}
