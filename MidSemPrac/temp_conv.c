#include <conio.h>
#include <stdio.h>

int main()
{
    float C, C_F;
    clrscr();

    printf("Enter the number in Celcius: ");
    scanf("%f", &C);

    C_F = (9.0 / 5) * C + 32;
    printf("The temp in Farhenheit is: %f", C_F);
    return 0;
}
