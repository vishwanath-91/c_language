#include <stdio.h>
#include <conio.h>

void println(char);
void value(float, float, int);

int main()
{
    float principal, interest;
    int period;
    printf("enter principal amount,interest");
    printf("rate,and period \n");

    scanf("%f %f %d", &principal, &interest, &period);

    println('-');
    value(principal, interest, period);
    println('-');
    return 0;
}

void println(char ch)
{
    int i;
    for (i = 1; i <= 52; i++)
    {
        printf("%c", ch);
    }
    printf("\n");
}
void value(float p, float r, int n)
{
    int year;
    float sum;
    sum = p;
    year = 1;
    while (year <= n)
    {
        sum = sum * (1 + r);
        year = year + 1;
    }
    printf("%f \t %f \t %d \t %f \n", p, r, n, sum);
}
