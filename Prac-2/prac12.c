#include <bits/pthreadtypes.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int ch;
    float a, b;
    clrscr();

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
    scanf("%d", &ch);

    if (ch != 5)
    {
        printf("Enter the two numbers: ");
        scanf("%f %f", &a, &b);
    }

    do
    {
        switch (ch)
        {
        case 1:
            printf("Sum: %f", a + b);
            break;
        case 2:
            printf("Difference: %f", a - b);
            break;
        case 3:
            printf("Product: %f", a * b);
            break;
        case 4:
            if (b != 0)
            {
                printf("Division: %f", a / b);
                break;
            }
            else
            {
                printf("Division by 0!");
                break;
            }
        case 5:
            printf("Exiting...");
            break;
        default:
            printf("Invalid Option");
        }
    } while (ch != 5);

    return 0;
}
