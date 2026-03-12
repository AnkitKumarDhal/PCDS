#include <conio.h>
#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    double d;
    clrscr();

    printf("The size of integer is %d bytes\n", sizeof(a));
    printf("The size of character is %d bytes\n", sizeof(b));
    printf("The size of float is %d bytes\n", sizeof(c));
    printf("The size of double is %d bytes\n", sizeof(d));

    return 0;
}
