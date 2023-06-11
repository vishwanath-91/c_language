/*define a structure type, struct personal that would contain person name date of joining and salary.using this structure, write a program to read this information for one person from the keyboard and print the same on the screen*/
#include <stdio.h>
#include <conio.h>

struct personal
{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
};
void info(void);
void info_disp(void);

int main()
{
    info();
    info_disp();
    return 0;
}
void info(void)
{
    struct personal person;
    printf("input values \n");

    printf("enter the name=");
    scanf("%s", person.name);

    printf("\n enter the days=");
    scanf("%d", &person.day);

    printf("\n enter the month=");
    scanf("%s", person.month);

    printf("\n enter the year=");
    scanf("%d", &person.year);

    printf("\n enter the salary=");
    scanf("%f", &person.salary);
}

void info_disp(void)
{
    struct personal person;

    printf("name=%s \n", person.name);
    printf("day=%d \n", person.day);
    printf("month=%s \n", person.month);
    printf("year=%d \n", person.year);
    printf("salary=%f \n", person.salary);
}
