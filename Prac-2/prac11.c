#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float a, b, c, D, r1, r2, r_p, r_i;
    clrscr();

    printf("Enter the coefficient of x^2, x and the constant: ");
    scanf("%f %f %f", &a, &b, &c);

    D = (b * b) - (4 * a * c);
    if (D >= 0)
    {
        r1 = ((-b) + sqrt(D)) / (2 * a);
        r2 = ((-b) - sqrt(D)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1: %f\n", r1);
        printf("Root 2: %f\n", r2);
    }
    else if (D == 0)
    {
        r1 = (-b) / (2 * a);
        printf("The Roots are real and equal.\n");
        printf("The roots are: %f\n", r1);
    }
    else
    {
        r_p = (-b) / (2 * a);
        r_i = sqrt(-D) / (2 * a);
        printf("The roots of the equation are imaginary.\n");
        printf("Root 1: %f + i%f\n", r_p, r_i);
        printf("Root 2: %f - i%f\n", r_p, r_i);
    }

    return 0;
}
