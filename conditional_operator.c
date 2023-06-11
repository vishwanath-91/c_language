#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("enter a number");
    scanf("%d", &x);
    (x > 0) ? printf("positive \n") : printf("negative \n");
    printf(x > 0 ? "positive \n " : "no-positive \n");
    return 0;
}
