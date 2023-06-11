#include <stdio.h>
#include <conio.h>

void calculation(void);
void addition(void);
void subtraction(void);
void multiplication(void);

int main()
{
    calculation();
    return 0;
}
void calculation(void)
{
    addition();
    printf("\n");
    subtraction();
    printf("\n");
    multiplication();
    printf("\n");
}

void addition(void)
{
    int a, b, c;
    printf("\n enter the value of a for addition=");
    scanf("%d", &a);
    printf("\n enter the value of b for addition=");
    scanf("%d", &b);
    c = a + b;
    printf("\n the addition is = %d", c);
}
void subtraction(void)
{
    int a, b, c;
    printf("\n enter the value of a for subtraction");
    scanf("%d", &a);
    printf("\n enter the value of b for subtraction");
    scanf("%d", &b);
    c = a - b;
    printf("\n the subtraction is = %d", c);
}
void multiplication(void)
{
    int a, b, c;
    printf("\n enter the value of a for multiplication");
    scanf("%d", &a);
    printf("\n enter the value of b for multiplication");
    scanf("%d", &b);
    c = a * b;
    printf("\nthe multiplication is = %d", c);
}
