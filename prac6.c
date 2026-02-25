#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float a, b, c, s_peri, area;

    printf("Enter the first side (a): ");
    scanf("%f", &a);
    printf("Enter the second side (b): ");
    scanf("%f", &b);
    printf("Enter the third side (c): ");
    scanf("%f", &c);

    s_peri = (a + b + c) / 2.0;
    area = sqrt(s_peri * (s_peri - a) * (s_peri - b) * (s_peri - c));

    printf("The area of the triangle by Heron's Formula is: %f", area);
    return 0;
}
