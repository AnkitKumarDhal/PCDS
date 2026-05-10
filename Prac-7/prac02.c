#include <conio.h>
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    char course[75];
    int sem;
};

void display(struct Student st)
{
    printf("\t\tStudent Details\n");
    printf("Name: %s\n", st.name);
    printf("Roll No.: %d\n", st.roll);
    printf("Course: %s\n", st.course);
    printf("Semseter: %d\n", st.sem);
}

int main()
{
    struct Student st;
    clrscr();

    printf("Enter Roll Number: ");
    scanf("%d", &st.roll);

    getchar();

    printf("Enter name: ");
    gets(st.name);

    printf("Enter Course: ");
    gets(st.course);

    printf("Enter Semester: ");
    gets(st.sem);

    display(st);
    return 0;
}
