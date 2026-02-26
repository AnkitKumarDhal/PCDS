#include <conio.h>
#include <stdio.h>

int main()
{
    float b, l, s;

    clrscr();

    printf("Enter the length and breadth of the retangle: ");
    scanf("%f %f", &l, &b);

    printf("The area of the rectangle is %f\n\n", l * b);

    printf("Enter one side of the square: ");
    scanf("%f", &s);

    printf("The area of the square is %f\n", s * s);

    return 0;
}
