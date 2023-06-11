/*write a program with multiple function that do not communicate any data between then.*/
/*a program with three user defined function is given main is the calling function that calls print line and value function.*/
/*since both the called function contain no argument , there are no argument declarations.*/
/*the print line function ,when encountered , prints a line with a length of 35 characters as prescribed in the function. the value function calculates the value of principal amount after a certain period of years and prints the results. the following equation is evaluated repeatedly. */
#include <stdio.h>
#include <conio.h>
void println(void);
void value(void);

int main()
{
    println();
    value();
}
/*function1 : println()*/
void println(void)
{
    int i;
    for (i = 1; i <= 35; i++)
    {
        printf("%c", '-');
    }
    printf("\n");
}
/*function2:value()*/
void value(void)
{
    int year, period;
    float interest, sum, principal;

    printf("principal amount?");
    scanf("%f", &principal);

    printf("interest rate?");
    scanf("%f", &interest);

    printf("period?");
    scanf("%d", &period);

    sum = principal;
    year = 1;

    while (year <= period)
    {
        sum = sum * (1 + interest);
        year = year + 1;
    }
    printf("\n %f \n %f \n %d \n %f \n", principal, interest, period, sum);
}
