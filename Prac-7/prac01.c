#include <conio.h>
#include <stdio.h>

struct Details
{
    int roll;
    char name[50];
    char building[50];
    char street[50];
    char city[50];
};

int main()
{
    struct Details s;
    clrscr();

    printf("Enter Roll No.: ");
    scanf("%d", &s.roll);

    getchar();

    printf("Enter Name: ");
    gets(s.name);

    printf("Enter Building name: ");
    gets(s.building);

    printf("Enter Street Name: ");
    gets(s.street);

    printf("Enter City name: ");
    gets(s.city);

    printf("\nRecord: %d | %s | %s | %s | %s", s.roll, s.name, s.building, s.street, s.city);
    return 0;
}
