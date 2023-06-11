/*write a program to check whether a given number is divisible by 5 or not.*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int x;
level:
    printf("enter a number\n ");
    scanf("%d", &x);
    (x % 5 == 0) ? printf("divisible by 5 \n ") : printf("not divisible by 5 \n ");
    getch();
    goto level;
    return 0;
}
