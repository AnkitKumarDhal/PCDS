#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int a, b, c;
    float s_peri;
    float area;

    printf("Enter the first side (a): ");
    scanf("%d", &a);
    printf("Enter the second side (b): ");
    scanf("%d", &b);
    printf("Enter the third side (c): ");
    scanf("%d", &c);

    s_peri = (a + b + c) / 2.0;
    area = sqrt(s_peri * (s_peri - a) * (s_peri - b) * (s_peri - c));

    printf("The area of the triangle by Heron's Formula is: %f", area);
    return 0;
}
