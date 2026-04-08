#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float a, b, c, D, r1, r2;
    clrscr();

    printf("Enter the coefficient of x^2, x and the constant: ");
    scanf("%f %f %f", &a, &b, &c);

    D = (b * b) - (4 * a * c);
    if (D >= 0)
    {
        r1 = ((-b) + sqrt(D)) / (2 * a);
        r2 = ((-b) - sqrt(D)) / (2 * a);

        printf("The roots of the quadratic equation (%f)x^2 + (%f)x + (%f) are: \n", a, b, c);
        printf("%f and %f\n", r1, r2);
    }
    else
    {
        printf("The quadratic equation has imaginary roots.\n");
    }

    return 0;
}
