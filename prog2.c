/*write a program to check whether a given number is even or add*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("enter value of x=");
    scanf("%d", &x);
    (x % 2 == 0) ? printf("even \n ") : printf("odd \n");
    return 0;
}
