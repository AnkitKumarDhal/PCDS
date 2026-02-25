#include <conio.h>
#include <stdio.h>

int main()
{
    float cent;
    float farh;
    float c_farh;
    float f_cent;

    clrscr();
    printf("Enter the temp in Centigrade: ");
    scanf("%f", &cent);

    c_farh = ((9.0 / 5) * cent) + 32;
    printf("%f Centigrade = %f Farhenheit\n\n", cent, c_farh);

    printf("Enter the temp in Farhenheit: ");
    scanf("%f", &farh);

    f_cent = (farh - 32) * (5.0 / 9);
    printf("%f Farhenheit = %f Centigrade\n", farh, f_cent);
    return 0;
}
