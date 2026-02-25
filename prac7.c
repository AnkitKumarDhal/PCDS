#include <conio.h>
#include <stdio.h>

int main()
{
    char c;

    clrscr();

    printf("Enter the character: ");
    scanf("%c", &c);

    printf("The ASCII code of the character is: %d", c);

    return 0;
}
