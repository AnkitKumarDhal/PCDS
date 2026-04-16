#include <conio.h>
#include <stdio.h>

int main()
{
    int num, ognum, revnum = 0, rem;
    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &num);

    ognum = num;

    while (num != 0)
    {
        rem = num % 10;
        revnum = revnum * 10 + rem;
        num /= 10;
    }

    if (ognum == revnum)
    {
        printf("%d is a palindrome.\n", ognum);
    }
    else
    {
        printf("%d is not a palindrome.\n", ognum);
    }

    return 0;
}
