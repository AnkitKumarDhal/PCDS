#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b, c, greatest;
    clrscr();

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // conditional statement:
    // <condition> ? <return value if true> : <return value if false>
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("%d is the greatest among all three.", greatest);

    return 0;
}
