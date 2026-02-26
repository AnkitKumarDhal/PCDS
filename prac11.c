#include <conio.h>
#include <stdio.h>

int main()
{
    float p, t, r, si;

    clrscr();

    printf("Enter the Principal value: ");
    scanf("%f", &p);
    printf("Enter the time period: ");
    scanf("%f", &t);
    printf("Enter the Rate: ");
    scanf("%f", &r);

    si = p * t * r / 100;
    printf("The simple interest on %f for %f years at %f is %f", p, t, r, si);
    return 0;
}
