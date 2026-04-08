// Write a program to find the sum and product of two numbers

#include <conio.h>
#include <stdio.h>

int main()
{
    float x, y;
    clrscr();
    printf("Enter the numbers: ");
    scanf("%f %f", &x, &y);
    printf("The sum of the numbers is: %f\nThe product of the numbers is: %f", x + y, x * y);
    return 0;
}
