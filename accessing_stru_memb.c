#include<stdio.h>
#include<conio.h>

struct personal
{
    char name[20];
    int day;
    char month[10];
    int years;
    float salary;
};


int main()
{
    struct personal person;
    printf("input values \n");

    printf("enter name");
    scanf("%s",person.name);

    printf("enter day");
    scanf("%d",&person.day);

    printf("enter month");
    scanf("%s",person.month);

    printf("enter years");
    scanf("%d",&person.years);

    printf("enter salary");
    scanf("%f",&person.salary);

    printf("%s %d %s %d %f \n",person.name,person.day,person.month,person.years,person.salary);

    return 0;
    

}