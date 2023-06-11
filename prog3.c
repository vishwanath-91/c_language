/*write a program to check whether a given number is divisible by 3 and 2*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("enter a number");
    scanf("%d", &x);
    (x % 3 == 0 && x % 2 == 0) ? printf("divisible by 3 and 2") : printf("not divisible by 3 and 2");
    return 0;
}
