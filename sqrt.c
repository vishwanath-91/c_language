#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int x, y, count=1;

start:

    printf("\n Enter the value of x=");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("\n you are enter negative value");
    }

    else
    {
        y = sqrt(x);
        printf("\n your square value is = %d", y);

        count = count + 1;
        printf("\n");
        printf("count=%d",count);
    }
    if (count <= 5)
    {
        
        goto start;
    }
    printf("\n end of computation");
    return 0;
}