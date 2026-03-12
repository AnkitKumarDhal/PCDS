#include <conio.h>
#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
        printf("Lowercase: %c\n", c);
    }
    else if (c >= 'a' && c <= 'z')
    {
        c -= 32;
        printf("Uppercase: %c\n", c);
    }
    else
    {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}
