#include <conio.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
    char a;

    char k;

    printf("Enter the letter: ");
    scanf("%c", &a);

    k = tolower(a);

    if (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u')
    {
        printf("The entered letter is a Vowel.\n");
    }
    else
    {
        printf("The entered letter is a Consonant.\n");
    }
    return 0;
}
