#include <conio.h>
#include <stdio.h>

int main()
{
    float base, height, area;

    clrscr();

    printf("Enter the base: ");
    scanf("%f", &base);

    printf("Enter the height: ");
    scanf("%f", &height);

    area = (1.0 / 2) * (height * base);
    printf("The area of the traigle is : %f", area);

    return 0;
}
