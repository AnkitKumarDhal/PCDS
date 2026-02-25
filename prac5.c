#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float radius, area;

    clrscr();

    printf("Enter the radius : ");
    scanf("%f", &radius);

    area = M_PI * (radius) * (radius);
    printf("The area of the circle is : %f", area);

    return 0;
}
